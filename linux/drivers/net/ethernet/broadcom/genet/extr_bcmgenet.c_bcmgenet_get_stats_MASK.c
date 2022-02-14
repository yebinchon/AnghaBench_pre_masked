
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device_stats {unsigned long tx_bytes; unsigned long tx_packets; unsigned long rx_bytes; unsigned long rx_packets; unsigned long rx_errors; unsigned long rx_missed_errors; } ;
struct net_device {struct net_device_stats stats; } ;
struct bcmgenet_tx_ring {scalar_t__ packets; scalar_t__ bytes; } ;
struct bcmgenet_rx_ring {scalar_t__ dropped; scalar_t__ errors; scalar_t__ packets; scalar_t__ bytes; } ;
struct bcmgenet_priv {struct bcmgenet_rx_ring* rx_rings; TYPE_1__* hw_params; struct bcmgenet_tx_ring* tx_rings; } ;
struct TYPE_2__ {unsigned int tx_queues; unsigned int rx_queues; } ;


 size_t VAR_0 ;
 struct bcmgenet_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_1(struct net_device *VAR_1)
{
 struct bcmgenet_priv *VAR_2 = FUNC_0(VAR_1);
 unsigned long VAR_3 = 0, VAR_4 = 0;
 unsigned long VAR_5 = 0, VAR_6 = 0;
 unsigned long VAR_7 = 0, VAR_8 = 0;
 struct bcmgenet_tx_ring *VAR_9;
 struct bcmgenet_rx_ring *VAR_10;
 unsigned int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_2->hw_params->tx_queues; VAR_11++) {
  VAR_9 = &VAR_2->tx_rings[VAR_11];
  VAR_3 += VAR_9->bytes;
  VAR_4 += VAR_9->packets;
 }
 VAR_9 = &VAR_2->tx_rings[VAR_0];
 VAR_3 += VAR_9->bytes;
 VAR_4 += VAR_9->packets;

 for (VAR_11 = 0; VAR_11 < VAR_2->hw_params->rx_queues; VAR_11++) {
  VAR_10 = &VAR_2->rx_rings[VAR_11];

  VAR_5 += VAR_10->bytes;
  VAR_6 += VAR_10->packets;
  VAR_7 += VAR_10->errors;
  VAR_8 += VAR_10->dropped;
 }
 VAR_10 = &VAR_2->rx_rings[VAR_0];
 VAR_5 += VAR_10->bytes;
 VAR_6 += VAR_10->packets;
 VAR_7 += VAR_10->errors;
 VAR_8 += VAR_10->dropped;

 VAR_1->stats.tx_bytes = VAR_3;
 VAR_1->stats.tx_packets = VAR_4;
 VAR_1->stats.rx_bytes = VAR_5;
 VAR_1->stats.rx_packets = VAR_6;
 VAR_1->stats.rx_errors = VAR_7;
 VAR_1->stats.rx_missed_errors = VAR_7;
 return &VAR_1->stats;
}
