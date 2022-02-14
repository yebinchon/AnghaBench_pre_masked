
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct napi_struct {int dummy; } ;
struct ibmvnic_adapter {int req_rx_queues; int num_active_rx_napi; int * napi; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int,int,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ibmvnic_adapter *VAR_4)
{
 int VAR_5;

 VAR_4->napi = FUNC_0(VAR_4->req_rx_queues,
    sizeof(struct napi_struct), VAR_1);
 if (!VAR_4->napi)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_4->req_rx_queues; VAR_5++) {
  FUNC_1(VAR_4->netdev, "Adding napi[%d]\n", VAR_5);
  FUNC_2(VAR_4->netdev, &VAR_4->napi[VAR_5],
          VAR_3, VAR_2);
 }

 VAR_4->num_active_rx_napi = VAR_4->req_rx_queues;
 return 0;
}
