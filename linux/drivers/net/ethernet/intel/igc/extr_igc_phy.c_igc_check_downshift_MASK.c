
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct igc_phy_info {int type; int speed_downgraded; } ;
struct igc_hw {struct igc_phy_info phy; } ;
typedef int s32 ;




s32 FUNC_0(struct igc_hw *VAR_0)
{
 struct igc_phy_info *VAR_1 = &VAR_0->phy;
 s32 VAR_2;

 switch (VAR_1->type) {
 case 128:
 default:

  VAR_1->speed_downgraded = 0;
  VAR_2 = 0;
 }

 return VAR_2;
}
