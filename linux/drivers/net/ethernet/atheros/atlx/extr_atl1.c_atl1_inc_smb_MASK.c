
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct stats_msg_block {scalar_t__ tx_pause; scalar_t__ tx_trunc; scalar_t__ tx_underrun; scalar_t__ tx_late_col; scalar_t__ tx_2_col; scalar_t__ tx_1_col; scalar_t__ tx_defer; scalar_t__ tx_abort_col; scalar_t__ rx_sz_ov; scalar_t__ rx_rrd_ov; scalar_t__ rx_pause; scalar_t__ rx_align_err; scalar_t__ rx_fcs_err; scalar_t__ rx_len_err; scalar_t__ rx_rxf_ov; scalar_t__ rx_mcast; scalar_t__ tx_byte_cnt; scalar_t__ rx_byte_cnt; scalar_t__ tx_ok; scalar_t__ rx_ok; scalar_t__ rx_frag; } ;
struct TYPE_6__ {int tx_packets; int rx_packets; int tx_carrier_errors; int tx_window_errors; int tx_aborted_errors; int tx_fifo_errors; int tx_errors; int rx_dropped; int rx_fifo_errors; int rx_frame_errors; int rx_crc_errors; int rx_length_errors; int rx_errors; int collisions; int multicast; int tx_bytes; int rx_bytes; } ;
struct net_device {TYPE_3__ stats; } ;
struct TYPE_5__ {int tx_packets; int rx_packets; int tx_carrier_errors; int tx_window_errors; int tx_aborted_errors; int tx_fifo_errors; int tx_errors; int rx_rrd_ov; int rx_fifo_errors; int rx_frame_errors; int rx_crc_errors; int rx_length_errors; int rx_errors; int collisions; int multicast; int tx_bytes; int rx_bytes; int tx_pause; int tx_trunc; int tx_underrun; int latecol; int mcc; int scc; int deffer; int excecol; int rx_trunc; int rx_pause; } ;
struct TYPE_4__ {struct stats_msg_block* smb; } ;
struct atl1_adapter {TYPE_2__ soft_stats; TYPE_1__ smb; struct net_device* netdev; } ;



__attribute__((used)) static void FUNC_0(struct atl1_adapter *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;
 struct stats_msg_block *VAR_2 = VAR_0->smb.smb;

 u64 VAR_3 = VAR_2->rx_frag +
       VAR_2->rx_fcs_err +
       VAR_2->rx_len_err +
       VAR_2->rx_sz_ov +
       VAR_2->rx_rxf_ov +
       VAR_2->rx_rrd_ov +
       VAR_2->rx_align_err;
 u64 VAR_4 = VAR_2->tx_late_col +
       VAR_2->tx_abort_col +
       VAR_2->tx_underrun +
       VAR_2->tx_trunc;


 VAR_0->soft_stats.rx_packets += VAR_2->rx_ok + VAR_3;
 VAR_0->soft_stats.tx_packets += VAR_2->tx_ok + VAR_4;
 VAR_0->soft_stats.rx_bytes += VAR_2->rx_byte_cnt;
 VAR_0->soft_stats.tx_bytes += VAR_2->tx_byte_cnt;
 VAR_0->soft_stats.multicast += VAR_2->rx_mcast;
 VAR_0->soft_stats.collisions += VAR_2->tx_1_col +
       VAR_2->tx_2_col +
       VAR_2->tx_late_col +
       VAR_2->tx_abort_col;


 VAR_0->soft_stats.rx_errors += VAR_3;
 VAR_0->soft_stats.rx_fifo_errors += VAR_2->rx_rxf_ov;
 VAR_0->soft_stats.rx_length_errors += VAR_2->rx_len_err;
 VAR_0->soft_stats.rx_crc_errors += VAR_2->rx_fcs_err;
 VAR_0->soft_stats.rx_frame_errors += VAR_2->rx_align_err;

 VAR_0->soft_stats.rx_pause += VAR_2->rx_pause;
 VAR_0->soft_stats.rx_rrd_ov += VAR_2->rx_rrd_ov;
 VAR_0->soft_stats.rx_trunc += VAR_2->rx_sz_ov;


 VAR_0->soft_stats.tx_errors += VAR_4;
 VAR_0->soft_stats.tx_fifo_errors += VAR_2->tx_underrun;
 VAR_0->soft_stats.tx_aborted_errors += VAR_2->tx_abort_col;
 VAR_0->soft_stats.tx_window_errors += VAR_2->tx_late_col;

 VAR_0->soft_stats.excecol += VAR_2->tx_abort_col;
 VAR_0->soft_stats.deffer += VAR_2->tx_defer;
 VAR_0->soft_stats.scc += VAR_2->tx_1_col;
 VAR_0->soft_stats.mcc += VAR_2->tx_2_col;
 VAR_0->soft_stats.latecol += VAR_2->tx_late_col;
 VAR_0->soft_stats.tx_underrun += VAR_2->tx_underrun;
 VAR_0->soft_stats.tx_trunc += VAR_2->tx_trunc;
 VAR_0->soft_stats.tx_pause += VAR_2->tx_pause;

 VAR_1->stats.rx_bytes = VAR_0->soft_stats.rx_bytes;
 VAR_1->stats.tx_bytes = VAR_0->soft_stats.tx_bytes;
 VAR_1->stats.multicast = VAR_0->soft_stats.multicast;
 VAR_1->stats.collisions = VAR_0->soft_stats.collisions;
 VAR_1->stats.rx_errors = VAR_0->soft_stats.rx_errors;
 VAR_1->stats.rx_length_errors =
  VAR_0->soft_stats.rx_length_errors;
 VAR_1->stats.rx_crc_errors = VAR_0->soft_stats.rx_crc_errors;
 VAR_1->stats.rx_frame_errors =
  VAR_0->soft_stats.rx_frame_errors;
 VAR_1->stats.rx_fifo_errors = VAR_0->soft_stats.rx_fifo_errors;
 VAR_1->stats.rx_dropped = VAR_0->soft_stats.rx_rrd_ov;
 VAR_1->stats.tx_errors = VAR_0->soft_stats.tx_errors;
 VAR_1->stats.tx_fifo_errors = VAR_0->soft_stats.tx_fifo_errors;
 VAR_1->stats.tx_aborted_errors =
  VAR_0->soft_stats.tx_aborted_errors;
 VAR_1->stats.tx_window_errors =
  VAR_0->soft_stats.tx_window_errors;
 VAR_1->stats.tx_carrier_errors =
  VAR_0->soft_stats.tx_carrier_errors;

 VAR_1->stats.rx_packets = VAR_0->soft_stats.rx_packets;
 VAR_1->stats.tx_packets = VAR_0->soft_stats.tx_packets;
}
