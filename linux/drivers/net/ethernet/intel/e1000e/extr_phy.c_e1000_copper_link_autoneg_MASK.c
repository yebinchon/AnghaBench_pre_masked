
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct e1000_phy_info {scalar_t__ autoneg_wait_to_complete; int autoneg_mask; int autoneg_advertised; } ;
struct TYPE_2__ {int get_link_status; } ;
struct e1000_hw {TYPE_1__ mac; struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_3)
{
 struct e1000_phy_info *VAR_4 = &VAR_3->phy;
 s32 VAR_5;
 u16 VAR_6;




 VAR_4->autoneg_advertised &= VAR_4->autoneg_mask;




 if (!VAR_4->autoneg_advertised)
  VAR_4->autoneg_advertised = VAR_4->autoneg_mask;

 FUNC_4("Reconfiguring auto-neg advertisement params\n");
 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5) {
  FUNC_4("Error Setting up Auto-Negotiation\n");
  return VAR_5;
 }
 FUNC_4("Restarting Auto-Neg\n");




 VAR_5 = FUNC_2(VAR_3, VAR_2, &VAR_6);
 if (VAR_5)
  return VAR_5;

 VAR_6 |= (VAR_0 | VAR_1);
 VAR_5 = FUNC_3(VAR_3, VAR_2, VAR_6);
 if (VAR_5)
  return VAR_5;




 if (VAR_4->autoneg_wait_to_complete) {
  VAR_5 = FUNC_1(VAR_3);
  if (VAR_5) {
   FUNC_4("Error while waiting for autoneg to complete\n");
   return VAR_5;
  }
 }

 VAR_3->mac.get_link_status = 1;

 return VAR_5;
}
