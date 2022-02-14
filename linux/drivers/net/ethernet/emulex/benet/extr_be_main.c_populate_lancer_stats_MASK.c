
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lancer_pport_stats {int rx_drops_too_many_frags_lo; int rx_drops_mtu_lo; int num_forwards_lo; int rx_jabbers; int tx_control_frames_lo; int tx_pause_frames_lo; int rx_fifo_overflow; int rx_symbol_errors_lo; scalar_t__ rx_vlan_filtered; scalar_t__ rx_address_filtered; int rx_dropped_header_too_small; int rx_out_of_range_errors; int rx_dropped_too_short; int rx_dropped_too_small; int rx_dropped_invalid_tcp_length; int rx_udp_checksum_errors; int rx_tcp_checksum_errors; int rx_ip_checksum_errors; int rx_dropped_runt; int rx_frames_too_long_lo; int rx_in_range_errors; int rx_control_frames_lo; int rx_crc_errors_lo; int rx_pause_frames_lo; } ;
struct be_drv_stats {int rx_drops_too_many_frags; int rx_drops_mtu; int forwarded_packets; int jabber_events; int tx_controlframes; int tx_pauseframes; int rxpp_fifo_overflow_drop; int rx_alignment_symbol_errors; scalar_t__ rx_address_filtered; int rx_input_fifo_overflow_drop; int rx_dropped_header_too_small; int rx_out_range_errors; int rx_dropped_too_short; int rx_dropped_too_small; int rx_dropped_tcp_length; int rx_udp_checksum_errs; int rx_tcp_checksum_errs; int rx_ip_checksum_errs; int rx_dropped_runt; int rx_frame_too_long; int rx_in_range_errors; int rx_control_frames; int rx_crc_errors; int rx_pause_frames; } ;
struct be_adapter {struct be_drv_stats drv_stats; } ;


 int FUNC_0 (struct lancer_pport_stats*,int) ;
 struct lancer_pport_stats* FUNC_1 (struct be_adapter*) ;

__attribute__((used)) static void FUNC_2(struct be_adapter *VAR_0)
{
 struct be_drv_stats *VAR_1 = &VAR_0->drv_stats;
 struct lancer_pport_stats *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2, sizeof(*VAR_2));
 VAR_1->rx_pause_frames = VAR_2->rx_pause_frames_lo;
 VAR_1->rx_crc_errors = VAR_2->rx_crc_errors_lo;
 VAR_1->rx_control_frames = VAR_2->rx_control_frames_lo;
 VAR_1->rx_in_range_errors = VAR_2->rx_in_range_errors;
 VAR_1->rx_frame_too_long = VAR_2->rx_frames_too_long_lo;
 VAR_1->rx_dropped_runt = VAR_2->rx_dropped_runt;
 VAR_1->rx_ip_checksum_errs = VAR_2->rx_ip_checksum_errors;
 VAR_1->rx_tcp_checksum_errs = VAR_2->rx_tcp_checksum_errors;
 VAR_1->rx_udp_checksum_errs = VAR_2->rx_udp_checksum_errors;
 VAR_1->rx_dropped_tcp_length =
    VAR_2->rx_dropped_invalid_tcp_length;
 VAR_1->rx_dropped_too_small = VAR_2->rx_dropped_too_small;
 VAR_1->rx_dropped_too_short = VAR_2->rx_dropped_too_short;
 VAR_1->rx_out_range_errors = VAR_2->rx_out_of_range_errors;
 VAR_1->rx_dropped_header_too_small =
    VAR_2->rx_dropped_header_too_small;
 VAR_1->rx_input_fifo_overflow_drop = VAR_2->rx_fifo_overflow;
 VAR_1->rx_address_filtered =
     VAR_2->rx_address_filtered +
     VAR_2->rx_vlan_filtered;
 VAR_1->rx_alignment_symbol_errors = VAR_2->rx_symbol_errors_lo;
 VAR_1->rxpp_fifo_overflow_drop = VAR_2->rx_fifo_overflow;
 VAR_1->tx_pauseframes = VAR_2->tx_pause_frames_lo;
 VAR_1->tx_controlframes = VAR_2->tx_control_frames_lo;
 VAR_1->jabber_events = VAR_2->rx_jabbers;
 VAR_1->forwarded_packets = VAR_2->num_forwards_lo;
 VAR_1->rx_drops_mtu = VAR_2->rx_drops_mtu_lo;
 VAR_1->rx_drops_too_many_frags =
    VAR_2->rx_drops_too_many_frags_lo;
}
