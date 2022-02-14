
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvnic_adapter {int num_active_tx_pools; int * tso_pool; int * tx_pool; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ibmvnic_adapter*,int *) ;

__attribute__((used)) static void FUNC_2(struct ibmvnic_adapter *VAR_0)
{
 int VAR_1;

 if (!VAR_0->tx_pool)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_active_tx_pools; VAR_1++) {
  FUNC_1(VAR_0, &VAR_0->tx_pool[VAR_1]);
  FUNC_1(VAR_0, &VAR_0->tso_pool[VAR_1]);
 }

 FUNC_0(VAR_0->tx_pool);
 VAR_0->tx_pool = ((void*)0);
 FUNC_0(VAR_0->tso_pool);
 VAR_0->tso_pool = ((void*)0);
 VAR_0->num_active_tx_pools = 0;
}
