
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {int mac; struct adapter* adapter; } ;
struct net_device_stats {scalar_t__ tx_window_errors; scalar_t__ tx_heartbeat_errors; int tx_fifo_errors; scalar_t__ tx_carrier_errors; scalar_t__ tx_aborted_errors; int rx_missed_errors; scalar_t__ rx_fifo_errors; scalar_t__ rx_frame_errors; scalar_t__ rx_crc_errors; scalar_t__ rx_over_errors; scalar_t__ rx_length_errors; scalar_t__ rx_errors; int tx_errors; int multicast; int rx_packets; int rx_bytes; int tx_packets; int tx_bytes; } ;
struct net_device {struct net_device_stats stats; } ;
struct mac_stats {int tx_underrun; int rx_cong_drops; scalar_t__ rx_fifo_ovfl; scalar_t__ rx_symbol_errs; scalar_t__ rx_fcs_errs; scalar_t__ rx_too_long; scalar_t__ rx_jabber; scalar_t__ rx_short; int rx_mcast_frames; int rx_frames; int rx_octets; int tx_frames; int tx_octets; } ;
struct adapter {int stats_lock; } ;


 struct port_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct mac_stats* FUNC_3 (int *) ;

__attribute__((used)) static struct net_device_stats *FUNC_4(struct net_device *VAR_0)
{
 struct port_info *VAR_1 = FUNC_0(VAR_0);
 struct adapter *VAR_2 = VAR_1->adapter;
 struct net_device_stats *VAR_3 = &VAR_0->stats;
 const struct mac_stats *VAR_4;

 FUNC_1(&VAR_2->stats_lock);
 VAR_4 = FUNC_3(&VAR_1->mac);
 FUNC_2(&VAR_2->stats_lock);

 VAR_3->tx_bytes = VAR_4->tx_octets;
 VAR_3->tx_packets = VAR_4->tx_frames;
 VAR_3->rx_bytes = VAR_4->rx_octets;
 VAR_3->rx_packets = VAR_4->rx_frames;
 VAR_3->multicast = VAR_4->rx_mcast_frames;

 VAR_3->tx_errors = VAR_4->tx_underrun;
 VAR_3->rx_errors = VAR_4->rx_symbol_errs + VAR_4->rx_fcs_errs +
     VAR_4->rx_too_long + VAR_4->rx_jabber + VAR_4->rx_short +
     VAR_4->rx_fifo_ovfl;


 VAR_3->rx_length_errors = VAR_4->rx_jabber + VAR_4->rx_too_long;
 VAR_3->rx_over_errors = 0;
 VAR_3->rx_crc_errors = VAR_4->rx_fcs_errs;
 VAR_3->rx_frame_errors = VAR_4->rx_symbol_errs;
 VAR_3->rx_fifo_errors = VAR_4->rx_fifo_ovfl;
 VAR_3->rx_missed_errors = VAR_4->rx_cong_drops;


 VAR_3->tx_aborted_errors = 0;
 VAR_3->tx_carrier_errors = 0;
 VAR_3->tx_fifo_errors = VAR_4->tx_underrun;
 VAR_3->tx_heartbeat_errors = 0;
 VAR_3->tx_window_errors = 0;
 return VAR_3;
}
