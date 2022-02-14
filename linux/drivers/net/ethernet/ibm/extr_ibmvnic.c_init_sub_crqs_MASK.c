
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibmvnic_sub_crq_queue {int pool_index; int scrq_num; } ;
struct ibmvnic_adapter {int req_tx_queues; int req_rx_queues; int min_tx_queues; int min_rx_queues; struct ibmvnic_sub_crq_queue** tx_scrq; int num_active_rx_scrqs; struct ibmvnic_sub_crq_queue** rx_scrq; int num_active_tx_scrqs; int netdev; TYPE_1__* vdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 struct ibmvnic_sub_crq_queue* FUNC_2 (struct ibmvnic_adapter*) ;
 void* FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct ibmvnic_sub_crq_queue**) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct ibmvnic_adapter*,struct ibmvnic_sub_crq_queue*,int) ;

__attribute__((used)) static int FUNC_7(struct ibmvnic_adapter *VAR_1)
{
 struct device *VAR_2 = &VAR_1->vdev->dev;
 struct ibmvnic_sub_crq_queue **VAR_3;
 int VAR_4 = 0;
 int VAR_5;
 int VAR_6 = 0;
 int VAR_7;

 VAR_5 = VAR_1->req_tx_queues + VAR_1->req_rx_queues;

 VAR_3 = FUNC_3(VAR_5, sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return -1;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_3[VAR_7] = FUNC_2(VAR_1);
  if (!VAR_3[VAR_7]) {
   FUNC_1(VAR_2, "Couldn't allocate all sub-crqs\n");
   break;
  }
  VAR_4++;
 }


 if (VAR_4 <
     VAR_1->min_tx_queues + VAR_1->min_rx_queues) {
  FUNC_0(VAR_2, "Fatal: Couldn't init  min number of sub-crqs\n");
  goto tx_failed;
 }


 for (VAR_7 = 0; VAR_7 < VAR_5 - VAR_4 + VAR_6 ; VAR_7++) {
  FUNC_5(VAR_1->netdev, "Reducing number of queues\n");
  switch (VAR_7 % 3) {
  case 0:
   if (VAR_1->req_rx_queues > VAR_1->min_rx_queues)
    VAR_1->req_rx_queues--;
   else
    VAR_6++;
   break;
  case 1:
   if (VAR_1->req_tx_queues > VAR_1->min_tx_queues)
    VAR_1->req_tx_queues--;
   else
    VAR_6++;
   break;
  }
 }

 VAR_1->tx_scrq = FUNC_3(VAR_1->req_tx_queues,
       sizeof(*VAR_1->tx_scrq), VAR_0);
 if (!VAR_1->tx_scrq)
  goto tx_failed;

 for (VAR_7 = 0; VAR_7 < VAR_1->req_tx_queues; VAR_7++) {
  VAR_1->tx_scrq[VAR_7] = VAR_3[VAR_7];
  VAR_1->tx_scrq[VAR_7]->pool_index = VAR_7;
  VAR_1->num_active_tx_scrqs++;
 }

 VAR_1->rx_scrq = FUNC_3(VAR_1->req_rx_queues,
       sizeof(*VAR_1->rx_scrq), VAR_0);
 if (!VAR_1->rx_scrq)
  goto rx_failed;

 for (VAR_7 = 0; VAR_7 < VAR_1->req_rx_queues; VAR_7++) {
  VAR_1->rx_scrq[VAR_7] = VAR_3[VAR_7 + VAR_1->req_tx_queues];
  VAR_1->rx_scrq[VAR_7]->scrq_num = VAR_7;
  VAR_1->num_active_rx_scrqs++;
 }

 FUNC_4(VAR_3);
 return 0;

rx_failed:
 FUNC_4(VAR_1->tx_scrq);
 VAR_1->tx_scrq = ((void*)0);
tx_failed:
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
  FUNC_6(VAR_1, VAR_3[VAR_7], 1);
 FUNC_4(VAR_3);
 return -1;
}
