
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
struct bnad {int num_rx; int num_rxp_per_rx; int num_tx; int num_txq_per_tx; TYPE_1__* tx_info; TYPE_6__* rx_info; } ;
struct bna_tcb {int * hw_consumer_index; int consumer_index; int producer_index; TYPE_2__* txq; } ;
struct bna_rcb {int consumer_index; int producer_index; TYPE_3__* rxq; } ;
struct TYPE_12__ {TYPE_5__* rx_ctrl; int rx; } ;
struct TYPE_11__ {TYPE_4__* ccb; int rx_complete; int rx_keep_poll; int rx_schedule; int rx_poll_ctr; int rx_intr_ctr; } ;
struct TYPE_10__ {struct bna_rcb** rcb; int * hw_producer_index; int producer_index; } ;
struct TYPE_9__ {int rxbuf_map_failed; int rxbuf_alloc_failed; int rx_packets_with_error; int rx_bytes; int rx_packets; } ;
struct TYPE_8__ {int tx_bytes; int tx_packets; } ;
struct TYPE_7__ {struct bna_tcb** tcb; int tx; } ;



__attribute__((used)) static int
FUNC_0(struct bnad *VAR_0, u64 *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 struct bna_rcb *VAR_5 = ((void*)0);
 struct bna_tcb *VAR_6 = ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_0->num_rx; VAR_3++) {
  if (!VAR_0->rx_info[VAR_3].rx)
   continue;
  for (VAR_4 = 0; VAR_4 < VAR_0->num_rxp_per_rx; VAR_4++)
   if (VAR_0->rx_info[VAR_3].rx_ctrl[VAR_4].ccb &&
    VAR_0->rx_info[VAR_3].rx_ctrl[VAR_4].ccb->rcb[0] &&
    VAR_0->rx_info[VAR_3].rx_ctrl[VAR_4].ccb->rcb[0]->rxq) {
    VAR_1[VAR_2++] = VAR_0->rx_info[VAR_3].rx_ctrl[VAR_4].
      ccb->producer_index;
    VAR_1[VAR_2++] = 0;
    VAR_1[VAR_2++] = *(VAR_0->rx_info[VAR_3].rx_ctrl[VAR_4].
      ccb->hw_producer_index);

    VAR_1[VAR_2++] = VAR_0->rx_info[VAR_3].
      rx_ctrl[VAR_4].rx_intr_ctr;
    VAR_1[VAR_2++] = VAR_0->rx_info[VAR_3].
      rx_ctrl[VAR_4].rx_poll_ctr;
    VAR_1[VAR_2++] = VAR_0->rx_info[VAR_3].
      rx_ctrl[VAR_4].rx_schedule;
    VAR_1[VAR_2++] = VAR_0->rx_info[VAR_3].
      rx_ctrl[VAR_4].rx_keep_poll;
    VAR_1[VAR_2++] = VAR_0->rx_info[VAR_3].
      rx_ctrl[VAR_4].rx_complete;
   }
 }
 for (VAR_3 = 0; VAR_3 < VAR_0->num_rx; VAR_3++) {
  if (!VAR_0->rx_info[VAR_3].rx)
   continue;
  for (VAR_4 = 0; VAR_4 < VAR_0->num_rxp_per_rx; VAR_4++)
   if (VAR_0->rx_info[VAR_3].rx_ctrl[VAR_4].ccb) {
    if (VAR_0->rx_info[VAR_3].rx_ctrl[VAR_4].ccb->rcb[0] &&
     VAR_0->rx_info[VAR_3].rx_ctrl[VAR_4].ccb->
     rcb[0]->rxq) {
     VAR_5 = VAR_0->rx_info[VAR_3].rx_ctrl[VAR_4].
       ccb->rcb[0];
     VAR_1[VAR_2++] = VAR_5->rxq->rx_packets;
     VAR_1[VAR_2++] = VAR_5->rxq->rx_bytes;
     VAR_1[VAR_2++] = VAR_5->rxq->
       rx_packets_with_error;
     VAR_1[VAR_2++] = VAR_5->rxq->
       rxbuf_alloc_failed;
     VAR_1[VAR_2++] = VAR_5->rxq->rxbuf_map_failed;
     VAR_1[VAR_2++] = VAR_5->producer_index;
     VAR_1[VAR_2++] = VAR_5->consumer_index;
    }
    if (VAR_0->rx_info[VAR_3].rx_ctrl[VAR_4].ccb->rcb[1] &&
     VAR_0->rx_info[VAR_3].rx_ctrl[VAR_4].ccb->
     rcb[1]->rxq) {
     VAR_5 = VAR_0->rx_info[VAR_3].rx_ctrl[VAR_4].
        ccb->rcb[1];
     VAR_1[VAR_2++] = VAR_5->rxq->rx_packets;
     VAR_1[VAR_2++] = VAR_5->rxq->rx_bytes;
     VAR_1[VAR_2++] = VAR_5->rxq->
       rx_packets_with_error;
     VAR_1[VAR_2++] = VAR_5->rxq->
       rxbuf_alloc_failed;
     VAR_1[VAR_2++] = VAR_5->rxq->rxbuf_map_failed;
     VAR_1[VAR_2++] = VAR_5->producer_index;
     VAR_1[VAR_2++] = VAR_5->consumer_index;
    }
   }
 }

 for (VAR_3 = 0; VAR_3 < VAR_0->num_tx; VAR_3++) {
  if (!VAR_0->tx_info[VAR_3].tx)
   continue;
  for (VAR_4 = 0; VAR_4 < VAR_0->num_txq_per_tx; VAR_4++)
   if (VAR_0->tx_info[VAR_3].tcb[VAR_4] &&
    VAR_0->tx_info[VAR_3].tcb[VAR_4]->txq) {
    VAR_6 = VAR_0->tx_info[VAR_3].tcb[VAR_4];
    VAR_1[VAR_2++] = VAR_6->txq->tx_packets;
    VAR_1[VAR_2++] = VAR_6->txq->tx_bytes;
    VAR_1[VAR_2++] = VAR_6->producer_index;
    VAR_1[VAR_2++] = VAR_6->consumer_index;
    VAR_1[VAR_2++] = *(VAR_6->hw_consumer_index);
   }
 }

 return VAR_2;
}
