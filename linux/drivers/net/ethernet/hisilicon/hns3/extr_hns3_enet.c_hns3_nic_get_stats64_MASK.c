
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
struct rtnl_link_stats64 {int tx_compressed; int rx_compressed; int tx_window_errors; int tx_heartbeat_errors; int tx_fifo_errors; int tx_carrier_errors; int tx_aborted_errors; int rx_fifo_errors; int rx_frame_errors; int rx_over_errors; int collisions; void* tx_dropped; void* rx_dropped; void* tx_errors; int rx_missed_errors; void* rx_crc_errors; void* rx_length_errors; void* multicast; void* rx_errors; void* rx_packets; void* rx_bytes; void* tx_packets; void* tx_bytes; } ;
struct TYPE_12__ {int tx_compressed; int rx_compressed; int tx_window_errors; int tx_heartbeat_errors; int tx_fifo_errors; int tx_carrier_errors; int tx_aborted_errors; int rx_fifo_errors; int rx_frame_errors; int rx_over_errors; int collisions; int rx_missed_errors; } ;
struct net_device {TYPE_6__ stats; } ;
struct hns3_nic_priv {TYPE_4__* ring_data; int state; struct hnae3_handle* ae_handle; } ;
struct TYPE_11__ {scalar_t__ err_pkt_len; scalar_t__ rx_multicast; scalar_t__ l2_err; scalar_t__ l3l4_csum_err; scalar_t__ rx_pkts; scalar_t__ rx_bytes; scalar_t__ tx_tso_err; scalar_t__ tx_l2l3l4_err; scalar_t__ tx_l4_proto_err; scalar_t__ tx_vlan_err; scalar_t__ sw_err_cnt; scalar_t__ tx_pkts; scalar_t__ tx_bytes; } ;
struct hns3_enet_ring {TYPE_5__ stats; int syncp; } ;
struct TYPE_7__ {int num_tqps; } ;
struct hnae3_handle {TYPE_3__* ae_algo; TYPE_1__ kinfo; } ;
struct TYPE_10__ {struct hns3_enet_ring* ring; } ;
struct TYPE_9__ {TYPE_2__* ops; } ;
struct TYPE_8__ {int (* update_stats ) (struct hnae3_handle*,TYPE_6__*) ;} ;


 int VAR_0 ;
 struct hns3_nic_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct hnae3_handle*,TYPE_6__*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 unsigned int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1,
     struct rtnl_link_stats64 *VAR_2)
{
 struct hns3_nic_priv *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = VAR_3->ae_handle->kinfo.num_tqps;
 struct hnae3_handle *VAR_5 = VAR_3->ae_handle;
 struct hns3_enet_ring *VAR_6;
 u64 VAR_7 = 0;
 u64 VAR_8 = 0;
 u64 VAR_9 = 0;
 unsigned int VAR_10;
 u64 VAR_11 = 0;
 u64 VAR_12 = 0;
 unsigned int VAR_13;
 u64 VAR_14 = 0;
 u64 VAR_15 = 0;
 u64 VAR_16 = 0;
 u64 VAR_17 = 0;
 u64 VAR_18 = 0;
 u64 VAR_19 = 0;

 if (FUNC_2(VAR_0, &VAR_3->state))
  return;

 VAR_5->ae_algo->ops->update_stats(VAR_5, &VAR_1->stats);

 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {

  VAR_6 = VAR_3->ring_data[VAR_13].ring;
  do {
   VAR_10 = FUNC_3(&VAR_6->syncp);
   VAR_14 += VAR_6->stats.tx_bytes;
   VAR_16 += VAR_6->stats.tx_pkts;
   VAR_18 += VAR_6->stats.sw_err_cnt;
   VAR_18 += VAR_6->stats.tx_vlan_err;
   VAR_18 += VAR_6->stats.tx_l4_proto_err;
   VAR_18 += VAR_6->stats.tx_l2l3l4_err;
   VAR_18 += VAR_6->stats.tx_tso_err;
   VAR_11 += VAR_6->stats.sw_err_cnt;
   VAR_11 += VAR_6->stats.tx_vlan_err;
   VAR_11 += VAR_6->stats.tx_l4_proto_err;
   VAR_11 += VAR_6->stats.tx_l2l3l4_err;
   VAR_11 += VAR_6->stats.tx_tso_err;
  } while (FUNC_4(&VAR_6->syncp, VAR_10));


  VAR_6 = VAR_3->ring_data[VAR_13 + VAR_4].ring;
  do {
   VAR_10 = FUNC_3(&VAR_6->syncp);
   VAR_15 += VAR_6->stats.rx_bytes;
   VAR_17 += VAR_6->stats.rx_pkts;
   VAR_19 += VAR_6->stats.l2_err;
   VAR_12 += VAR_6->stats.l2_err;
   VAR_12 += VAR_6->stats.l3l4_csum_err;
   VAR_8 += VAR_6->stats.l2_err;
   VAR_9 += VAR_6->stats.rx_multicast;
   VAR_7 += VAR_6->stats.err_pkt_len;
  } while (FUNC_4(&VAR_6->syncp, VAR_10));
 }

 VAR_2->tx_bytes = VAR_14;
 VAR_2->tx_packets = VAR_16;
 VAR_2->rx_bytes = VAR_15;
 VAR_2->rx_packets = VAR_17;

 VAR_2->rx_errors = VAR_12;
 VAR_2->multicast = VAR_9;
 VAR_2->rx_length_errors = VAR_7;
 VAR_2->rx_crc_errors = VAR_8;
 VAR_2->rx_missed_errors = VAR_1->stats.rx_missed_errors;

 VAR_2->tx_errors = VAR_11;
 VAR_2->rx_dropped = VAR_19;
 VAR_2->tx_dropped = VAR_18;
 VAR_2->collisions = VAR_1->stats.collisions;
 VAR_2->rx_over_errors = VAR_1->stats.rx_over_errors;
 VAR_2->rx_frame_errors = VAR_1->stats.rx_frame_errors;
 VAR_2->rx_fifo_errors = VAR_1->stats.rx_fifo_errors;
 VAR_2->tx_aborted_errors = VAR_1->stats.tx_aborted_errors;
 VAR_2->tx_carrier_errors = VAR_1->stats.tx_carrier_errors;
 VAR_2->tx_fifo_errors = VAR_1->stats.tx_fifo_errors;
 VAR_2->tx_heartbeat_errors = VAR_1->stats.tx_heartbeat_errors;
 VAR_2->tx_window_errors = VAR_1->stats.tx_window_errors;
 VAR_2->rx_compressed = VAR_1->stats.rx_compressed;
 VAR_2->tx_compressed = VAR_1->stats.tx_compressed;
}
