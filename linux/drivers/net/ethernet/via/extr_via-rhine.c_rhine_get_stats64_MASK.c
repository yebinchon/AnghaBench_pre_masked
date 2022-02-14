
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtnl_link_stats64 {int tx_bytes; int tx_packets; int rx_bytes; int rx_packets; } ;
struct TYPE_4__ {int bytes; int packets; int syncp; } ;
struct TYPE_3__ {int bytes; int packets; int syncp; } ;
struct rhine_private {TYPE_2__ tx_stats; TYPE_1__ rx_stats; int lock; } ;
struct net_device {int stats; } ;


 struct rhine_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct rtnl_link_stats64*,int *) ;
 int FUNC_2 (struct rhine_private*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,unsigned int) ;

__attribute__((used)) static void
FUNC_7(struct net_device *VAR_0, struct rtnl_link_stats64 *VAR_1)
{
 struct rhine_private *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3;

 FUNC_3(&VAR_2->lock);
 FUNC_2(VAR_2);
 FUNC_4(&VAR_2->lock);

 FUNC_1(VAR_1, &VAR_0->stats);

 do {
  VAR_3 = FUNC_5(&VAR_2->rx_stats.syncp);
  VAR_1->rx_packets = VAR_2->rx_stats.packets;
  VAR_1->rx_bytes = VAR_2->rx_stats.bytes;
 } while (FUNC_6(&VAR_2->rx_stats.syncp, VAR_3));

 do {
  VAR_3 = FUNC_5(&VAR_2->tx_stats.syncp);
  VAR_1->tx_packets = VAR_2->tx_stats.packets;
  VAR_1->tx_bytes = VAR_2->tx_stats.bytes;
 } while (FUNC_6(&VAR_2->tx_stats.syncp, VAR_3));
}
