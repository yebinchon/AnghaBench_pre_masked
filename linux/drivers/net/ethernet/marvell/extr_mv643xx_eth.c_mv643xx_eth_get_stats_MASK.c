
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_queue {scalar_t__ tx_dropped; scalar_t__ tx_bytes; scalar_t__ tx_packets; } ;
struct net_device_stats {unsigned long tx_packets; unsigned long tx_bytes; unsigned long tx_dropped; } ;
struct net_device {struct net_device_stats stats; } ;
struct mv643xx_eth_private {int txq_count; struct tx_queue* txq; } ;


 struct mv643xx_eth_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_1(struct net_device *VAR_0)
{
 struct mv643xx_eth_private *VAR_1 = FUNC_0(VAR_0);
 struct net_device_stats *VAR_2 = &VAR_0->stats;
 unsigned long VAR_3 = 0;
 unsigned long VAR_4 = 0;
 unsigned long VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1->txq_count; VAR_6++) {
  struct tx_queue *VAR_7 = VAR_1->txq + VAR_6;

  VAR_3 += VAR_7->tx_packets;
  VAR_4 += VAR_7->tx_bytes;
  VAR_5 += VAR_7->tx_dropped;
 }

 VAR_2->tx_packets = VAR_3;
 VAR_2->tx_bytes = VAR_4;
 VAR_2->tx_dropped = VAR_5;

 return VAR_2;
}
