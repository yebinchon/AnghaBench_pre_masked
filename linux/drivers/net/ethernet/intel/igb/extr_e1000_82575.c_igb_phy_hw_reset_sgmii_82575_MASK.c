
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int,int) ;} ;
struct e1000_phy_info {scalar_t__ id; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int,int) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_2)
{
 struct e1000_phy_info *VAR_3 = &VAR_2->phy;
 s32 VAR_4;





 FUNC_0("Soft resetting SGMII attached PHY...\n");




 VAR_4 = VAR_2->phy.ops.write_reg(VAR_2, 0x1B, 0x8084);
 if (VAR_4)
  goto out;

 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4)
  goto out;

 if (VAR_3->id == VAR_0)
  VAR_4 = FUNC_1(VAR_2);
 if (VAR_3->id == VAR_1)
  VAR_4 = FUNC_2(VAR_2);
out:
 return VAR_4;
}
