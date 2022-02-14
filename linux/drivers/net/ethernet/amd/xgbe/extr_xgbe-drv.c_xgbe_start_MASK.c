
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_phy_if {int (* phy_start ) (struct xgbe_prv_data*) ;} ;
struct xgbe_hw_if {int (* init ) (struct xgbe_prv_data*) ;int (* exit ) (struct xgbe_prv_data*) ;int (* enable_rx ) (struct xgbe_prv_data*) ;int (* enable_tx ) (struct xgbe_prv_data*) ;} ;
struct xgbe_prv_data {unsigned int rx_ring_count; int dev_state; int service_work; int dev_workqueue; int * rss_table; int tx_ring_count; struct net_device* netdev; struct xgbe_phy_if phy_if; struct xgbe_hw_if hw_if; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,unsigned int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (struct net_device*,unsigned int) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct xgbe_prv_data*) ;
 int FUNC_8 (struct xgbe_prv_data*) ;
 int FUNC_9 (struct xgbe_prv_data*) ;
 int FUNC_10 (struct xgbe_prv_data*) ;
 int FUNC_11 (struct xgbe_prv_data*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct xgbe_prv_data*) ;
 int FUNC_14 (struct xgbe_prv_data*,int) ;
 int FUNC_15 (struct xgbe_prv_data*,int) ;
 int FUNC_16 (struct xgbe_prv_data*) ;
 int FUNC_17 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_18(struct xgbe_prv_data *VAR_4)
{
 struct xgbe_hw_if *VAR_5 = &VAR_4->hw_if;
 struct xgbe_phy_if *VAR_6 = &VAR_4->phy_if;
 struct net_device *VAR_7 = VAR_4->netdev;
 unsigned int VAR_8;
 int VAR_9;


 VAR_9 = FUNC_4(VAR_7, VAR_4->tx_ring_count);
 if (VAR_9) {
  FUNC_2(VAR_7, "error setting real tx queue count\n");
  return VAR_9;
 }

 VAR_9 = FUNC_3(VAR_7, VAR_4->rx_ring_count);
 if (VAR_9) {
  FUNC_2(VAR_7, "error setting real rx queue count\n");
  return VAR_9;
 }


 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  FUNC_0(VAR_4->rss_table[VAR_8], VAR_1, VAR_0,
          VAR_8 % VAR_4->rx_ring_count);

 VAR_9 = VAR_5->init(VAR_4);
 if (VAR_9)
  return VAR_9;

 FUNC_15(VAR_4, 1);

 VAR_9 = FUNC_16(VAR_4);
 if (VAR_9)
  goto err_napi;

 VAR_9 = VAR_6->phy_start(VAR_4);
 if (VAR_9)
  goto err_irqs;

 VAR_5->enable_tx(VAR_4);
 VAR_5->enable_rx(VAR_4);

 FUNC_12(VAR_7);

 FUNC_5(VAR_7);

 FUNC_17(VAR_4);
 FUNC_6(VAR_4->dev_workqueue, &VAR_4->service_work);

 FUNC_1(VAR_3, &VAR_4->dev_state);

 return 0;

err_irqs:
 FUNC_13(VAR_4);

err_napi:
 FUNC_14(VAR_4, 1);

 VAR_5->exit(VAR_4);

 return VAR_9;
}
