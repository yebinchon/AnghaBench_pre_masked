
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvnic_adapter {int num_active_rx_napi; int napi_enabled; int * napi; int netdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ibmvnic_adapter *VAR_0)
{
 int VAR_1;

 if (!VAR_0->napi)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_active_rx_napi; VAR_1++) {
  FUNC_1(VAR_0->netdev, "Releasing napi[%d]\n", VAR_1);
  FUNC_2(&VAR_0->napi[VAR_1]);
 }

 FUNC_0(VAR_0->napi);
 VAR_0->napi = ((void*)0);
 VAR_0->num_active_rx_napi = 0;
 VAR_0->napi_enabled = 0;
}
