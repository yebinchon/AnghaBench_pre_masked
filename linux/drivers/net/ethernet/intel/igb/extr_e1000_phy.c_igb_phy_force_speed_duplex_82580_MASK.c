
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int ) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int *) ;} ;
struct e1000_phy_info {scalar_t__ autoneg_wait_to_complete; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct e1000_hw*,int *) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int,int*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int ) ;
 int FUNC_7 (int) ;

s32 FUNC_8(struct e1000_hw *VAR_4)
{
 struct e1000_phy_info *VAR_5 = &VAR_4->phy;
 s32 VAR_6;
 u16 VAR_7;
 bool VAR_8;

 VAR_6 = VAR_5->ops.read_reg(VAR_4, VAR_2, &VAR_7);
 if (VAR_6)
  goto out;

 FUNC_1(VAR_4, &VAR_7);

 VAR_6 = VAR_5->ops.write_reg(VAR_4, VAR_2, VAR_7);
 if (VAR_6)
  goto out;




 VAR_6 = VAR_5->ops.read_reg(VAR_4, VAR_1, &VAR_7);
 if (VAR_6)
  goto out;

 VAR_7 &= ~VAR_0;

 VAR_6 = VAR_5->ops.write_reg(VAR_4, VAR_1, VAR_7);
 if (VAR_6)
  goto out;

 FUNC_0("I82580_PHY_CTRL_2: %X\n", VAR_7);

 FUNC_7(1);

 if (VAR_5->autoneg_wait_to_complete) {
  FUNC_0("Waiting for forced speed/duplex link on 82580 phy\n");

  VAR_6 = FUNC_2(VAR_4, VAR_3, 100000, &VAR_8);
  if (VAR_6)
   goto out;

  if (!VAR_8)
   FUNC_0("Link taking longer than expected.\n");


  VAR_6 = FUNC_2(VAR_4, VAR_3, 100000, &VAR_8);
  if (VAR_6)
   goto out;
 }

out:
 return VAR_6;
}
