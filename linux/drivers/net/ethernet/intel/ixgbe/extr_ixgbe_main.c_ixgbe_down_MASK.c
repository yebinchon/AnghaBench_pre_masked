
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_5__ {int (* disable_tx_laser ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct ixgbe_hw {TYPE_3__ mac; } ;
struct ixgbe_adapter {int num_vfs; int pdev; TYPE_1__* vfinfo; struct ixgbe_hw hw; int service_timer; int flags; int flags2; int state; scalar_t__* xdp_ring; struct net_device* netdev; } ;
struct TYPE_4__ {int clear_to_send; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ixgbe_adapter*) ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (struct ixgbe_adapter*) ;
 int FUNC_6 (struct ixgbe_adapter*) ;
 int FUNC_7 (struct ixgbe_adapter*) ;
 int FUNC_8 (struct ixgbe_adapter*) ;
 int FUNC_9 (struct ixgbe_adapter*) ;
 int FUNC_10 (struct ixgbe_adapter*) ;
 int FUNC_11 (struct ixgbe_adapter*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct ixgbe_hw*) ;
 int FUNC_17 () ;
 scalar_t__ FUNC_18 (int ,int *) ;

void FUNC_19(struct ixgbe_adapter *VAR_5)
{
 struct net_device *VAR_6 = VAR_5->netdev;
 struct ixgbe_hw *VAR_7 = &VAR_5->hw;
 int VAR_8;


 if (FUNC_18(VAR_3, &VAR_5->state))
  return;


 FUNC_14(VAR_6);


 FUNC_12(VAR_6);
 FUNC_13(VAR_6);


 FUNC_5(VAR_5);


 if (VAR_5->xdp_ring[0])
  FUNC_17();

 FUNC_8(VAR_5);

 FUNC_9(VAR_5);

 FUNC_1(VAR_4, &VAR_5->state);
 VAR_5->flags2 &= ~VAR_1;
 VAR_5->flags &= ~VAR_2;

 FUNC_2(&VAR_5->service_timer);

 if (VAR_5->num_vfs) {

  FUNC_0(&VAR_5->hw, VAR_0, 0);


  for (VAR_8 = 0 ; VAR_8 < VAR_5->num_vfs; VAR_8++)
   VAR_5->vfinfo[VAR_8].clear_to_send = 0;


  FUNC_10(VAR_5);


  FUNC_7(VAR_5);
 }


 FUNC_6(VAR_5);

 if (!FUNC_15(VAR_5->pdev))
  FUNC_11(VAR_5);


 if (VAR_7->mac.ops.disable_tx_laser)
  VAR_7->mac.ops.disable_tx_laser(VAR_7);

 FUNC_4(VAR_5);
 FUNC_3(VAR_5);
}
