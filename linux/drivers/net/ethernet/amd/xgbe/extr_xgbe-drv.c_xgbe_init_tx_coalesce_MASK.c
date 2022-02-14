
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_hw_if {int (* config_tx_coalesce ) (struct xgbe_prv_data*) ;} ;
struct xgbe_prv_data {int tx_frames; int tx_usecs; struct xgbe_hw_if hw_if; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct xgbe_prv_data*) ;

void FUNC_2(struct xgbe_prv_data *VAR_2)
{
 struct xgbe_hw_if *VAR_3 = &VAR_2->hw_if;

 FUNC_0("-->xgbe_init_tx_coalesce\n");

 VAR_2->tx_usecs = VAR_1;
 VAR_2->tx_frames = VAR_0;

 VAR_3->config_tx_coalesce(VAR_2);

 FUNC_0("<--xgbe_init_tx_coalesce\n");
}
