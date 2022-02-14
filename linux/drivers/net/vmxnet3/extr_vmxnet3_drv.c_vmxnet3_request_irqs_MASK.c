
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int intr_idx; } ;
struct vmxnet3_rx_queue {char* name; int qid; int qid2; int dataRingQid; TYPE_3__ comp_ring; int dev; } ;
struct vmxnet3_intr {scalar_t__ type; char* event_msi_vector_name; int event_intr_idx; int num_intrs; int mask_mode; int * mod_levels; TYPE_2__* msix_entries; } ;
struct vmxnet3_adapter {int num_tx_queues; scalar_t__ share_intr; int num_rx_queues; struct vmxnet3_rx_queue* netdev; struct vmxnet3_rx_queue* rx_queue; struct vmxnet3_rx_queue* tx_queue; struct vmxnet3_intr intr; TYPE_1__* pdev; } ;
struct TYPE_5__ {int vector; } ;
struct TYPE_4__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,char*,char*,int) ;
 int FUNC_1 (struct vmxnet3_rx_queue*,char*,scalar_t__,int) ;
 int FUNC_2 (struct vmxnet3_rx_queue*,char*,scalar_t__,int ,int) ;
 int FUNC_3 (int ,int ,int ,char*,struct vmxnet3_rx_queue*) ;
 int FUNC_4 (char*,char*,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_5(struct vmxnet3_adapter *VAR_10)
{
 struct vmxnet3_intr *VAR_11 = &VAR_10->intr;
 int VAR_12 = 0, VAR_13;
 int VAR_14 = 0;
  VAR_10->num_rx_queues = 1;
  VAR_12 = FUNC_3(VAR_10->pdev->irq, VAR_6,
      VAR_0, VAR_10->netdev->name,
      VAR_10->netdev);



 VAR_11->num_intrs = VAR_14 + 1;
 if (VAR_12) {
  FUNC_1(VAR_10->netdev,
      "Failed to request irq (intr type:%d), error %d\n",
      VAR_11->type, VAR_12);
 } else {

  for (VAR_13 = 0; VAR_13 < VAR_10->num_rx_queues; VAR_13++) {
   struct vmxnet3_rx_queue *VAR_15 = &VAR_10->rx_queue[VAR_13];
   VAR_15->qid = VAR_13;
   VAR_15->qid2 = VAR_13 + VAR_10->num_rx_queues;
   VAR_15->dataRingQid = VAR_13 + 2 * VAR_10->num_rx_queues;
  }


  for (VAR_13 = 0; VAR_13 < VAR_11->num_intrs; VAR_13++)
   VAR_11->mod_levels[VAR_13] = VAR_1;
  if (VAR_10->intr.type != VAR_5) {
   VAR_10->intr.event_intr_idx = 0;
   for (VAR_13 = 0; VAR_13 < VAR_10->num_tx_queues; VAR_13++)
    VAR_10->tx_queue[VAR_13].comp_ring.intr_idx = 0;
   VAR_10->rx_queue[0].comp_ring.intr_idx = 0;
  }

  FUNC_2(VAR_10->netdev,
       "intr type %u, mode %u, %u vectors allocated\n",
       VAR_11->type, VAR_11->mask_mode, VAR_11->num_intrs);
 }

 return VAR_12;
}
