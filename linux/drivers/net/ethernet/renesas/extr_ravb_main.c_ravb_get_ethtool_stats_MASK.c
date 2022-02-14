
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ravb_private {int * dirty_tx; int * dirty_rx; int * cur_tx; int * cur_rx; struct net_device_stats* stats; } ;
struct net_device_stats {int rx_over_errors; int rx_missed_errors; int rx_length_errors; int rx_frame_errors; int rx_crc_errors; int rx_errors; int multicast; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ravb_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2,
       struct ethtool_stats *VAR_3, u64 *VAR_4)
{
 struct ravb_private *VAR_5 = FUNC_0(VAR_2);
 int VAR_6 = 0;
 int VAR_7;


 for (VAR_7 = VAR_1; VAR_7 < VAR_0; VAR_7++) {
  struct net_device_stats *VAR_8 = &VAR_5->stats[VAR_7];

  VAR_4[VAR_6++] = VAR_5->cur_rx[VAR_7];
  VAR_4[VAR_6++] = VAR_5->cur_tx[VAR_7];
  VAR_4[VAR_6++] = VAR_5->dirty_rx[VAR_7];
  VAR_4[VAR_6++] = VAR_5->dirty_tx[VAR_7];
  VAR_4[VAR_6++] = VAR_8->rx_packets;
  VAR_4[VAR_6++] = VAR_8->tx_packets;
  VAR_4[VAR_6++] = VAR_8->rx_bytes;
  VAR_4[VAR_6++] = VAR_8->tx_bytes;
  VAR_4[VAR_6++] = VAR_8->multicast;
  VAR_4[VAR_6++] = VAR_8->rx_errors;
  VAR_4[VAR_6++] = VAR_8->rx_crc_errors;
  VAR_4[VAR_6++] = VAR_8->rx_frame_errors;
  VAR_4[VAR_6++] = VAR_8->rx_length_errors;
  VAR_4[VAR_6++] = VAR_8->rx_missed_errors;
  VAR_4[VAR_6++] = VAR_8->rx_over_errors;
 }
}
