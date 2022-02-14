
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


typedef void* u64 ;
struct net_device_stats {int multicast; int rx_length_errors; scalar_t__ rx_fifo_errors; int rx_frame_errors; int rx_crc_errors; void* rx_missed_errors; void* tx_dropped; void* tx_errors; void* rx_errors; void* rx_packets; scalar_t__ rx_dropped; void* rx_bytes; void* tx_packets; void* tx_bytes; } ;
struct TYPE_12__ {scalar_t__ tx_err_fifo_empty; scalar_t__ tx_err_checksum; void* rx_drop_no_buf; } ;
struct hns_ppe_cb {TYPE_5__ hw_stats; } ;
struct TYPE_14__ {int rx_mc_pkts; int rx_len_err; scalar_t__ rx_fifo_overrun_err; int rx_align_err; int rx_fcs_err; scalar_t__ tx_crc_err; scalar_t__ tx_underrun_err; scalar_t__ tx_jabber_err; scalar_t__ tx_fragment_err; scalar_t__ tx_bad_pkts; } ;
struct hns_mac_cb {scalar_t__ mac_type; TYPE_7__ hw_stats; } ;
struct hnae_vf_cb {int port_index; } ;
struct TYPE_10__ {scalar_t__ l3l4_csum_err; scalar_t__ l2_err; scalar_t__ err_pkt_len; scalar_t__ rx_pkts; scalar_t__ rx_bytes; } ;
struct TYPE_11__ {TYPE_3__ stats; } ;
struct TYPE_8__ {scalar_t__ tx_pkts; scalar_t__ tx_bytes; } ;
struct TYPE_9__ {TYPE_1__ stats; } ;
struct hnae_queue {TYPE_4__ rx_ring; TYPE_2__ tx_ring; } ;
struct hnae_handle {int q_num; struct hnae_queue** qs; int dev; } ;
struct dsaf_device {TYPE_6__* hw_stats; } ;
struct TYPE_13__ {scalar_t__ stp_drop; scalar_t__ vlan_drop; scalar_t__ rslt_drop; scalar_t__ crc_false; scalar_t__ pad_drop; scalar_t__ bp_drop; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct dsaf_device* FUNC_0 (int ) ;
 struct hnae_vf_cb* FUNC_1 (struct hnae_handle*) ;
 int FUNC_2 (struct dsaf_device*,int) ;
 struct hns_mac_cb* FUNC_3 (struct hnae_handle*) ;
 struct hns_ppe_cb* FUNC_4 (struct hnae_handle*) ;
 int FUNC_5 (struct hns_mac_cb*) ;
 int FUNC_6 (struct hns_ppe_cb*) ;
 int FUNC_7 (struct hnae_queue*) ;

__attribute__((used)) static void FUNC_8(struct hnae_handle *VAR_2,
    struct net_device_stats *VAR_3)
{
 int VAR_4;
 int VAR_5;
 struct dsaf_device *VAR_6;
 struct hns_mac_cb *VAR_7;
 struct hns_ppe_cb *VAR_8;
 struct hnae_queue *VAR_9;
 struct hnae_vf_cb *VAR_10 = FUNC_1(VAR_2);
 u64 VAR_11 = 0, VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;
 u64 VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;
 u64 VAR_18 = 0;

 VAR_6 = FUNC_0(VAR_2->dev);
 if (!VAR_6)
  return;
 VAR_4 = VAR_10->port_index;
 VAR_8 = FUNC_4(VAR_2);
 VAR_7 = FUNC_3(VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_2->q_num; VAR_5++) {
  VAR_9 = VAR_2->qs[VAR_5];
  FUNC_7(VAR_9);

  VAR_11 += VAR_9->tx_ring.stats.tx_bytes;
  VAR_13 += VAR_9->tx_ring.stats.tx_pkts;
  VAR_12 += VAR_9->rx_ring.stats.rx_bytes;
  VAR_14 += VAR_9->rx_ring.stats.rx_pkts;

  VAR_15 += VAR_9->rx_ring.stats.err_pkt_len
    + VAR_9->rx_ring.stats.l2_err
    + VAR_9->rx_ring.stats.l3l4_csum_err;
 }

 FUNC_6(VAR_8);
 VAR_18 = VAR_8->hw_stats.rx_drop_no_buf;
 VAR_16 += VAR_8->hw_stats.tx_err_checksum
  + VAR_8->hw_stats.tx_err_fifo_empty;

 if (VAR_7->mac_type == VAR_1) {
  FUNC_2(VAR_6, VAR_4);

  VAR_18 += VAR_6->hw_stats[VAR_4].bp_drop;
  VAR_18 += VAR_6->hw_stats[VAR_4].pad_drop;
  VAR_18 += VAR_6->hw_stats[VAR_4].crc_false;


  VAR_4 = VAR_4 + VAR_0;
  FUNC_2(VAR_6, VAR_4);
  VAR_17 += VAR_6->hw_stats[VAR_4].bp_drop;
  VAR_17 += VAR_6->hw_stats[VAR_4].pad_drop;
  VAR_17 += VAR_6->hw_stats[VAR_4].crc_false;
  VAR_17 += VAR_6->hw_stats[VAR_4].rslt_drop;
  VAR_17 += VAR_6->hw_stats[VAR_4].vlan_drop;
  VAR_17 += VAR_6->hw_stats[VAR_4].stp_drop;
 }

 FUNC_5(VAR_7);
 VAR_15 += VAR_7->hw_stats.rx_fifo_overrun_err;

 VAR_16 += VAR_7->hw_stats.tx_bad_pkts
  + VAR_7->hw_stats.tx_fragment_err
  + VAR_7->hw_stats.tx_jabber_err
  + VAR_7->hw_stats.tx_underrun_err
  + VAR_7->hw_stats.tx_crc_err;

 VAR_3->tx_bytes = VAR_11;
 VAR_3->tx_packets = VAR_13;
 VAR_3->rx_bytes = VAR_12;
 VAR_3->rx_dropped = 0;
 VAR_3->rx_packets = VAR_14;
 VAR_3->rx_errors = VAR_15;
 VAR_3->tx_errors = VAR_16;
 VAR_3->tx_dropped = VAR_17;
 VAR_3->rx_missed_errors = VAR_18;
 VAR_3->rx_crc_errors = VAR_7->hw_stats.rx_fcs_err;
 VAR_3->rx_frame_errors = VAR_7->hw_stats.rx_align_err;
 VAR_3->rx_fifo_errors = VAR_7->hw_stats.rx_fifo_overrun_err;
 VAR_3->rx_length_errors = VAR_7->hw_stats.rx_len_err;
 VAR_3->multicast = VAR_7->hw_stats.rx_mc_pkts;
}
