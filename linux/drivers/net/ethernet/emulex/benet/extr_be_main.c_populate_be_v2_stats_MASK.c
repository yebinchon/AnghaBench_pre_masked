
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_rxf_stats_v2 {int rx_drops_too_many_frags; int rx_drops_no_tpre_descr; int rx_drops_mtu; int forwarded_packets; int rx_drops_no_erx_descr; int rx_drops_no_pbuf; struct be_port_rxf_stats_v2* port; } ;
struct be_port_rxf_stats_v2 {int roce_drops_payload_len; int roce_drops_crc; int roce_frames_received; int roce_bytes_received_msd; int roce_bytes_received_lsd; int jabber_events; int tx_priority_pauseframes; int tx_controlframes; int tx_pauseframes; int rxpp_fifo_overflow_drop; int rx_alignment_symbol_errors; int rx_address_filtered; int rx_input_fifo_overflow_drop; int rx_dropped_header_too_small; int rx_out_range_errors; int rx_dropped_too_short; int rx_dropped_too_small; int rx_dropped_tcp_length; int rx_udp_checksum_errs; int rx_tcp_checksum_errs; int rx_ip_checksum_errs; int rx_dropped_runt; int rx_frame_too_long; int rx_in_range_errors; int rx_control_frames; int rx_crc_errors; int rx_pause_frames; int rx_priority_pause_frames; int pmem_fifo_overflow_drop; } ;
struct be_pmem_stats {int eth_red_drops; } ;
struct be_hw_stats_v2 {struct be_rxf_stats_v2 rxf; struct be_pmem_stats pmem; } ;
struct be_drv_stats {int roce_drops_payload_len; int roce_drops_crc; int rx_roce_frames; int rx_roce_bytes_msd; int rx_roce_bytes_lsd; int eth_red_drops; int rx_drops_too_many_frags; int rx_drops_no_tpre_descr; int rx_drops_mtu; int forwarded_packets; int rx_drops_no_erx_descr; int rx_drops_no_pbuf; int jabber_events; int tx_priority_pauseframes; int tx_controlframes; int tx_pauseframes; int rxpp_fifo_overflow_drop; int rx_alignment_symbol_errors; int rx_address_filtered; int rx_input_fifo_overflow_drop; int rx_dropped_header_too_small; int rx_out_range_errors; int rx_dropped_too_short; int rx_dropped_too_small; int rx_dropped_tcp_length; int rx_udp_checksum_errs; int rx_tcp_checksum_errs; int rx_ip_checksum_errs; int rx_dropped_runt; int rx_frame_too_long; int rx_in_range_errors; int rx_control_frames; int rx_crc_errors; int rx_pause_frames; int rx_priority_pause_frames; int pmem_fifo_overflow_drop; } ;
struct be_adapter {size_t port_num; struct be_drv_stats drv_stats; } ;


 int FUNC_0 (struct be_hw_stats_v2*,int) ;
 scalar_t__ FUNC_1 (struct be_adapter*) ;
 struct be_hw_stats_v2* FUNC_2 (struct be_adapter*) ;

__attribute__((used)) static void FUNC_3(struct be_adapter *VAR_0)
{
 struct be_hw_stats_v2 *VAR_1 = FUNC_2(VAR_0);
 struct be_pmem_stats *VAR_2 = &VAR_1->pmem;
 struct be_rxf_stats_v2 *VAR_3 = &VAR_1->rxf;
 struct be_port_rxf_stats_v2 *VAR_4 =
     &VAR_3->port[VAR_0->port_num];
 struct be_drv_stats *VAR_5 = &VAR_0->drv_stats;

 FUNC_0(VAR_1, sizeof(*VAR_1));
 VAR_5->pmem_fifo_overflow_drop = VAR_4->pmem_fifo_overflow_drop;
 VAR_5->rx_priority_pause_frames = VAR_4->rx_priority_pause_frames;
 VAR_5->rx_pause_frames = VAR_4->rx_pause_frames;
 VAR_5->rx_crc_errors = VAR_4->rx_crc_errors;
 VAR_5->rx_control_frames = VAR_4->rx_control_frames;
 VAR_5->rx_in_range_errors = VAR_4->rx_in_range_errors;
 VAR_5->rx_frame_too_long = VAR_4->rx_frame_too_long;
 VAR_5->rx_dropped_runt = VAR_4->rx_dropped_runt;
 VAR_5->rx_ip_checksum_errs = VAR_4->rx_ip_checksum_errs;
 VAR_5->rx_tcp_checksum_errs = VAR_4->rx_tcp_checksum_errs;
 VAR_5->rx_udp_checksum_errs = VAR_4->rx_udp_checksum_errs;
 VAR_5->rx_dropped_tcp_length = VAR_4->rx_dropped_tcp_length;
 VAR_5->rx_dropped_too_small = VAR_4->rx_dropped_too_small;
 VAR_5->rx_dropped_too_short = VAR_4->rx_dropped_too_short;
 VAR_5->rx_out_range_errors = VAR_4->rx_out_range_errors;
 VAR_5->rx_dropped_header_too_small =
  VAR_4->rx_dropped_header_too_small;
 VAR_5->rx_input_fifo_overflow_drop =
  VAR_4->rx_input_fifo_overflow_drop;
 VAR_5->rx_address_filtered = VAR_4->rx_address_filtered;
 VAR_5->rx_alignment_symbol_errors =
  VAR_4->rx_alignment_symbol_errors;
 VAR_5->rxpp_fifo_overflow_drop = VAR_4->rxpp_fifo_overflow_drop;
 VAR_5->tx_pauseframes = VAR_4->tx_pauseframes;
 VAR_5->tx_controlframes = VAR_4->tx_controlframes;
 VAR_5->tx_priority_pauseframes = VAR_4->tx_priority_pauseframes;
 VAR_5->jabber_events = VAR_4->jabber_events;
 VAR_5->rx_drops_no_pbuf = VAR_3->rx_drops_no_pbuf;
 VAR_5->rx_drops_no_erx_descr = VAR_3->rx_drops_no_erx_descr;
 VAR_5->forwarded_packets = VAR_3->forwarded_packets;
 VAR_5->rx_drops_mtu = VAR_3->rx_drops_mtu;
 VAR_5->rx_drops_no_tpre_descr = VAR_3->rx_drops_no_tpre_descr;
 VAR_5->rx_drops_too_many_frags = VAR_3->rx_drops_too_many_frags;
 VAR_0->drv_stats.eth_red_drops = VAR_2->eth_red_drops;
 if (FUNC_1(VAR_0)) {
  VAR_5->rx_roce_bytes_lsd = VAR_4->roce_bytes_received_lsd;
  VAR_5->rx_roce_bytes_msd = VAR_4->roce_bytes_received_msd;
  VAR_5->rx_roce_frames = VAR_4->roce_frames_received;
  VAR_5->roce_drops_crc = VAR_4->roce_drops_crc;
  VAR_5->roce_drops_payload_len =
   VAR_4->roce_drops_payload_len;
 }
}
