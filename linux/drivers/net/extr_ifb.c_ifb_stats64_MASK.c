
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct rtnl_link_stats64 {int tx_dropped; int rx_dropped; int tx_bytes; int tx_packets; int rx_bytes; int rx_packets; } ;
struct TYPE_2__ {int tx_dropped; int rx_dropped; } ;
struct net_device {int num_tx_queues; TYPE_1__ stats; } ;
struct ifb_q_private {scalar_t__ tx_bytes; scalar_t__ tx_packets; int tsync; scalar_t__ rx_bytes; scalar_t__ rx_packets; int rsync; } ;
struct ifb_dev_private {struct ifb_q_private* tx_private; } ;


 struct ifb_dev_private* FUNC_0 (struct net_device*) ;
 unsigned int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0,
   struct rtnl_link_stats64 *VAR_1)
{
 struct ifb_dev_private *VAR_2 = FUNC_0(VAR_0);
 struct ifb_q_private *VAR_3 = VAR_2->tx_private;
 unsigned int VAR_4;
 u64 VAR_5, VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0->num_tx_queues; VAR_7++,VAR_3++) {
  do {
   VAR_4 = FUNC_1(&VAR_3->rsync);
   VAR_5 = VAR_3->rx_packets;
   VAR_6 = VAR_3->rx_bytes;
  } while (FUNC_2(&VAR_3->rsync, VAR_4));
  VAR_1->rx_packets += VAR_5;
  VAR_1->rx_bytes += VAR_6;

  do {
   VAR_4 = FUNC_1(&VAR_3->tsync);
   VAR_5 = VAR_3->tx_packets;
   VAR_6 = VAR_3->tx_bytes;
  } while (FUNC_2(&VAR_3->tsync, VAR_4));
  VAR_1->tx_packets += VAR_5;
  VAR_1->tx_bytes += VAR_6;
 }
 VAR_1->rx_dropped = VAR_0->stats.rx_dropped;
 VAR_1->tx_dropped = VAR_0->stats.tx_dropped;
}
