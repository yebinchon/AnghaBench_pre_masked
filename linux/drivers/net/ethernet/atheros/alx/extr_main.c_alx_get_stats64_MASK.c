
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtnl_link_stats64 {scalar_t__ rx_errors; scalar_t__ rx_packets; scalar_t__ tx_errors; scalar_t__ tx_packets; scalar_t__ tx_window_errors; scalar_t__ tx_fifo_errors; scalar_t__ tx_aborted_errors; scalar_t__ rx_dropped; scalar_t__ rx_frame_errors; scalar_t__ rx_crc_errors; scalar_t__ rx_length_errors; scalar_t__ rx_fifo_errors; scalar_t__ collisions; int multicast; int rx_bytes; int tx_bytes; } ;
struct net_device {int dummy; } ;
struct alx_hw_stats {scalar_t__ rx_ok; scalar_t__ tx_ok; scalar_t__ tx_late_col; scalar_t__ tx_underrun; scalar_t__ tx_abort_col; scalar_t__ tx_trunc; scalar_t__ rx_ov_rrd; scalar_t__ rx_align_err; scalar_t__ rx_fcs_err; scalar_t__ rx_len_err; scalar_t__ rx_ov_rxf; scalar_t__ rx_ov_sz; scalar_t__ rx_frag; scalar_t__ tx_multi_col; scalar_t__ tx_single_col; int rx_mcast; int rx_byte_cnt; int tx_byte_cnt; } ;
struct TYPE_2__ {struct alx_hw_stats stats; } ;
struct alx_priv {int stats_lock; TYPE_1__ hw; } ;


 int FUNC_0 (TYPE_1__*) ;
 struct alx_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0,
       struct rtnl_link_stats64 *VAR_1)
{
 struct alx_priv *VAR_2 = FUNC_1(VAR_0);
 struct alx_hw_stats *VAR_3 = &VAR_2->hw.stats;

 FUNC_2(&VAR_2->stats_lock);

 FUNC_0(&VAR_2->hw);

 VAR_1->tx_bytes = VAR_3->tx_byte_cnt;
 VAR_1->rx_bytes = VAR_3->rx_byte_cnt;
 VAR_1->multicast = VAR_3->rx_mcast;
 VAR_1->collisions = VAR_3->tx_single_col +
    VAR_3->tx_multi_col +
    VAR_3->tx_late_col +
    VAR_3->tx_abort_col;

 VAR_1->rx_errors = VAR_3->rx_frag +
    VAR_3->rx_fcs_err +
    VAR_3->rx_len_err +
    VAR_3->rx_ov_sz +
    VAR_3->rx_ov_rrd +
    VAR_3->rx_align_err +
    VAR_3->rx_ov_rxf;

 VAR_1->rx_fifo_errors = VAR_3->rx_ov_rxf;
 VAR_1->rx_length_errors = VAR_3->rx_len_err;
 VAR_1->rx_crc_errors = VAR_3->rx_fcs_err;
 VAR_1->rx_frame_errors = VAR_3->rx_align_err;
 VAR_1->rx_dropped = VAR_3->rx_ov_rrd;

 VAR_1->tx_errors = VAR_3->tx_late_col +
          VAR_3->tx_abort_col +
          VAR_3->tx_underrun +
          VAR_3->tx_trunc;

 VAR_1->tx_aborted_errors = VAR_3->tx_abort_col;
 VAR_1->tx_fifo_errors = VAR_3->tx_underrun;
 VAR_1->tx_window_errors = VAR_3->tx_late_col;

 VAR_1->tx_packets = VAR_3->tx_ok + VAR_1->tx_errors;
 VAR_1->rx_packets = VAR_3->rx_ok + VAR_1->rx_errors;

 FUNC_3(&VAR_2->stats_lock);
}
