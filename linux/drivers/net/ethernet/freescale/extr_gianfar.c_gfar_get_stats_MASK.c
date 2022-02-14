
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device_stats {unsigned long rx_packets; unsigned long rx_bytes; unsigned long rx_dropped; unsigned long tx_bytes; unsigned long tx_packets; } ;
struct net_device {struct net_device_stats stats; } ;
struct gfar_private {int num_rx_queues; int num_tx_queues; TYPE_4__** tx_queue; TYPE_2__** rx_queue; } ;
struct TYPE_7__ {scalar_t__ tx_packets; scalar_t__ tx_bytes; } ;
struct TYPE_8__ {TYPE_3__ stats; } ;
struct TYPE_5__ {scalar_t__ rx_dropped; scalar_t__ rx_bytes; scalar_t__ rx_packets; } ;
struct TYPE_6__ {TYPE_1__ stats; } ;


 struct gfar_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_1(struct net_device *VAR_0)
{
 struct gfar_private *VAR_1 = FUNC_0(VAR_0);
 unsigned long VAR_2 = 0, VAR_3 = 0, VAR_4 = 0;
 unsigned long VAR_5 = 0, VAR_6 = 0;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1->num_rx_queues; VAR_7++) {
  VAR_2 += VAR_1->rx_queue[VAR_7]->stats.rx_packets;
  VAR_3 += VAR_1->rx_queue[VAR_7]->stats.rx_bytes;
  VAR_4 += VAR_1->rx_queue[VAR_7]->stats.rx_dropped;
 }

 VAR_0->stats.rx_packets = VAR_2;
 VAR_0->stats.rx_bytes = VAR_3;
 VAR_0->stats.rx_dropped = VAR_4;

 for (VAR_7 = 0; VAR_7 < VAR_1->num_tx_queues; VAR_7++) {
  VAR_6 += VAR_1->tx_queue[VAR_7]->stats.tx_bytes;
  VAR_5 += VAR_1->tx_queue[VAR_7]->stats.tx_packets;
 }

 VAR_0->stats.tx_bytes = VAR_6;
 VAR_0->stats.tx_packets = VAR_5;

 return &VAR_0->stats;
}
