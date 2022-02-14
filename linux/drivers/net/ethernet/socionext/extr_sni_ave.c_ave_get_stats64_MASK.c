
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtnl_link_stats64 {int collisions; int rx_fifo_errors; int tx_dropped; int rx_dropped; int tx_errors; int rx_errors; int tx_bytes; int tx_packets; int rx_bytes; int rx_packets; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int collisions; int dropped; int errors; int bytes; int packets; int syncp; } ;
struct TYPE_3__ {int fifo_errors; int dropped; int errors; int bytes; int packets; int syncp; } ;
struct ave_private {TYPE_2__ stats_tx; TYPE_1__ stats_rx; } ;


 struct ave_private* FUNC_0 (struct net_device*) ;
 unsigned int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0,
       struct rtnl_link_stats64 *VAR_1)
{
 struct ave_private *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3;

 do {
  VAR_3 = FUNC_1(&VAR_2->stats_rx.syncp);
  VAR_1->rx_packets = VAR_2->stats_rx.packets;
  VAR_1->rx_bytes = VAR_2->stats_rx.bytes;
 } while (FUNC_2(&VAR_2->stats_rx.syncp, VAR_3));

 do {
  VAR_3 = FUNC_1(&VAR_2->stats_tx.syncp);
  VAR_1->tx_packets = VAR_2->stats_tx.packets;
  VAR_1->tx_bytes = VAR_2->stats_tx.bytes;
 } while (FUNC_2(&VAR_2->stats_tx.syncp, VAR_3));

 VAR_1->rx_errors = VAR_2->stats_rx.errors;
 VAR_1->tx_errors = VAR_2->stats_tx.errors;
 VAR_1->rx_dropped = VAR_2->stats_rx.dropped;
 VAR_1->tx_dropped = VAR_2->stats_tx.dropped;
 VAR_1->rx_fifo_errors = VAR_2->stats_rx.fifo_errors;
 VAR_1->collisions = VAR_2->stats_tx.collisions;
}
