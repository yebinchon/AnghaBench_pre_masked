
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ibmvnic_adapter {int req_tx_queues; int req_rx_queues; TYPE_1__** rx_scrq; TYPE_1__** tx_scrq; struct net_device* netdev; } ;
struct TYPE_2__ {scalar_t__ irq; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ibmvnic_adapter*,TYPE_1__*) ;
 int FUNC_2 (struct net_device*,char*,int) ;

__attribute__((used)) static void FUNC_3(struct ibmvnic_adapter *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;
 int VAR_2;

 if (VAR_0->tx_scrq) {
  for (VAR_2 = 0; VAR_2 < VAR_0->req_tx_queues; VAR_2++)
   if (VAR_0->tx_scrq[VAR_2]->irq) {
    FUNC_2(VAR_1,
        "Disabling tx_scrq[%d] irq\n", VAR_2);
    FUNC_1(VAR_0, VAR_0->tx_scrq[VAR_2]);
    FUNC_0(VAR_0->tx_scrq[VAR_2]->irq);
   }
 }

 if (VAR_0->rx_scrq) {
  for (VAR_2 = 0; VAR_2 < VAR_0->req_rx_queues; VAR_2++) {
   if (VAR_0->rx_scrq[VAR_2]->irq) {
    FUNC_2(VAR_1,
        "Disabling rx_scrq[%d] irq\n", VAR_2);
    FUNC_1(VAR_0, VAR_0->rx_scrq[VAR_2]);
    FUNC_0(VAR_0->rx_scrq[VAR_2]->irq);
   }
  }
 }
}
