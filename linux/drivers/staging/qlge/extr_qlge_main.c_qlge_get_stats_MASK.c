
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_ring {scalar_t__ tx_errors; scalar_t__ tx_bytes; scalar_t__ tx_packets; } ;
struct rx_ring {scalar_t__ rx_multicast; scalar_t__ rx_errors; scalar_t__ rx_dropped; scalar_t__ rx_bytes; scalar_t__ rx_packets; } ;
struct ql_adapter {int rss_ring_count; int tx_ring_count; struct tx_ring* tx_ring; struct rx_ring* rx_ring; } ;
struct net_device_stats {unsigned long rx_packets; unsigned long rx_bytes; unsigned long rx_dropped; unsigned long rx_errors; unsigned long multicast; unsigned long tx_packets; unsigned long tx_bytes; unsigned long tx_errors; } ;
struct net_device {struct net_device_stats stats; } ;


 struct ql_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_1(struct net_device
            *VAR_0)
{
 struct ql_adapter *VAR_1 = FUNC_0(VAR_0);
 struct rx_ring *VAR_2 = &VAR_1->rx_ring[0];
 struct tx_ring *VAR_3 = &VAR_1->tx_ring[0];
 unsigned long VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9;


 VAR_4 = VAR_5 = VAR_6 = VAR_7 = VAR_8 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_1->rss_ring_count; VAR_9++, VAR_2++) {
   VAR_4 += VAR_2->rx_packets;
   VAR_8 += VAR_2->rx_bytes;
   VAR_6 += VAR_2->rx_dropped;
   VAR_7 += VAR_2->rx_errors;
   VAR_5 += VAR_2->rx_multicast;
 }
 VAR_0->stats.rx_packets = VAR_4;
 VAR_0->stats.rx_bytes = VAR_8;
 VAR_0->stats.rx_dropped = VAR_6;
 VAR_0->stats.rx_errors = VAR_7;
 VAR_0->stats.multicast = VAR_5;


 VAR_4 = VAR_7 = VAR_8 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_1->tx_ring_count; VAR_9++, VAR_3++) {
   VAR_4 += VAR_3->tx_packets;
   VAR_8 += VAR_3->tx_bytes;
   VAR_7 += VAR_3->tx_errors;
 }
 VAR_0->stats.tx_packets = VAR_4;
 VAR_0->stats.tx_bytes = VAR_8;
 VAR_0->stats.tx_errors = VAR_7;
 return &VAR_0->stats;
}
