
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int perm_addr; int dev_addr; } ;
struct TYPE_3__ {int (* init_hw ) (struct ixgbe_hw*) ;scalar_t__ (* reset_hw ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {int addr; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbevf_adapter {int last_reset; struct ixgbe_hw hw; struct net_device* netdev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ixgbe_hw*,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ixgbevf_adapter*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*) ;

void FUNC_6(struct ixgbevf_adapter *VAR_1)
{
 struct ixgbe_hw *VAR_2 = &VAR_1->hw;
 struct net_device *VAR_3 = VAR_1->netdev;

 if (VAR_2->mac.ops.reset_hw(VAR_2)) {
  FUNC_1(VAR_2, "PF still resetting\n");
 } else {
  VAR_2->mac.ops.init_hw(VAR_2);
  FUNC_3(VAR_1);
 }

 if (FUNC_2(VAR_1->hw.mac.addr)) {
  FUNC_0(VAR_3->dev_addr, VAR_1->hw.mac.addr);
  FUNC_0(VAR_3->perm_addr, VAR_1->hw.mac.addr);
 }

 VAR_1->last_reset = VAR_0;
}
