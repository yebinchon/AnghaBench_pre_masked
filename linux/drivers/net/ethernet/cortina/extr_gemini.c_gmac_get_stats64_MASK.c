
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtnl_link_stats64 {int rx_missed_errors; int rx_dropped; int tx_dropped; int rx_fifo_errors; int multicast; int tx_bytes; int tx_packets; int tx_errors; int rx_frame_errors; int rx_crc_errors; int rx_over_errors; int rx_length_errors; int rx_errors; int rx_bytes; int rx_packets; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int tx_dropped; int rx_fifo_errors; int rx_missed_errors; int multicast; int tx_bytes; int tx_packets; int tx_errors; int rx_frame_errors; int rx_crc_errors; int rx_over_errors; int rx_length_errors; int rx_dropped; int rx_errors; int rx_bytes; int rx_packets; } ;
struct gemini_ethernet_port {TYPE_1__ stats; int tx_stats_syncp; int ir_stats_syncp; int rx_stats_syncp; } ;


 int FUNC_0 (struct net_device*) ;
 struct gemini_ethernet_port* FUNC_1 (struct net_device*) ;
 unsigned int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0,
        struct rtnl_link_stats64 *VAR_1)
{
 struct gemini_ethernet_port *VAR_2 = FUNC_1(VAR_0);
 unsigned int VAR_3;

 FUNC_0(VAR_0);


 do {
  VAR_3 = FUNC_2(&VAR_2->rx_stats_syncp);

  VAR_1->rx_packets = VAR_2->stats.rx_packets;
  VAR_1->rx_bytes = VAR_2->stats.rx_bytes;
  VAR_1->rx_errors = VAR_2->stats.rx_errors;
  VAR_1->rx_dropped = VAR_2->stats.rx_dropped;

  VAR_1->rx_length_errors = VAR_2->stats.rx_length_errors;
  VAR_1->rx_over_errors = VAR_2->stats.rx_over_errors;
  VAR_1->rx_crc_errors = VAR_2->stats.rx_crc_errors;
  VAR_1->rx_frame_errors = VAR_2->stats.rx_frame_errors;

 } while (FUNC_3(&VAR_2->rx_stats_syncp, VAR_3));


 do {
  VAR_3 = FUNC_2(&VAR_2->ir_stats_syncp);

  VAR_1->tx_errors = VAR_2->stats.tx_errors;
  VAR_1->tx_packets = VAR_2->stats.tx_packets;
  VAR_1->tx_bytes = VAR_2->stats.tx_bytes;

  VAR_1->multicast = VAR_2->stats.multicast;
  VAR_1->rx_missed_errors = VAR_2->stats.rx_missed_errors;
  VAR_1->rx_fifo_errors = VAR_2->stats.rx_fifo_errors;

 } while (FUNC_3(&VAR_2->ir_stats_syncp, VAR_3));


 do {
  VAR_3 = FUNC_2(&VAR_2->tx_stats_syncp);

  VAR_1->tx_dropped = VAR_2->stats.tx_dropped;

 } while (FUNC_3(&VAR_2->tx_stats_syncp, VAR_3));

 VAR_1->rx_dropped += VAR_1->rx_missed_errors;
}
