
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ravb_private {scalar_t__ chip_id; struct net_device_stats* stats; } ;
struct net_device_stats {scalar_t__ rx_over_errors; scalar_t__ rx_missed_errors; scalar_t__ rx_length_errors; scalar_t__ rx_frame_errors; scalar_t__ rx_crc_errors; scalar_t__ rx_errors; scalar_t__ multicast; scalar_t__ tx_bytes; scalar_t__ rx_bytes; scalar_t__ tx_packets; scalar_t__ rx_packets; int tx_dropped; } ;
struct net_device {struct net_device_stats stats; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct ravb_private* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ,int ) ;

__attribute__((used)) static struct net_device_stats *FUNC_3(struct net_device *VAR_4)
{
 struct ravb_private *VAR_5 = FUNC_0(VAR_4);
 struct net_device_stats *VAR_6, *VAR_7, *VAR_8;

 VAR_6 = &VAR_4->stats;
 VAR_7 = &VAR_5->stats[VAR_0];
 VAR_8 = &VAR_5->stats[VAR_1];

 if (VAR_5->chip_id == VAR_2) {
  VAR_6->tx_dropped += FUNC_1(VAR_4, VAR_3);
  FUNC_2(VAR_4, 0, VAR_3);
 }

 VAR_6->rx_packets = VAR_7->rx_packets + VAR_8->rx_packets;
 VAR_6->tx_packets = VAR_7->tx_packets + VAR_8->tx_packets;
 VAR_6->rx_bytes = VAR_7->rx_bytes + VAR_8->rx_bytes;
 VAR_6->tx_bytes = VAR_7->tx_bytes + VAR_8->tx_bytes;
 VAR_6->multicast = VAR_7->multicast + VAR_8->multicast;
 VAR_6->rx_errors = VAR_7->rx_errors + VAR_8->rx_errors;
 VAR_6->rx_crc_errors = VAR_7->rx_crc_errors + VAR_8->rx_crc_errors;
 VAR_6->rx_frame_errors =
  VAR_7->rx_frame_errors + VAR_8->rx_frame_errors;
 VAR_6->rx_length_errors =
  VAR_7->rx_length_errors + VAR_8->rx_length_errors;
 VAR_6->rx_missed_errors =
  VAR_7->rx_missed_errors + VAR_8->rx_missed_errors;
 VAR_6->rx_over_errors =
  VAR_7->rx_over_errors + VAR_8->rx_over_errors;

 return VAR_6;
}
