
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_hw_if {int (* config_rx_mode ) (struct xgbe_prv_data*) ;} ;
struct xgbe_prv_data {struct xgbe_hw_if hw_if; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (char*) ;
 struct xgbe_prv_data* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct xgbe_prv_data *VAR_1 = FUNC_1(VAR_0);
 struct xgbe_hw_if *VAR_2 = &VAR_1->hw_if;

 FUNC_0("-->xgbe_set_rx_mode\n");

 VAR_2->config_rx_mode(VAR_1);

 FUNC_0("<--xgbe_set_rx_mode\n");
}
