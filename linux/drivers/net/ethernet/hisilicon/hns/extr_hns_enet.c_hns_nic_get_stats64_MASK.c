
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


typedef void* u64 ;
struct rtnl_link_stats64 {int tx_compressed; int rx_compressed; int tx_window_errors; int tx_heartbeat_errors; int tx_fifo_errors; int tx_carrier_errors; int tx_aborted_errors; int rx_fifo_errors; int rx_frame_errors; int rx_over_errors; int collisions; int tx_dropped; int rx_dropped; int tx_errors; int rx_missed_errors; int rx_crc_errors; int rx_length_errors; int multicast; int rx_errors; void* rx_packets; void* rx_bytes; void* tx_packets; void* tx_bytes; } ;
struct TYPE_12__ {int tx_compressed; int rx_compressed; int tx_window_errors; int tx_heartbeat_errors; int tx_fifo_errors; int tx_carrier_errors; int tx_aborted_errors; int rx_fifo_errors; int rx_frame_errors; int rx_over_errors; int collisions; int tx_dropped; int rx_dropped; int tx_errors; int rx_missed_errors; int rx_crc_errors; int rx_length_errors; int multicast; int rx_errors; } ;
struct net_device {TYPE_6__ stats; } ;
struct hns_nic_priv {struct hnae_handle* ae_handle; } ;
struct hnae_handle {int q_num; TYPE_5__** qs; } ;
struct TYPE_9__ {scalar_t__ rx_pkts; scalar_t__ rx_bytes; } ;
struct TYPE_10__ {TYPE_3__ stats; } ;
struct TYPE_7__ {scalar_t__ tx_pkts; scalar_t__ tx_bytes; } ;
struct TYPE_8__ {TYPE_1__ stats; } ;
struct TYPE_11__ {TYPE_4__ rx_ring; TYPE_2__ tx_ring; } ;


 struct hns_nic_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
    struct rtnl_link_stats64 *VAR_1)
{
 int VAR_2 = 0;
 u64 VAR_3 = 0;
 u64 VAR_4 = 0;
 u64 VAR_5 = 0;
 u64 VAR_6 = 0;
 struct hns_nic_priv *VAR_7 = FUNC_0(VAR_0);
 struct hnae_handle *VAR_8 = VAR_7->ae_handle;

 for (VAR_2 = 0; VAR_2 < VAR_8->q_num; VAR_2++) {
  VAR_3 += VAR_8->qs[VAR_2]->tx_ring.stats.tx_bytes;
  VAR_5 += VAR_8->qs[VAR_2]->tx_ring.stats.tx_pkts;
  VAR_4 += VAR_8->qs[VAR_2]->rx_ring.stats.rx_bytes;
  VAR_6 += VAR_8->qs[VAR_2]->rx_ring.stats.rx_pkts;
 }

 VAR_1->tx_bytes = VAR_3;
 VAR_1->tx_packets = VAR_5;
 VAR_1->rx_bytes = VAR_4;
 VAR_1->rx_packets = VAR_6;

 VAR_1->rx_errors = VAR_0->stats.rx_errors;
 VAR_1->multicast = VAR_0->stats.multicast;
 VAR_1->rx_length_errors = VAR_0->stats.rx_length_errors;
 VAR_1->rx_crc_errors = VAR_0->stats.rx_crc_errors;
 VAR_1->rx_missed_errors = VAR_0->stats.rx_missed_errors;

 VAR_1->tx_errors = VAR_0->stats.tx_errors;
 VAR_1->rx_dropped = VAR_0->stats.rx_dropped;
 VAR_1->tx_dropped = VAR_0->stats.tx_dropped;
 VAR_1->collisions = VAR_0->stats.collisions;
 VAR_1->rx_over_errors = VAR_0->stats.rx_over_errors;
 VAR_1->rx_frame_errors = VAR_0->stats.rx_frame_errors;
 VAR_1->rx_fifo_errors = VAR_0->stats.rx_fifo_errors;
 VAR_1->tx_aborted_errors = VAR_0->stats.tx_aborted_errors;
 VAR_1->tx_carrier_errors = VAR_0->stats.tx_carrier_errors;
 VAR_1->tx_fifo_errors = VAR_0->stats.tx_fifo_errors;
 VAR_1->tx_heartbeat_errors = VAR_0->stats.tx_heartbeat_errors;
 VAR_1->tx_window_errors = VAR_0->stats.tx_window_errors;
 VAR_1->rx_compressed = VAR_0->stats.rx_compressed;
 VAR_1->tx_compressed = VAR_0->stats.tx_compressed;
}
