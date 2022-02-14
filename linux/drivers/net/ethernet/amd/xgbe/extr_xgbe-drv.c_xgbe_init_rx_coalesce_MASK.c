
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_hw_if {int (* config_rx_coalesce ) (struct xgbe_prv_data*) ;int (* usec_to_riwt ) (struct xgbe_prv_data*,int ) ;} ;
struct xgbe_prv_data {int rx_frames; int rx_usecs; int rx_riwt; struct xgbe_hw_if hw_if; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct xgbe_prv_data*,int ) ;
 int FUNC_2 (struct xgbe_prv_data*) ;

void FUNC_3(struct xgbe_prv_data *VAR_2)
{
 struct xgbe_hw_if *VAR_3 = &VAR_2->hw_if;

 FUNC_0("-->xgbe_init_rx_coalesce\n");

 VAR_2->rx_riwt = VAR_3->usec_to_riwt(VAR_2, VAR_1);
 VAR_2->rx_usecs = VAR_1;
 VAR_2->rx_frames = VAR_0;

 VAR_3->config_rx_coalesce(VAR_2);

 FUNC_0("<--xgbe_init_rx_coalesce\n");
}
