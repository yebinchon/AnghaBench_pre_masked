
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_stats64 {scalar_t__ rx_fifo_errors; scalar_t__ rx_length_errors; scalar_t__ rx_errors; int tx_errors; scalar_t__ tx_window_errors; scalar_t__ tx_heartbeat_errors; scalar_t__ tx_fifo_errors; scalar_t__ tx_carrier_errors; scalar_t__ tx_aborted_errors; scalar_t__ rx_missed_errors; scalar_t__ rx_dropped; scalar_t__ rx_frame_errors; scalar_t__ rx_crc_errors; scalar_t__ rx_over_errors; int multicast; int rx_packets; int rx_bytes; int tx_packets; int tx_bytes; } ;
struct port_stats {scalar_t__ rx_len_err; scalar_t__ rx_fcs_err; scalar_t__ rx_symbol_err; int tx_error_frames; scalar_t__ rx_trunc3; scalar_t__ rx_trunc2; scalar_t__ rx_trunc1; scalar_t__ rx_trunc0; scalar_t__ rx_ovflow3; scalar_t__ rx_ovflow2; scalar_t__ rx_ovflow1; scalar_t__ rx_ovflow0; scalar_t__ rx_runt; scalar_t__ rx_too_long; scalar_t__ rx_jabber; int rx_mcast_frames; int rx_frames; int rx_octets; int tx_frames; int tx_octets; } ;
struct port_info {int stats_base; int tx_chan; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct adapter {int stats_lock; } ;


 struct port_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct adapter*,int ,struct port_stats*,int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0,
      struct rtnl_link_stats64 *VAR_1)
{
 struct port_stats VAR_2;
 struct port_info *VAR_3 = FUNC_0(VAR_0);
 struct adapter *VAR_4 = VAR_3->adapter;





 FUNC_2(&VAR_4->stats_lock);
 if (!FUNC_1(VAR_0)) {
  FUNC_3(&VAR_4->stats_lock);
  return;
 }
 FUNC_4(VAR_4, VAR_3->tx_chan, &VAR_2,
     &VAR_3->stats_base);
 FUNC_3(&VAR_4->stats_lock);

 VAR_1->tx_bytes = VAR_2.tx_octets;
 VAR_1->tx_packets = VAR_2.tx_frames;
 VAR_1->rx_bytes = VAR_2.rx_octets;
 VAR_1->rx_packets = VAR_2.rx_frames;
 VAR_1->multicast = VAR_2.rx_mcast_frames;


 VAR_1->rx_length_errors = VAR_2.rx_jabber + VAR_2.rx_too_long +
          VAR_2.rx_runt;
 VAR_1->rx_over_errors = 0;
 VAR_1->rx_crc_errors = VAR_2.rx_fcs_err;
 VAR_1->rx_frame_errors = VAR_2.rx_symbol_err;
 VAR_1->rx_dropped = VAR_2.rx_ovflow0 + VAR_2.rx_ovflow1 +
          VAR_2.rx_ovflow2 + VAR_2.rx_ovflow3 +
          VAR_2.rx_trunc0 + VAR_2.rx_trunc1 +
          VAR_2.rx_trunc2 + VAR_2.rx_trunc3;
 VAR_1->rx_missed_errors = 0;


 VAR_1->tx_aborted_errors = 0;
 VAR_1->tx_carrier_errors = 0;
 VAR_1->tx_fifo_errors = 0;
 VAR_1->tx_heartbeat_errors = 0;
 VAR_1->tx_window_errors = 0;

 VAR_1->tx_errors = VAR_2.tx_error_frames;
 VAR_1->rx_errors = VAR_2.rx_symbol_err + VAR_2.rx_fcs_err +
  VAR_1->rx_length_errors + VAR_2.rx_len_err + VAR_1->rx_fifo_errors;
}
