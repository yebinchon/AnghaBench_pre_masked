
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_rxf_stats_v0 {int rx_drops_too_many_frags; int rx_drops_no_tpre_descr; int rx_drops_mtu; int forwarded_packets; int rx_drops_no_erx_descr; int rx_drops_no_pbuf; int port0_jabber_events; int port1_jabber_events; struct be_port_rxf_stats_v0* port; } ;
struct be_port_rxf_stats_v0 {int tx_controlframes; int tx_pauseframes; int rx_alignment_symbol_errors; scalar_t__ rx_vlan_filtered; scalar_t__ rx_address_filtered; int rx_dropped_header_too_small; int rx_input_fifo_overflow; int rx_out_range_errors; int rx_dropped_too_short; int rx_dropped_too_small; int rx_dropped_tcp_length; int rx_fifo_overflow; int rx_udp_checksum_errs; int rx_tcp_checksum_errs; int rx_ip_checksum_errs; int rx_dropped_runt; int rx_frame_too_long; int rx_in_range_errors; int rx_control_frames; int rx_crc_errors; int rx_pause_frames; } ;
struct be_pmem_stats {int eth_red_drops; } ;
struct be_hw_stats_v0 {struct be_rxf_stats_v0 rxf; struct be_pmem_stats pmem; } ;
struct be_drv_stats {int eth_red_drops; int rx_drops_too_many_frags; int rx_drops_no_tpre_descr; int rx_drops_mtu; int forwarded_packets; int rx_drops_no_erx_descr; int rx_drops_no_pbuf; int jabber_events; int tx_controlframes; int tx_pauseframes; int rx_alignment_symbol_errors; scalar_t__ rx_address_filtered; int rx_dropped_header_too_small; int rx_input_fifo_overflow_drop; int rx_out_range_errors; int rx_dropped_too_short; int rx_dropped_too_small; int rx_dropped_tcp_length; int rxpp_fifo_overflow_drop; int rx_udp_checksum_errs; int rx_tcp_checksum_errs; int rx_ip_checksum_errs; int rx_dropped_runt; int rx_frame_too_long; int rx_in_range_errors; int rx_control_frames; int rx_crc_errors; int rx_pause_frames; } ;
struct be_adapter {size_t port_num; struct be_drv_stats drv_stats; } ;


 int FUNC_0 (struct be_hw_stats_v0*,int) ;
 struct be_hw_stats_v0* FUNC_1 (struct be_adapter*) ;

__attribute__((used)) static void FUNC_2(struct be_adapter *VAR_0)
{
 struct be_hw_stats_v0 *VAR_1 = FUNC_1(VAR_0);
 struct be_pmem_stats *VAR_2 = &VAR_1->pmem;
 struct be_rxf_stats_v0 *VAR_3 = &VAR_1->rxf;
 struct be_port_rxf_stats_v0 *VAR_4 =
     &VAR_3->port[VAR_0->port_num];
 struct be_drv_stats *VAR_5 = &VAR_0->drv_stats;

 FUNC_0(VAR_1, sizeof(*VAR_1));
 VAR_5->rx_pause_frames = VAR_4->rx_pause_frames;
 VAR_5->rx_crc_errors = VAR_4->rx_crc_errors;
 VAR_5->rx_control_frames = VAR_4->rx_control_frames;
 VAR_5->rx_in_range_errors = VAR_4->rx_in_range_errors;
 VAR_5->rx_frame_too_long = VAR_4->rx_frame_too_long;
 VAR_5->rx_dropped_runt = VAR_4->rx_dropped_runt;
 VAR_5->rx_ip_checksum_errs = VAR_4->rx_ip_checksum_errs;
 VAR_5->rx_tcp_checksum_errs = VAR_4->rx_tcp_checksum_errs;
 VAR_5->rx_udp_checksum_errs = VAR_4->rx_udp_checksum_errs;
 VAR_5->rxpp_fifo_overflow_drop = VAR_4->rx_fifo_overflow;
 VAR_5->rx_dropped_tcp_length = VAR_4->rx_dropped_tcp_length;
 VAR_5->rx_dropped_too_small = VAR_4->rx_dropped_too_small;
 VAR_5->rx_dropped_too_short = VAR_4->rx_dropped_too_short;
 VAR_5->rx_out_range_errors = VAR_4->rx_out_range_errors;
 VAR_5->rx_input_fifo_overflow_drop = VAR_4->rx_input_fifo_overflow;
 VAR_5->rx_dropped_header_too_small =
  VAR_4->rx_dropped_header_too_small;
 VAR_5->rx_address_filtered =
     VAR_4->rx_address_filtered +
     VAR_4->rx_vlan_filtered;
 VAR_5->rx_alignment_symbol_errors =
  VAR_4->rx_alignment_symbol_errors;

 VAR_5->tx_pauseframes = VAR_4->tx_pauseframes;
 VAR_5->tx_controlframes = VAR_4->tx_controlframes;

 if (VAR_0->port_num)
  VAR_5->jabber_events = VAR_3->port1_jabber_events;
 else
  VAR_5->jabber_events = VAR_3->port0_jabber_events;
 VAR_5->rx_drops_no_pbuf = VAR_3->rx_drops_no_pbuf;
 VAR_5->rx_drops_no_erx_descr = VAR_3->rx_drops_no_erx_descr;
 VAR_5->forwarded_packets = VAR_3->forwarded_packets;
 VAR_5->rx_drops_mtu = VAR_3->rx_drops_mtu;
 VAR_5->rx_drops_no_tpre_descr = VAR_3->rx_drops_no_tpre_descr;
 VAR_5->rx_drops_too_many_frags = VAR_3->rx_drops_too_many_frags;
 VAR_0->drv_stats.eth_red_drops = VAR_2->eth_red_drops;
}
