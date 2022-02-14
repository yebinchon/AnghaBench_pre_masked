
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvnic_adapter {int req_tx_queues; int req_rx_queues; int * rx_scrq; int netdev; int * tx_scrq; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct ibmvnic_adapter*,int ) ;

__attribute__((used)) static int FUNC_2(struct ibmvnic_adapter *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->req_tx_queues; VAR_1++) {
  FUNC_0(VAR_0->netdev, "Re-setting tx_scrq[%d]\n", VAR_1);
  VAR_2 = FUNC_1(VAR_0, VAR_0->tx_scrq[VAR_1]);
  if (VAR_2)
   return VAR_2;
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->req_rx_queues; VAR_1++) {
  FUNC_0(VAR_0->netdev, "Re-setting rx_scrq[%d]\n", VAR_1);
  VAR_2 = FUNC_1(VAR_0, VAR_0->rx_scrq[VAR_1]);
  if (VAR_2)
   return VAR_2;
 }

 return VAR_2;
}
