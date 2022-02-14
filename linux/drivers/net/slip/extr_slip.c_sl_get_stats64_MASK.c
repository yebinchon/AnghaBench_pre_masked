
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slip {struct slcompress* slcomp; } ;
struct slcompress {scalar_t__ sls_o_misses; scalar_t__ sls_o_compressed; scalar_t__ sls_i_tossed; scalar_t__ sls_i_compressed; } ;
struct rtnl_link_stats64 {int collisions; int tx_fifo_errors; int rx_dropped; int rx_fifo_errors; scalar_t__ tx_compressed; scalar_t__ rx_compressed; int rx_over_errors; int rx_errors; int tx_errors; int tx_dropped; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; } ;
struct net_device_stats {int rx_over_errors; int rx_errors; int tx_errors; int tx_dropped; int rx_dropped; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; } ;
struct net_device {struct net_device_stats stats; } ;


 struct slip* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void
FUNC_1(struct net_device *VAR_0, struct rtnl_link_stats64 *VAR_1)
{
 struct net_device_stats *VAR_2 = &VAR_0->stats;




 VAR_1->rx_packets = VAR_2->rx_packets;
 VAR_1->tx_packets = VAR_2->tx_packets;
 VAR_1->rx_bytes = VAR_2->rx_bytes;
 VAR_1->tx_bytes = VAR_2->tx_bytes;
 VAR_1->rx_dropped = VAR_2->rx_dropped;
 VAR_1->tx_dropped = VAR_2->tx_dropped;
 VAR_1->tx_errors = VAR_2->tx_errors;
 VAR_1->rx_errors = VAR_2->rx_errors;
 VAR_1->rx_over_errors = VAR_2->rx_over_errors;
}
