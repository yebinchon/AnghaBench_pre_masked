
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct rtnl_link_stats64 {int tx_bytes; int tx_packets; int rx_bytes; int rx_packets; } ;
struct bnad {int num_rx; int num_rxp_per_rx; int num_tx; int num_txq_per_tx; TYPE_8__* tx_info; TYPE_5__* rx_info; } ;
struct TYPE_16__ {TYPE_7__** tcb; } ;
struct TYPE_15__ {TYPE_6__* txq; } ;
struct TYPE_14__ {scalar_t__ tx_bytes; scalar_t__ tx_packets; } ;
struct TYPE_13__ {TYPE_4__* rx_ctrl; } ;
struct TYPE_12__ {TYPE_3__* ccb; } ;
struct TYPE_11__ {TYPE_2__** rcb; } ;
struct TYPE_10__ {TYPE_1__* rxq; } ;
struct TYPE_9__ {scalar_t__ rx_bytes; scalar_t__ rx_packets; } ;



void
FUNC_0(struct bnad *VAR_0, struct rtnl_link_stats64 *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_rx; VAR_2++) {
  for (VAR_3 = 0; VAR_3 < VAR_0->num_rxp_per_rx; VAR_3++) {
   if (VAR_0->rx_info[VAR_2].rx_ctrl[VAR_3].ccb) {
    VAR_1->rx_packets += VAR_0->rx_info[VAR_2].
    rx_ctrl[VAR_3].ccb->rcb[0]->rxq->rx_packets;
    VAR_1->rx_bytes += VAR_0->rx_info[VAR_2].
     rx_ctrl[VAR_3].ccb->rcb[0]->rxq->rx_bytes;
    if (VAR_0->rx_info[VAR_2].rx_ctrl[VAR_3].ccb->rcb[1] &&
     VAR_0->rx_info[VAR_2].rx_ctrl[VAR_3].ccb->
     rcb[1]->rxq) {
     VAR_1->rx_packets +=
      VAR_0->rx_info[VAR_2].rx_ctrl[VAR_3].
      ccb->rcb[1]->rxq->rx_packets;
     VAR_1->rx_bytes +=
      VAR_0->rx_info[VAR_2].rx_ctrl[VAR_3].
      ccb->rcb[1]->rxq->rx_bytes;
    }
   }
  }
 }
 for (VAR_2 = 0; VAR_2 < VAR_0->num_tx; VAR_2++) {
  for (VAR_3 = 0; VAR_3 < VAR_0->num_txq_per_tx; VAR_3++) {
   if (VAR_0->tx_info[VAR_2].tcb[VAR_3]) {
    VAR_1->tx_packets +=
    VAR_0->tx_info[VAR_2].tcb[VAR_3]->txq->tx_packets;
    VAR_1->tx_bytes +=
     VAR_0->tx_info[VAR_2].tcb[VAR_3]->txq->tx_bytes;
   }
  }
 }
}
