
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_phy_if {int (* phy_stop ) (struct xgbe_prv_data*) ;} ;
struct xgbe_hw_if {int (* exit ) (struct xgbe_prv_data*) ;int (* disable_rx ) (struct xgbe_prv_data*) ;int (* disable_tx ) (struct xgbe_prv_data*) ;} ;
struct xgbe_prv_data {unsigned int channel_count; int dev_state; struct xgbe_channel** channel; int dev_workqueue; struct net_device* netdev; struct xgbe_phy_if phy_if; struct xgbe_hw_if hw_if; } ;
struct xgbe_channel {int queue_index; int tx_ring; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct netdev_queue* FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct netdev_queue*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct xgbe_prv_data*) ;
 int FUNC_7 (struct xgbe_prv_data*) ;
 int FUNC_8 (struct xgbe_prv_data*) ;
 int FUNC_9 (struct xgbe_prv_data*) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (struct xgbe_prv_data*) ;
 int FUNC_12 (struct xgbe_prv_data*,int) ;
 int FUNC_13 (struct xgbe_prv_data*) ;
 int FUNC_14 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_15(struct xgbe_prv_data *VAR_1)
{
 struct xgbe_hw_if *VAR_2 = &VAR_1->hw_if;
 struct xgbe_phy_if *VAR_3 = &VAR_1->phy_if;
 struct xgbe_channel *VAR_4;
 struct net_device *VAR_5 = VAR_1->netdev;
 struct netdev_queue *VAR_6;
 unsigned int VAR_7;

 FUNC_0("-->xgbe_stop\n");

 if (FUNC_10(VAR_0, &VAR_1->dev_state))
  return;

 FUNC_4(VAR_5);

 FUNC_14(VAR_1);
 FUNC_1(VAR_1->dev_workqueue);

 FUNC_13(VAR_1);

 VAR_2->disable_tx(VAR_1);
 VAR_2->disable_rx(VAR_1);

 VAR_3->phy_stop(VAR_1);

 FUNC_11(VAR_1);

 FUNC_12(VAR_1, 1);

 VAR_2->exit(VAR_1);

 for (VAR_7 = 0; VAR_7 < VAR_1->channel_count; VAR_7++) {
  VAR_4 = VAR_1->channel[VAR_7];
  if (!VAR_4->tx_ring)
   continue;

  VAR_6 = FUNC_2(VAR_5, VAR_4->queue_index);
  FUNC_3(VAR_6);
 }

 FUNC_5(VAR_0, &VAR_1->dev_state);

 FUNC_0("<--xgbe_stop\n");
}
