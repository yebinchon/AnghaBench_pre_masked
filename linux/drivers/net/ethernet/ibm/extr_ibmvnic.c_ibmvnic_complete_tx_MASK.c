
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_comps; scalar_t__ first; int * correlators; scalar_t__* rcs; } ;
union sub_crq {TYPE_2__ tx_comp; } ;
struct ibmvnic_tx_pool {int* free_map; size_t producer_index; int num_buffers; struct ibmvnic_tx_buff* tx_buff; } ;
struct ibmvnic_tx_buff {scalar_t__ num_entries; int * skb; scalar_t__ last_frag; scalar_t__* data_dma; } ;
struct ibmvnic_sub_crq_queue {unsigned int pool_index; int used; } ;
struct ibmvnic_adapter {int req_tx_entries_per_subcrq; int netdev; struct ibmvnic_tx_pool* tx_pool; struct ibmvnic_tx_pool* tso_pool; TYPE_1__* vdev; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ibmvnic_adapter*,struct ibmvnic_sub_crq_queue*) ;
 int FUNC_6 (struct ibmvnic_adapter*,struct ibmvnic_sub_crq_queue*) ;
 union sub_crq* FUNC_7 (struct ibmvnic_adapter*,struct ibmvnic_sub_crq_queue*) ;
 int FUNC_8 (int ,char*,unsigned int) ;
 int FUNC_9 (int ,unsigned int) ;
 scalar_t__ FUNC_10 (struct ibmvnic_adapter*,struct ibmvnic_sub_crq_queue*) ;

__attribute__((used)) static int FUNC_11(struct ibmvnic_adapter *VAR_2,
          struct ibmvnic_sub_crq_queue *VAR_3)
{
 struct device *VAR_4 = &VAR_2->vdev->dev;
 struct ibmvnic_tx_pool *VAR_5;
 struct ibmvnic_tx_buff *VAR_6;
 union sub_crq *VAR_7;
 int VAR_8;
 int VAR_9, VAR_10;

restart_loop:
 while (FUNC_10(VAR_2, VAR_3)) {
  unsigned int VAR_11 = VAR_3->pool_index;
  int VAR_12 = 0;

  VAR_7 = FUNC_7(VAR_2, VAR_3);
  for (VAR_9 = 0; VAR_9 < VAR_7->tx_comp.num_comps; VAR_9++) {
   if (VAR_7->tx_comp.rcs[VAR_9]) {
    FUNC_3(VAR_4, "tx error %x\n",
     VAR_7->tx_comp.rcs[VAR_9]);
    continue;
   }
   VAR_8 = FUNC_2(VAR_7->tx_comp.correlators[VAR_9]);
   if (VAR_8 & VAR_1) {
    VAR_5 = &VAR_2->tso_pool[VAR_11];
    VAR_8 &= ~VAR_1;
   } else {
    VAR_5 = &VAR_2->tx_pool[VAR_11];
   }

   VAR_6 = &VAR_5->tx_buff[VAR_8];

   for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
    if (!VAR_6->data_dma[VAR_10])
     continue;

    VAR_6->data_dma[VAR_10] = 0;
   }

   if (VAR_6->last_frag) {
    FUNC_4(VAR_6->skb);
    VAR_6->skb = ((void*)0);
   }

   VAR_12 += VAR_6->num_entries;

   VAR_5->free_map[VAR_5->producer_index] = VAR_8;
   VAR_5->producer_index =
    (VAR_5->producer_index + 1) %
     VAR_5->num_buffers;
  }

  VAR_7->tx_comp.first = 0;

  if (FUNC_1(VAR_12, &VAR_3->used) <=
      (VAR_2->req_tx_entries_per_subcrq / 2) &&
      FUNC_0(VAR_2->netdev,
          VAR_3->pool_index)) {
   FUNC_9(VAR_2->netdev, VAR_3->pool_index);
   FUNC_8(VAR_2->netdev, "Started queue %d\n",
       VAR_3->pool_index);
  }
 }

 FUNC_6(VAR_2, VAR_3);

 if (FUNC_10(VAR_2, VAR_3)) {
  FUNC_5(VAR_2, VAR_3);
  goto restart_loop;
 }

 return 0;
}
