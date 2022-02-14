
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct rtnl_link_stats64 {int tx_dropped; int rx_dropped; int rx_errors; void* tx_bytes; void* tx_packets; void* rx_bytes; void* rx_packets; } ;
struct netcp_stats {int tx_dropped; int rx_dropped; int rx_errors; void* tx_bytes; void* tx_packets; int syncp_tx; void* rx_bytes; void* rx_packets; int syncp_rx; } ;
struct netcp_intf {struct netcp_stats stats; } ;
struct net_device {int dummy; } ;


 struct netcp_intf* FUNC_0 (struct net_device*) ;
 unsigned int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned int) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_0, struct rtnl_link_stats64 *VAR_1)
{
 struct netcp_intf *VAR_2 = FUNC_0(VAR_0);
 struct netcp_stats *VAR_3 = &VAR_2->stats;
 u64 VAR_4, VAR_5, VAR_6, VAR_7;
 unsigned int VAR_8;

 do {
  VAR_8 = FUNC_1(&VAR_3->syncp_rx);
  VAR_4 = VAR_3->rx_packets;
  VAR_5 = VAR_3->rx_bytes;
 } while (FUNC_2(&VAR_3->syncp_rx, VAR_8));

 do {
  VAR_8 = FUNC_1(&VAR_3->syncp_tx);
  VAR_6 = VAR_3->tx_packets;
  VAR_7 = VAR_3->tx_bytes;
 } while (FUNC_2(&VAR_3->syncp_tx, VAR_8));

 VAR_1->rx_packets = VAR_4;
 VAR_1->rx_bytes = VAR_5;
 VAR_1->tx_packets = VAR_6;
 VAR_1->tx_bytes = VAR_7;


 VAR_1->rx_errors = VAR_3->rx_errors;
 VAR_1->rx_dropped = VAR_3->rx_dropped;
 VAR_1->tx_dropped = VAR_3->tx_dropped;
}
