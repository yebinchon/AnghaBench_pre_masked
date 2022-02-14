
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvnic_adapter {int num_active_tx_pools; int * tso_pool; int * tx_pool; int netdev; } ;


 int FUNC_0 (struct ibmvnic_adapter*,int *) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2(struct ibmvnic_adapter *VAR_0)
{
 int VAR_1;
 int VAR_2;

 if (!VAR_0->tx_pool || !VAR_0->tso_pool)
  return;

 VAR_1 = VAR_0->num_active_tx_pools;


 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  FUNC_1(VAR_0->netdev, "Cleaning tx_pool[%d]\n", VAR_2);
  FUNC_0(VAR_0, &VAR_0->tx_pool[VAR_2]);
  FUNC_0(VAR_0, &VAR_0->tso_pool[VAR_2]);
 }
}
