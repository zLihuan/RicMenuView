//
//  RicMenuDepth1Cell.h
//  RicMenu
//
//  Created by rice on 16/5/31.
//
//

#import <UIKit/UIKit.h>

#import "RicMenuItemCellDelegate.h"

@interface RicMenuDepth1Cell : UITableViewCell<RicMenuItemDelegate>

@property (nonatomic, readonly) RicMenuItem *filterModel;

- (void)setFilterModel:(RicMenuItem *)filterModel;

@end