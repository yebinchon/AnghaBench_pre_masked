
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_stats64 {scalar_t__ tx_dropped; scalar_t__ multicast; scalar_t__ rx_missed_errors; scalar_t__ tx_bytes; scalar_t__ rx_bytes; scalar_t__ tx_packets; scalar_t__ rx_packets; } ;
struct bnxt {struct rtnl_link_stats64 net_stats_prev; } ;



__attribute__((used)) static void FUNC_0(struct bnxt *VAR_0,
    struct rtnl_link_stats64 *VAR_1)
{
 struct rtnl_link_stats64 *VAR_2 = &VAR_0->net_stats_prev;

 VAR_1->rx_packets += VAR_2->rx_packets;
 VAR_1->tx_packets += VAR_2->tx_packets;
 VAR_1->rx_bytes += VAR_2->rx_bytes;
 VAR_1->tx_bytes += VAR_2->tx_bytes;
 VAR_1->rx_missed_errors += VAR_2->rx_missed_errors;
 VAR_1->multicast += VAR_2->multicast;
 VAR_1->tx_dropped += VAR_2->tx_dropped;
}
