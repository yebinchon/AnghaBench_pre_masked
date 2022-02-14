
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_stats64 {scalar_t__ tx_window_errors; scalar_t__ tx_aborted_errors; scalar_t__ tx_fifo_errors; scalar_t__ tx_errors; int rx_missed_errors; int rx_over_errors; scalar_t__ rx_frame_errors; scalar_t__ rx_crc_errors; scalar_t__ rx_length_errors; int rx_fifo_errors; scalar_t__ rx_errors; scalar_t__ collisions; int multicast; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; } ;
struct net_device {int dummy; } ;
struct emac_stats {int tx_2_col; int lock; scalar_t__ tx_late_col; scalar_t__ tx_abort_col; scalar_t__ tx_underrun; scalar_t__ tx_trunc; int rx_rxf_ov; scalar_t__ rx_align_err; scalar_t__ rx_fcs_err; scalar_t__ rx_len_err; scalar_t__ rx_sz_ov; scalar_t__ rx_frag; scalar_t__ tx_1_col; int rx_mcast; int tx_byte_cnt; int rx_byte_cnt; int tx_ok; int rx_ok; } ;
struct emac_adapter {struct emac_stats stats; } ;


 int FUNC_0 (struct emac_adapter*) ;
 struct emac_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0,
        struct rtnl_link_stats64 *VAR_1)
{
 struct emac_adapter *VAR_2 = FUNC_1(VAR_0);
 struct emac_stats *VAR_3 = &VAR_2->stats;

 FUNC_2(&VAR_3->lock);

 FUNC_0(VAR_2);


 VAR_1->rx_packets = VAR_3->rx_ok;
 VAR_1->tx_packets = VAR_3->tx_ok;
 VAR_1->rx_bytes = VAR_3->rx_byte_cnt;
 VAR_1->tx_bytes = VAR_3->tx_byte_cnt;
 VAR_1->multicast = VAR_3->rx_mcast;
 VAR_1->collisions = VAR_3->tx_1_col + VAR_3->tx_2_col * 2 +
    VAR_3->tx_late_col + VAR_3->tx_abort_col;

 VAR_1->rx_errors = VAR_3->rx_frag + VAR_3->rx_fcs_err +
          VAR_3->rx_len_err + VAR_3->rx_sz_ov +
          VAR_3->rx_align_err;
 VAR_1->rx_fifo_errors = VAR_3->rx_rxf_ov;
 VAR_1->rx_length_errors = VAR_3->rx_len_err;
 VAR_1->rx_crc_errors = VAR_3->rx_fcs_err;
 VAR_1->rx_frame_errors = VAR_3->rx_align_err;
 VAR_1->rx_over_errors = VAR_3->rx_rxf_ov;
 VAR_1->rx_missed_errors = VAR_3->rx_rxf_ov;

 VAR_1->tx_errors = VAR_3->tx_late_col + VAR_3->tx_abort_col +
          VAR_3->tx_underrun + VAR_3->tx_trunc;
 VAR_1->tx_fifo_errors = VAR_3->tx_underrun;
 VAR_1->tx_aborted_errors = VAR_3->tx_abort_col;
 VAR_1->tx_window_errors = VAR_3->tx_late_col;

 FUNC_3(&VAR_3->lock);
}
