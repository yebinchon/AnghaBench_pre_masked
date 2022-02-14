
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {scalar_t__ tx_errors; scalar_t__ tx_packets; scalar_t__ rx_errors; scalar_t__ rx_packets; scalar_t__ tx_window_errors; scalar_t__ tx_aborted_errors; scalar_t__ tx_fifo_errors; scalar_t__ rx_dropped; scalar_t__ rx_frame_errors; scalar_t__ rx_crc_errors; scalar_t__ rx_length_errors; scalar_t__ rx_fifo_errors; scalar_t__ collisions; int multicast; int tx_bytes; int rx_bytes; } ;
struct net_device {struct net_device_stats stats; } ;
struct atl1c_hw_stats {scalar_t__ tx_ok; scalar_t__ rx_ok; scalar_t__ tx_late_col; scalar_t__ tx_abort_col; scalar_t__ tx_underrun; scalar_t__ tx_trunc; scalar_t__ rx_rrd_ov; scalar_t__ rx_align_err; scalar_t__ rx_fcs_err; scalar_t__ rx_len_err; scalar_t__ rx_rxf_ov; scalar_t__ rx_sz_ov; scalar_t__ rx_frag; scalar_t__ tx_2_col; scalar_t__ tx_1_col; int rx_mcast; int tx_byte_cnt; int rx_byte_cnt; } ;
struct atl1c_adapter {struct atl1c_hw_stats hw_stats; } ;


 int FUNC_0 (struct atl1c_adapter*) ;
 struct atl1c_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_2(struct net_device *VAR_0)
{
 struct atl1c_adapter *VAR_1 = FUNC_1(VAR_0);
 struct atl1c_hw_stats *VAR_2 = &VAR_1->hw_stats;
 struct net_device_stats *VAR_3 = &VAR_0->stats;

 FUNC_0(VAR_1);
 VAR_3->rx_bytes = VAR_2->rx_byte_cnt;
 VAR_3->tx_bytes = VAR_2->tx_byte_cnt;
 VAR_3->multicast = VAR_2->rx_mcast;
 VAR_3->collisions = VAR_2->tx_1_col +
    VAR_2->tx_2_col +
    VAR_2->tx_late_col +
    VAR_2->tx_abort_col;

 VAR_3->rx_errors = VAR_2->rx_frag +
    VAR_2->rx_fcs_err +
    VAR_2->rx_len_err +
    VAR_2->rx_sz_ov +
    VAR_2->rx_rrd_ov +
    VAR_2->rx_align_err +
    VAR_2->rx_rxf_ov;

 VAR_3->rx_fifo_errors = VAR_2->rx_rxf_ov;
 VAR_3->rx_length_errors = VAR_2->rx_len_err;
 VAR_3->rx_crc_errors = VAR_2->rx_fcs_err;
 VAR_3->rx_frame_errors = VAR_2->rx_align_err;
 VAR_3->rx_dropped = VAR_2->rx_rrd_ov;

 VAR_3->tx_errors = VAR_2->tx_late_col +
          VAR_2->tx_abort_col +
          VAR_2->tx_underrun +
          VAR_2->tx_trunc;

 VAR_3->tx_fifo_errors = VAR_2->tx_underrun;
 VAR_3->tx_aborted_errors = VAR_2->tx_abort_col;
 VAR_3->tx_window_errors = VAR_2->tx_late_col;

 VAR_3->rx_packets = VAR_2->rx_ok + VAR_3->rx_errors;
 VAR_3->tx_packets = VAR_2->tx_ok + VAR_3->tx_errors;

 return VAR_3;
}
