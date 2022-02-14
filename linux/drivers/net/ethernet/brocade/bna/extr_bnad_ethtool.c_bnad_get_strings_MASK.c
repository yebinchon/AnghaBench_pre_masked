
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct bnad {int num_rx; int num_rxp_per_rx; int num_tx; int num_txq_per_tx; int conf_mutex; TYPE_4__* tx_info; TYPE_5__* rx_info; int bna; } ;
struct TYPE_10__ {TYPE_3__* rx_ctrl; int rx; } ;
struct TYPE_9__ {int tx; } ;
struct TYPE_8__ {TYPE_2__* ccb; } ;
struct TYPE_7__ {TYPE_1__** rcb; } ;
struct TYPE_6__ {int rxq; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;

 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct bnad* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_9(struct net_device *VAR_3, u32 VAR_4, u8 *VAR_5)
{
 struct bnad *VAR_6 = FUNC_5(VAR_3);
 int VAR_7, VAR_8, VAR_9;
 u32 VAR_10;

 FUNC_3(&VAR_6->conf_mutex);

 switch (VAR_4) {
 case 128:
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
   FUNC_0(!(FUNC_7(VAR_2[VAR_7]) <
       VAR_1));
   FUNC_8(VAR_5, VAR_2[VAR_7],
    VAR_1);
   VAR_5 += VAR_1;
  }
  VAR_10 = FUNC_2(&VAR_6->bna);
  for (VAR_7 = 0; VAR_10; VAR_7++) {
   if (VAR_10 & 1) {
    FUNC_6(VAR_5, "txf%d_ucast_octets", VAR_7);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "txf%d_ucast", VAR_7);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "txf%d_ucast_vlan", VAR_7);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "txf%d_mcast_octets", VAR_7);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "txf%d_mcast", VAR_7);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "txf%d_mcast_vlan", VAR_7);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "txf%d_bcast_octets", VAR_7);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "txf%d_bcast", VAR_7);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "txf%d_bcast_vlan", VAR_7);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "txf%d_errors", VAR_7);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "txf%d_filter_vlan", VAR_7);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "txf%d_filter_mac_sa", VAR_7);
    VAR_5 += VAR_1;
   }
   VAR_10 >>= 1;
  }

  VAR_10 = FUNC_1(&VAR_6->bna);
  for (VAR_7 = 0; VAR_10; VAR_7++) {
   if (VAR_10 & 1) {
    FUNC_6(VAR_5, "rxf%d_ucast_octets", VAR_7);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "rxf%d_ucast", VAR_7);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "rxf%d_ucast_vlan", VAR_7);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "rxf%d_mcast_octets", VAR_7);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "rxf%d_mcast", VAR_7);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "rxf%d_mcast_vlan", VAR_7);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "rxf%d_bcast_octets", VAR_7);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "rxf%d_bcast", VAR_7);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "rxf%d_bcast_vlan", VAR_7);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "rxf%d_frame_drops", VAR_7);
    VAR_5 += VAR_1;
   }
   VAR_10 >>= 1;
  }

  VAR_9 = 0;
  for (VAR_7 = 0; VAR_7 < VAR_6->num_rx; VAR_7++) {
   if (!VAR_6->rx_info[VAR_7].rx)
    continue;
   for (VAR_8 = 0; VAR_8 < VAR_6->num_rxp_per_rx; VAR_8++) {
    FUNC_6(VAR_5, "cq%d_producer_index", VAR_9);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "cq%d_consumer_index", VAR_9);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "cq%d_hw_producer_index",
     VAR_9);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "cq%d_intr", VAR_9);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "cq%d_poll", VAR_9);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "cq%d_schedule", VAR_9);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "cq%d_keep_poll", VAR_9);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "cq%d_complete", VAR_9);
    VAR_5 += VAR_1;
    VAR_9++;
   }
  }

  VAR_9 = 0;
  for (VAR_7 = 0; VAR_7 < VAR_6->num_rx; VAR_7++) {
   if (!VAR_6->rx_info[VAR_7].rx)
    continue;
   for (VAR_8 = 0; VAR_8 < VAR_6->num_rxp_per_rx; VAR_8++) {
    FUNC_6(VAR_5, "rxq%d_packets", VAR_9);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "rxq%d_bytes", VAR_9);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "rxq%d_packets_with_error",
        VAR_9);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "rxq%d_allocbuf_failed", VAR_9);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "rxq%d_mapbuf_failed", VAR_9);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "rxq%d_producer_index", VAR_9);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "rxq%d_consumer_index", VAR_9);
    VAR_5 += VAR_1;
    VAR_9++;
    if (VAR_6->rx_info[VAR_7].rx_ctrl[VAR_8].ccb &&
     VAR_6->rx_info[VAR_7].rx_ctrl[VAR_8].ccb->
     rcb[1] &&
     VAR_6->rx_info[VAR_7].rx_ctrl[VAR_8].ccb->
     rcb[1]->rxq) {
     FUNC_6(VAR_5, "rxq%d_packets", VAR_9);
     VAR_5 += VAR_1;
     FUNC_6(VAR_5, "rxq%d_bytes", VAR_9);
     VAR_5 += VAR_1;
     FUNC_6(VAR_5,
     "rxq%d_packets_with_error", VAR_9);
     VAR_5 += VAR_1;
     FUNC_6(VAR_5, "rxq%d_allocbuf_failed",
        VAR_9);
     VAR_5 += VAR_1;
     FUNC_6(VAR_5, "rxq%d_mapbuf_failed",
      VAR_9);
     VAR_5 += VAR_1;
     FUNC_6(VAR_5, "rxq%d_producer_index",
        VAR_9);
     VAR_5 += VAR_1;
     FUNC_6(VAR_5, "rxq%d_consumer_index",
        VAR_9);
     VAR_5 += VAR_1;
     VAR_9++;
    }
   }
  }

  VAR_9 = 0;
  for (VAR_7 = 0; VAR_7 < VAR_6->num_tx; VAR_7++) {
   if (!VAR_6->tx_info[VAR_7].tx)
    continue;
   for (VAR_8 = 0; VAR_8 < VAR_6->num_txq_per_tx; VAR_8++) {
    FUNC_6(VAR_5, "txq%d_packets", VAR_9);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "txq%d_bytes", VAR_9);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "txq%d_producer_index", VAR_9);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "txq%d_consumer_index", VAR_9);
    VAR_5 += VAR_1;
    FUNC_6(VAR_5, "txq%d_hw_consumer_index",
         VAR_9);
    VAR_5 += VAR_1;
    VAR_9++;
   }
  }

  break;

 default:
  break;
 }

 FUNC_4(&VAR_6->conf_mutex);
}
