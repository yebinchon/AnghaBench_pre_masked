
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int power_down; int power_up; } ;
struct e1000_phy_info {scalar_t__ media_type; int addr; int reset_delay_us; scalar_t__ id; int type; int autoneg_mask; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_1(struct e1000_hw *VAR_8)
{
 struct e1000_phy_info *VAR_9 = &VAR_8->phy;
 s32 VAR_10;

 if (VAR_8->phy.media_type != VAR_3) {
  VAR_9->type = VAR_5;
  return 0;
 } else {
  VAR_9->ops.power_up = VAR_7;
  VAR_9->ops.power_down = VAR_6;
 }

 VAR_9->addr = 1;
 VAR_9->autoneg_mask = VAR_0;
 VAR_9->reset_delay_us = 100;
 VAR_9->type = VAR_4;


 VAR_10 = FUNC_0(VAR_8);


 if (VAR_9->id != VAR_2)
  return -VAR_1;

 return VAR_10;
}
