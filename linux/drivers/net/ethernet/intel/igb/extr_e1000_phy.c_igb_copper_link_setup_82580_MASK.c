
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int ) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int *) ;scalar_t__ (* reset ) (struct e1000_hw*) ;} ;
struct e1000_phy_info {scalar_t__ type; int mdix; TYPE_1__ ops; scalar_t__ reset_disable; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int ) ;

s32 FUNC_6(struct e1000_hw *VAR_8)
{
 struct e1000_phy_info *VAR_9 = &VAR_8->phy;
 s32 VAR_10;
 u16 VAR_11;

 if (VAR_9->reset_disable) {
  VAR_10 = 0;
  goto out;
 }

 if (VAR_9->type == VAR_7) {
  VAR_10 = VAR_8->phy.ops.reset(VAR_8);
  if (VAR_10) {
   FUNC_0("Error resetting the PHY.\n");
   goto out;
  }
 }


 VAR_10 = VAR_9->ops.read_reg(VAR_8, VAR_2, &VAR_11);
 if (VAR_10)
  goto out;

 VAR_11 |= VAR_0;


 VAR_11 |= VAR_1;

 VAR_10 = VAR_9->ops.write_reg(VAR_8, VAR_2, VAR_11);
 if (VAR_10)
  goto out;


 VAR_10 = VAR_9->ops.read_reg(VAR_8, VAR_6, &VAR_11);
 if (VAR_10)
  goto out;
 VAR_11 &= ~VAR_5;





 switch (VAR_8->phy.mdix) {
 case 1:
  break;
 case 2:
  VAR_11 |= VAR_4;
  break;
 case 0:
 default:
  VAR_11 |= VAR_3;
  break;
 }
 VAR_10 = VAR_8->phy.ops.write_reg(VAR_8, VAR_6, VAR_11);

out:
 return VAR_10;
}
