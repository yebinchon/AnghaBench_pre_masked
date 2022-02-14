
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int (* set_rar ) (struct ixgbe_hw*,int ,int ,int ) ;} ;
struct TYPE_4__ {int get_link_status; int perm_addr; TYPE_1__ ops; int addr; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbevf_adapter {int service_timer; int state; int mbx_lock; struct ixgbe_hw hw; struct net_device* netdev; } ;


 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ixgbevf_adapter*) ;
 int FUNC_4 (struct ixgbevf_adapter*) ;
 int FUNC_5 (struct ixgbevf_adapter*) ;
 int FUNC_6 (struct ixgbevf_adapter*) ;
 int FUNC_7 (struct ixgbevf_adapter*) ;
 int VAR_2 ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct ixgbe_hw*,int ,int ,int ) ;
 int FUNC_14 (struct ixgbe_hw*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_15(struct ixgbevf_adapter *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;
 struct ixgbe_hw *VAR_5 = &VAR_3->hw;

 FUNC_3(VAR_3);

 FUNC_11(&VAR_3->mbx_lock);

 if (FUNC_2(VAR_5->mac.addr))
  VAR_5->mac.ops.set_rar(VAR_5, 0, VAR_5->mac.addr, 0);
 else
  VAR_5->mac.ops.set_rar(VAR_5, 0, VAR_5->mac.perm_addr, 0);

 FUNC_12(&VAR_3->mbx_lock);

 FUNC_10();
 FUNC_1(VAR_1, &VAR_3->state);
 FUNC_6(VAR_3);


 FUNC_0(VAR_5, VAR_0);
 FUNC_5(VAR_3);


 FUNC_9(VAR_4);

 FUNC_7(VAR_3);
 FUNC_4(VAR_3);

 VAR_5->mac.get_link_status = 1;
 FUNC_8(&VAR_3->service_timer, VAR_2);
}
