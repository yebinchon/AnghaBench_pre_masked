
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct qede_stats_common {int ptp_skip_txts; int link_change_count; int tx_mac_ctrl_frames; int brb_discards; int brb_truncates; int tx_pfc_frames; int tx_pause_frames; int tx_1024_to_1518_byte_packets; int tx_512_to_1023_byte_packets; int tx_256_to_511_byte_packets; int tx_128_to_255_byte_packets; int tx_65_to_127_byte_packets; int tx_64_byte_packets; int rx_fragments; int rx_undersize_packets; int rx_jabbers; int rx_oversize_packets; int rx_carrier_errors; int rx_align_errors; int rx_pfc_frames; int rx_pause_frames; int rx_mac_crtl_frames; int rx_crc_errors; int rx_1024_to_1518_byte_packets; int rx_512_to_1023_byte_packets; int rx_256_to_511_byte_packets; int rx_128_to_255_byte_packets; int rx_65_to_127_byte_packets; int rx_64_byte_packets; int coalesced_bytes; int non_coalesced_pkts; int coalesced_aborts_num; int coalesced_events; int coalesced_pkts; int tx_err_drop_pkts; int tx_bcast_pkts; int tx_mcast_pkts; int tx_ucast_pkts; int tx_bcast_bytes; int tx_mcast_bytes; int tx_ucast_bytes; int gft_filter_drop; int mac_filter_discards; int mftag_filter_discards; int rx_bcast_pkts; int rx_mcast_pkts; int rx_ucast_pkts; int rx_bcast_bytes; int rx_mcast_bytes; int rx_ucast_bytes; int ttl0_discard; int packet_too_big_discard; int no_buff_discards; } ;
struct qede_stats_bb {int tx_total_collisions; int tx_lpi_entry_count; int tx_9217_to_16383_byte_packets; int tx_4096_to_9216_byte_packets; int tx_2048_to_4095_byte_packets; int tx_1519_to_2047_byte_packets; int rx_9217_to_16383_byte_packets; int rx_4096_to_9216_byte_packets; int rx_2048_to_4095_byte_packets; int rx_1519_to_2047_byte_packets; int rx_1519_to_1522_byte_packets; } ;
struct qede_stats_ah {int tx_1519_to_max_byte_packets; int rx_1519_to_max_byte_packets; } ;
struct TYPE_8__ {struct qede_stats_ah ah; struct qede_stats_bb bb; struct qede_stats_common common; } ;
struct qede_dev {TYPE_3__ stats; int ptp_skip_txts; int cdev; TYPE_4__* ops; } ;
struct TYPE_7__ {int tx_1519_to_max_byte_packets; int rx_1519_to_max_byte_packets; } ;
struct TYPE_6__ {int tx_total_collisions; int tx_lpi_entry_count; int tx_9217_to_16383_byte_packets; int tx_4096_to_9216_byte_packets; int tx_2048_to_4095_byte_packets; int tx_1519_to_2047_byte_packets; int rx_9217_to_16383_byte_packets; int rx_4096_to_9216_byte_packets; int rx_2048_to_4095_byte_packets; int rx_1519_to_2047_byte_packets; int rx_1519_to_1522_byte_packets; } ;
struct TYPE_10__ {int link_change_count; int tx_mac_ctrl_frames; int brb_discards; int brb_truncates; int tx_pfc_frames; int tx_pause_frames; int tx_1024_to_1518_byte_packets; int tx_512_to_1023_byte_packets; int tx_256_to_511_byte_packets; int tx_128_to_255_byte_packets; int tx_65_to_127_byte_packets; int tx_64_byte_packets; int rx_fragments; int rx_undersize_packets; int rx_jabbers; int rx_oversize_packets; int rx_carrier_errors; int rx_align_errors; int rx_pfc_frames; int rx_pause_frames; int rx_mac_crtl_frames; int rx_crc_errors; int rx_1024_to_1518_byte_packets; int rx_512_to_1023_byte_packets; int rx_256_to_511_byte_packets; int rx_128_to_255_byte_packets; int rx_65_to_127_byte_packets; int rx_64_byte_packets; int tpa_coalesced_bytes; int tpa_not_coalesced_pkts; int tpa_aborts_num; int tpa_coalesced_events; int tpa_coalesced_pkts; int tx_err_drop_pkts; int tx_bcast_pkts; int tx_mcast_pkts; int tx_ucast_pkts; int tx_bcast_bytes; int tx_mcast_bytes; int tx_ucast_bytes; int gft_filter_drop; int mac_filter_discards; int mftag_filter_discards; int rx_bcast_pkts; int rx_mcast_pkts; int rx_ucast_pkts; int rx_bcast_bytes; int rx_mcast_bytes; int rx_ucast_bytes; int ttl0_discard; int packet_too_big_discard; int no_buff_discards; } ;
struct qed_eth_stats {TYPE_2__ ah; TYPE_1__ bb; TYPE_5__ common; } ;
struct TYPE_9__ {int (* get_vport_stats ) (int ,struct qed_eth_stats*) ;} ;


 scalar_t__ FUNC_0 (struct qede_dev*) ;
 int FUNC_1 (int ,struct qed_eth_stats*) ;

void FUNC_2(struct qede_dev *VAR_0)
{
 struct qede_stats_common *VAR_1 = &VAR_0->stats.common;
 struct qed_eth_stats VAR_2;

 VAR_0->ops->get_vport_stats(VAR_0->cdev, &VAR_2);

 VAR_1->no_buff_discards = VAR_2.common.no_buff_discards;
 VAR_1->packet_too_big_discard = VAR_2.common.packet_too_big_discard;
 VAR_1->ttl0_discard = VAR_2.common.ttl0_discard;
 VAR_1->rx_ucast_bytes = VAR_2.common.rx_ucast_bytes;
 VAR_1->rx_mcast_bytes = VAR_2.common.rx_mcast_bytes;
 VAR_1->rx_bcast_bytes = VAR_2.common.rx_bcast_bytes;
 VAR_1->rx_ucast_pkts = VAR_2.common.rx_ucast_pkts;
 VAR_1->rx_mcast_pkts = VAR_2.common.rx_mcast_pkts;
 VAR_1->rx_bcast_pkts = VAR_2.common.rx_bcast_pkts;
 VAR_1->mftag_filter_discards = VAR_2.common.mftag_filter_discards;
 VAR_1->mac_filter_discards = VAR_2.common.mac_filter_discards;
 VAR_1->gft_filter_drop = VAR_2.common.gft_filter_drop;

 VAR_1->tx_ucast_bytes = VAR_2.common.tx_ucast_bytes;
 VAR_1->tx_mcast_bytes = VAR_2.common.tx_mcast_bytes;
 VAR_1->tx_bcast_bytes = VAR_2.common.tx_bcast_bytes;
 VAR_1->tx_ucast_pkts = VAR_2.common.tx_ucast_pkts;
 VAR_1->tx_mcast_pkts = VAR_2.common.tx_mcast_pkts;
 VAR_1->tx_bcast_pkts = VAR_2.common.tx_bcast_pkts;
 VAR_1->tx_err_drop_pkts = VAR_2.common.tx_err_drop_pkts;
 VAR_1->coalesced_pkts = VAR_2.common.tpa_coalesced_pkts;
 VAR_1->coalesced_events = VAR_2.common.tpa_coalesced_events;
 VAR_1->coalesced_aborts_num = VAR_2.common.tpa_aborts_num;
 VAR_1->non_coalesced_pkts = VAR_2.common.tpa_not_coalesced_pkts;
 VAR_1->coalesced_bytes = VAR_2.common.tpa_coalesced_bytes;

 VAR_1->rx_64_byte_packets = VAR_2.common.rx_64_byte_packets;
 VAR_1->rx_65_to_127_byte_packets =
     VAR_2.common.rx_65_to_127_byte_packets;
 VAR_1->rx_128_to_255_byte_packets =
     VAR_2.common.rx_128_to_255_byte_packets;
 VAR_1->rx_256_to_511_byte_packets =
     VAR_2.common.rx_256_to_511_byte_packets;
 VAR_1->rx_512_to_1023_byte_packets =
     VAR_2.common.rx_512_to_1023_byte_packets;
 VAR_1->rx_1024_to_1518_byte_packets =
     VAR_2.common.rx_1024_to_1518_byte_packets;
 VAR_1->rx_crc_errors = VAR_2.common.rx_crc_errors;
 VAR_1->rx_mac_crtl_frames = VAR_2.common.rx_mac_crtl_frames;
 VAR_1->rx_pause_frames = VAR_2.common.rx_pause_frames;
 VAR_1->rx_pfc_frames = VAR_2.common.rx_pfc_frames;
 VAR_1->rx_align_errors = VAR_2.common.rx_align_errors;
 VAR_1->rx_carrier_errors = VAR_2.common.rx_carrier_errors;
 VAR_1->rx_oversize_packets = VAR_2.common.rx_oversize_packets;
 VAR_1->rx_jabbers = VAR_2.common.rx_jabbers;
 VAR_1->rx_undersize_packets = VAR_2.common.rx_undersize_packets;
 VAR_1->rx_fragments = VAR_2.common.rx_fragments;
 VAR_1->tx_64_byte_packets = VAR_2.common.tx_64_byte_packets;
 VAR_1->tx_65_to_127_byte_packets =
     VAR_2.common.tx_65_to_127_byte_packets;
 VAR_1->tx_128_to_255_byte_packets =
     VAR_2.common.tx_128_to_255_byte_packets;
 VAR_1->tx_256_to_511_byte_packets =
     VAR_2.common.tx_256_to_511_byte_packets;
 VAR_1->tx_512_to_1023_byte_packets =
     VAR_2.common.tx_512_to_1023_byte_packets;
 VAR_1->tx_1024_to_1518_byte_packets =
     VAR_2.common.tx_1024_to_1518_byte_packets;
 VAR_1->tx_pause_frames = VAR_2.common.tx_pause_frames;
 VAR_1->tx_pfc_frames = VAR_2.common.tx_pfc_frames;
 VAR_1->brb_truncates = VAR_2.common.brb_truncates;
 VAR_1->brb_discards = VAR_2.common.brb_discards;
 VAR_1->tx_mac_ctrl_frames = VAR_2.common.tx_mac_ctrl_frames;
 VAR_1->link_change_count = VAR_2.common.link_change_count;
 VAR_1->ptp_skip_txts = VAR_0->ptp_skip_txts;

 if (FUNC_0(VAR_0)) {
  struct qede_stats_bb *VAR_3 = &VAR_0->stats.bb;

  VAR_3->rx_1519_to_1522_byte_packets =
      VAR_2.bb.rx_1519_to_1522_byte_packets;
  VAR_3->rx_1519_to_2047_byte_packets =
      VAR_2.bb.rx_1519_to_2047_byte_packets;
  VAR_3->rx_2048_to_4095_byte_packets =
      VAR_2.bb.rx_2048_to_4095_byte_packets;
  VAR_3->rx_4096_to_9216_byte_packets =
      VAR_2.bb.rx_4096_to_9216_byte_packets;
  VAR_3->rx_9217_to_16383_byte_packets =
      VAR_2.bb.rx_9217_to_16383_byte_packets;
  VAR_3->tx_1519_to_2047_byte_packets =
      VAR_2.bb.tx_1519_to_2047_byte_packets;
  VAR_3->tx_2048_to_4095_byte_packets =
      VAR_2.bb.tx_2048_to_4095_byte_packets;
  VAR_3->tx_4096_to_9216_byte_packets =
      VAR_2.bb.tx_4096_to_9216_byte_packets;
  VAR_3->tx_9217_to_16383_byte_packets =
      VAR_2.bb.tx_9217_to_16383_byte_packets;
  VAR_3->tx_lpi_entry_count = VAR_2.bb.tx_lpi_entry_count;
  VAR_3->tx_total_collisions = VAR_2.bb.tx_total_collisions;
 } else {
  struct qede_stats_ah *VAR_4 = &VAR_0->stats.ah;

  VAR_4->rx_1519_to_max_byte_packets =
      VAR_2.ah.rx_1519_to_max_byte_packets;
  VAR_4->tx_1519_to_max_byte_packets =
      VAR_2.ah.tx_1519_to_max_byte_packets;
 }
}
