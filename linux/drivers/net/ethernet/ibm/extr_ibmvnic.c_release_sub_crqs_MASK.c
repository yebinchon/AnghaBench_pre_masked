
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ibmvnic_adapter {int num_active_tx_scrqs; int num_active_rx_scrqs; TYPE_1__** rx_scrq; int netdev; TYPE_1__** tx_scrq; } ;
struct TYPE_4__ {scalar_t__ irq; } ;


 int FUNC_0 (scalar_t__,TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__**) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct ibmvnic_adapter*,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_5(struct ibmvnic_adapter *VAR_0, bool VAR_1)
{
 int VAR_2;

 if (VAR_0->tx_scrq) {
  for (VAR_2 = 0; VAR_2 < VAR_0->num_active_tx_scrqs; VAR_2++) {
   if (!VAR_0->tx_scrq[VAR_2])
    continue;

   FUNC_3(VAR_0->netdev, "Releasing tx_scrq[%d]\n",
       VAR_2);
   if (VAR_0->tx_scrq[VAR_2]->irq) {
    FUNC_0(VAR_0->tx_scrq[VAR_2]->irq,
      VAR_0->tx_scrq[VAR_2]);
    FUNC_1(VAR_0->tx_scrq[VAR_2]->irq);
    VAR_0->tx_scrq[VAR_2]->irq = 0;
   }

   FUNC_4(VAR_0, VAR_0->tx_scrq[VAR_2],
           VAR_1);
  }

  FUNC_2(VAR_0->tx_scrq);
  VAR_0->tx_scrq = ((void*)0);
  VAR_0->num_active_tx_scrqs = 0;
 }

 if (VAR_0->rx_scrq) {
  for (VAR_2 = 0; VAR_2 < VAR_0->num_active_rx_scrqs; VAR_2++) {
   if (!VAR_0->rx_scrq[VAR_2])
    continue;

   FUNC_3(VAR_0->netdev, "Releasing rx_scrq[%d]\n",
       VAR_2);
   if (VAR_0->rx_scrq[VAR_2]->irq) {
    FUNC_0(VAR_0->rx_scrq[VAR_2]->irq,
      VAR_0->rx_scrq[VAR_2]);
    FUNC_1(VAR_0->rx_scrq[VAR_2]->irq);
    VAR_0->rx_scrq[VAR_2]->irq = 0;
   }

   FUNC_4(VAR_0, VAR_0->rx_scrq[VAR_2],
           VAR_1);
  }

  FUNC_2(VAR_0->rx_scrq);
  VAR_0->rx_scrq = ((void*)0);
  VAR_0->num_active_rx_scrqs = 0;
 }
}
