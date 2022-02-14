
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvnic_adapter {int napi_enabled; int req_rx_queues; int * napi; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ibmvnic_adapter *VAR_0)
{
 int VAR_1;

 if (VAR_0->napi_enabled)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->req_rx_queues; VAR_1++)
  FUNC_0(&VAR_0->napi[VAR_1]);

 VAR_0->napi_enabled = 1;
}
