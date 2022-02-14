
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xge_stats {scalar_t__ rx_errors; scalar_t__ rx_bytes; scalar_t__ rx_packets; scalar_t__ tx_bytes; scalar_t__ tx_packets; } ;
struct xge_pdata {struct xge_stats stats; } ;
struct rtnl_link_stats64 {int rx_errors; int rx_bytes; int rx_packets; int tx_bytes; int tx_packets; } ;
struct net_device {int dummy; } ;


 struct xge_pdata* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
       struct rtnl_link_stats64 *VAR_1)
{
 struct xge_pdata *VAR_2 = FUNC_0(VAR_0);
 struct xge_stats *VAR_3 = &VAR_2->stats;

 VAR_1->tx_packets += VAR_3->tx_packets;
 VAR_1->tx_bytes += VAR_3->tx_bytes;

 VAR_1->rx_packets += VAR_3->rx_packets;
 VAR_1->rx_bytes += VAR_3->rx_bytes;
 VAR_1->rx_errors += VAR_3->rx_errors;
}
