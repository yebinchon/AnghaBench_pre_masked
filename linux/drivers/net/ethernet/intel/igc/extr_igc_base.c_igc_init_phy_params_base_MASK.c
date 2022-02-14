
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ (* reset ) (struct igc_hw*) ;} ;
struct igc_phy_info {scalar_t__ media_type; int reset_delay_us; int id; int type; TYPE_2__ ops; int autoneg_mask; } ;
struct TYPE_3__ {int func; } ;
struct igc_hw {struct igc_phy_info phy; TYPE_1__ bus; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;

 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct igc_hw*) ;
 scalar_t__ FUNC_2 (struct igc_hw*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct igc_hw*) ;

__attribute__((used)) static s32 FUNC_5(struct igc_hw *VAR_8)
{
 struct igc_phy_info *VAR_9 = &VAR_8->phy;
 s32 VAR_10 = 0;

 if (VAR_8->phy.media_type != VAR_5) {
  VAR_9->type = VAR_7;
  goto out;
 }

 VAR_9->autoneg_mask = VAR_0;
 VAR_9->reset_delay_us = 100;


 VAR_8->bus.func = (FUNC_3(VAR_2) & VAR_3) >>
   VAR_4;






 VAR_10 = VAR_8->phy.ops.reset(VAR_8);
 if (VAR_10) {
  FUNC_0("Error resetting the PHY.\n");
  goto out;
 }

 VAR_10 = FUNC_2(VAR_8);
 if (VAR_10)
  return VAR_10;

 FUNC_1(VAR_8);


 switch (VAR_9->id) {
 case 128:
  VAR_9->type = VAR_6;
  break;
 default:
  VAR_10 = -VAR_1;
  goto out;
 }

out:
 return VAR_10;
}
