
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbevf_adapter {int num_rx_queues; int num_tx_queues; int num_xdp_queues; int pdev; TYPE_2__** xdp_ring; TYPE_1__** tx_ring; int service_timer; int * rx_ring; int state; struct ixgbe_hw hw; struct net_device* netdev; } ;
struct TYPE_4__ {int reg_idx; } ;
struct TYPE_3__ {int reg_idx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ixgbevf_adapter*) ;
 int FUNC_4 (struct ixgbevf_adapter*) ;
 int FUNC_5 (struct ixgbevf_adapter*,int ) ;
 int FUNC_6 (struct ixgbevf_adapter*) ;
 int FUNC_7 (struct ixgbevf_adapter*) ;
 int FUNC_8 (struct ixgbevf_adapter*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 int FUNC_14 (int,int) ;

void FUNC_15(struct ixgbevf_adapter *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->netdev;
 struct ixgbe_hw *VAR_4 = &VAR_2->hw;
 int VAR_5;


 if (FUNC_13(VAR_1, &VAR_2->state))
  return;


 for (VAR_5 = 0; VAR_5 < VAR_2->num_rx_queues; VAR_5++)
  FUNC_5(VAR_2, VAR_2->rx_ring[VAR_5]);

 FUNC_14(10000, 20000);

 FUNC_11(VAR_3);


 FUNC_9(VAR_3);
 FUNC_10(VAR_3);

 FUNC_6(VAR_2);

 FUNC_7(VAR_2);

 FUNC_2(&VAR_2->service_timer);


 for (VAR_5 = 0; VAR_5 < VAR_2->num_tx_queues; VAR_5++) {
  u8 VAR_6 = VAR_2->tx_ring[VAR_5]->reg_idx;

  FUNC_1(VAR_4, FUNC_0(VAR_6),
    VAR_0);
 }

 for (VAR_5 = 0; VAR_5 < VAR_2->num_xdp_queues; VAR_5++) {
  u8 VAR_7 = VAR_2->xdp_ring[VAR_5]->reg_idx;

  FUNC_1(VAR_4, FUNC_0(VAR_7),
    VAR_0);
 }

 if (!FUNC_12(VAR_2->pdev))
  FUNC_8(VAR_2);

 FUNC_4(VAR_2);
 FUNC_3(VAR_2);
}
