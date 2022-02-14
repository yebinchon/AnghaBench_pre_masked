
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* u32 ;
typedef void* u16 ;
struct TYPE_10__ {void* size; } ;
struct TYPE_9__ {void* size; } ;
struct TYPE_8__ {void* size; } ;
struct vmxnet3_tx_queue {int stopped; int qid; struct vmxnet3_adapter* adapter; int * shared; void* txdata_desc_size; TYPE_3__ comp_ring; TYPE_2__ data_ring; TYPE_1__ tx_ring; } ;
struct TYPE_14__ {void* desc_size; } ;
struct vmxnet3_rx_queue {TYPE_7__ data_ring; struct vmxnet3_adapter* adapter; int * shared; TYPE_5__* rx_ring; } ;
struct vmxnet3_adapter {int num_tx_queues; int num_rx_queues; int rxdataring_enabled; int netdev; TYPE_6__* rqd_start; struct vmxnet3_rx_queue* rx_queue; TYPE_4__* tqd_start; struct vmxnet3_tx_queue* tx_queue; } ;
struct TYPE_13__ {int ctrl; } ;
struct TYPE_12__ {void* size; } ;
struct TYPE_11__ {int ctrl; } ;


 int FUNC_0 (struct vmxnet3_adapter*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct vmxnet3_adapter*) ;
 int FUNC_4 (struct vmxnet3_rx_queue*,struct vmxnet3_adapter*) ;
 int FUNC_5 (struct vmxnet3_adapter*) ;
 int FUNC_6 (struct vmxnet3_tx_queue*,struct vmxnet3_adapter*) ;
 int FUNC_7 (struct vmxnet3_adapter*) ;

int
FUNC_8(struct vmxnet3_adapter *VAR_0, u32 VAR_1,
        u32 VAR_2, u32 VAR_3,
        u16 VAR_4, u16 VAR_5)
{
 int VAR_6 = 0, VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0->num_tx_queues; VAR_7++) {
  struct vmxnet3_tx_queue *VAR_8 = &VAR_0->tx_queue[VAR_7];
  VAR_8->tx_ring.size = VAR_1;
  VAR_8->data_ring.size = VAR_1;
  VAR_8->comp_ring.size = VAR_1;
  VAR_8->txdata_desc_size = VAR_4;
  VAR_8->shared = &VAR_0->tqd_start[VAR_7].ctrl;
  VAR_8->stopped = 1;
  VAR_8->adapter = VAR_0;
  VAR_8->qid = VAR_7;
  VAR_6 = FUNC_6(VAR_8, VAR_0);




  if (VAR_6)
   goto queue_err;
 }

 VAR_0->rx_queue[0].rx_ring[0].size = VAR_2;
 VAR_0->rx_queue[0].rx_ring[1].size = VAR_3;
 FUNC_3(VAR_0);

 VAR_0->rxdataring_enabled = FUNC_0(VAR_0);
 for (VAR_7 = 0; VAR_7 < VAR_0->num_rx_queues; VAR_7++) {
  struct vmxnet3_rx_queue *VAR_9 = &VAR_0->rx_queue[VAR_7];


  VAR_9->shared = &VAR_0->rqd_start[VAR_7].ctrl;
  VAR_9->adapter = VAR_0;
  VAR_9->data_ring.desc_size = VAR_5;
  VAR_6 = FUNC_4(VAR_9, VAR_0);
  if (VAR_6) {
   if (VAR_7 == 0) {
    FUNC_1(VAR_0->netdev,
        "Could not allocate any rx queues. "
        "Aborting.\n");
    goto queue_err;
   } else {
    FUNC_2(VAR_0->netdev,
         "Number of rx queues changed "
         "to : %d.\n", VAR_7);
    VAR_0->num_rx_queues = VAR_7;
    VAR_6 = 0;
    break;
   }
  }
 }

 if (!VAR_0->rxdataring_enabled)
  FUNC_5(VAR_0);

 return VAR_6;
queue_err:
 FUNC_7(VAR_0);
 return VAR_6;
}
