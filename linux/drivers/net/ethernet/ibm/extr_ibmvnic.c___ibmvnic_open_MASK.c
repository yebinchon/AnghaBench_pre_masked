
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ibmvnic_adapter {int state; int req_rx_queues; int req_tx_queues; int * napi; TYPE_1__** tx_scrq; TYPE_1__** rx_scrq; } ;
typedef enum vnic_state { ____Placeholder_vnic_state } vnic_state ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ibmvnic_adapter*,TYPE_1__*) ;
 int FUNC_2 (struct ibmvnic_adapter*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct net_device*,char*,int) ;
 struct ibmvnic_adapter* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct ibmvnic_adapter*) ;
 int FUNC_9 (struct ibmvnic_adapter*) ;
 int FUNC_10 (struct ibmvnic_adapter*,int ) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_4)
{
 struct ibmvnic_adapter *VAR_5 = FUNC_6(VAR_4);
 enum vnic_state VAR_6 = VAR_5->state;
 int VAR_7, VAR_8;

 VAR_5->state = VAR_3;
 FUNC_9(VAR_5);
 FUNC_2(VAR_5);




 for (VAR_7 = 0; VAR_7 < VAR_5->req_rx_queues; VAR_7++) {
  FUNC_5(VAR_4, "Enabling rx_scrq[%d] irq\n", VAR_7);
  if (VAR_6 == VAR_1)
   FUNC_0(VAR_5->rx_scrq[VAR_7]->irq);
  FUNC_1(VAR_5, VAR_5->rx_scrq[VAR_7]);
 }

 for (VAR_7 = 0; VAR_7 < VAR_5->req_tx_queues; VAR_7++) {
  FUNC_5(VAR_4, "Enabling tx_scrq[%d] irq\n", VAR_7);
  if (VAR_6 == VAR_1)
   FUNC_0(VAR_5->tx_scrq[VAR_7]->irq);
  FUNC_1(VAR_5, VAR_5->tx_scrq[VAR_7]);
 }

 VAR_8 = FUNC_10(VAR_5, VAR_0);
 if (VAR_8) {
  for (VAR_7 = 0; VAR_7 < VAR_5->req_rx_queues; VAR_7++)
   FUNC_3(&VAR_5->napi[VAR_7]);
  FUNC_8(VAR_5);
  return VAR_8;
 }

 FUNC_7(VAR_4);

 if (VAR_6 == VAR_1) {
  for (VAR_7 = 0; VAR_7 < VAR_5->req_rx_queues; VAR_7++)
   FUNC_4(&VAR_5->napi[VAR_7]);
 }

 VAR_5->state = VAR_2;
 return VAR_8;
}
