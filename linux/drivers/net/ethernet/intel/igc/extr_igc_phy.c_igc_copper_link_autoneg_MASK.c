
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* write_reg ) (struct igc_hw*,int ,int) ;scalar_t__ (* read_reg ) (struct igc_hw*,int ,int*) ;} ;
struct igc_phy_info {scalar_t__ autoneg_wait_to_complete; TYPE_1__ ops; int autoneg_mask; int autoneg_advertised; } ;
struct TYPE_4__ {int get_link_status; } ;
struct igc_hw {TYPE_2__ mac; struct igc_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct igc_hw*) ;
 scalar_t__ FUNC_2 (struct igc_hw*) ;
 scalar_t__ FUNC_3 (struct igc_hw*,int ,int*) ;
 scalar_t__ FUNC_4 (struct igc_hw*,int ,int) ;

__attribute__((used)) static s32 FUNC_5(struct igc_hw *VAR_3)
{
 struct igc_phy_info *VAR_4 = &VAR_3->phy;
 u16 VAR_5;
 s32 VAR_6;




 VAR_4->autoneg_advertised &= VAR_4->autoneg_mask;




 if (VAR_4->autoneg_advertised == 0)
  VAR_4->autoneg_advertised = VAR_4->autoneg_mask;

 FUNC_0("Reconfiguring auto-neg advertisement params\n");
 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6) {
  FUNC_0("Error Setting up Auto-Negotiation\n");
  goto out;
 }
 FUNC_0("Restarting Auto-Neg\n");




 VAR_6 = VAR_4->ops.read_reg(VAR_3, VAR_2, &VAR_5);
 if (VAR_6)
  goto out;

 VAR_5 |= (VAR_0 | VAR_1);
 VAR_6 = VAR_4->ops.write_reg(VAR_3, VAR_2, VAR_5);
 if (VAR_6)
  goto out;




 if (VAR_4->autoneg_wait_to_complete) {
  VAR_6 = FUNC_2(VAR_3);
  if (VAR_6) {
   FUNC_0("Error while waiting for autoneg to complete\n");
   goto out;
  }
 }

 VAR_3->mac.get_link_status = 1;

out:
 return VAR_6;
}
