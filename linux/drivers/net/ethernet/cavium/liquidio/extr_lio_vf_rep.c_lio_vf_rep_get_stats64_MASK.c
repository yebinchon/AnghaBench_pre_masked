
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtnl_link_stats64 {int rx_dropped; int rx_bytes; int rx_packets; int tx_dropped; int tx_bytes; int tx_packets; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int tx_dropped; int tx_bytes; int tx_packets; int rx_dropped; int rx_bytes; int rx_packets; } ;
struct lio_vf_rep_desc {TYPE_1__ stats; } ;


 struct lio_vf_rep_desc* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void
FUNC_1(struct net_device *VAR_0,
         struct rtnl_link_stats64 *VAR_1)
{
 struct lio_vf_rep_desc *VAR_2 = FUNC_0(VAR_0);


 VAR_1->tx_packets = VAR_2->stats.rx_packets;
 VAR_1->tx_bytes = VAR_2->stats.rx_bytes;
 VAR_1->tx_dropped = VAR_2->stats.rx_dropped;

 VAR_1->rx_packets = VAR_2->stats.tx_packets;
 VAR_1->rx_bytes = VAR_2->stats.tx_bytes;
 VAR_1->rx_dropped = VAR_2->stats.tx_dropped;
}
