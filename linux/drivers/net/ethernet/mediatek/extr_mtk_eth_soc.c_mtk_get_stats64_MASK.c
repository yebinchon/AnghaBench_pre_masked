
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtnl_link_stats64 {int tx_dropped; int rx_dropped; int tx_errors; int tx_aborted_errors; int rx_errors; int rx_crc_errors; int rx_over_errors; scalar_t__ rx_length_errors; int collisions; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; } ;
struct TYPE_2__ {int tx_dropped; int rx_dropped; int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct mtk_mac {struct mtk_hw_stats* hw_stats; } ;
struct mtk_hw_stats {int tx_skip; int rx_checksum_errors; int rx_fcs_errors; int rx_overflow; scalar_t__ rx_long_errors; scalar_t__ rx_short_errors; int tx_collisions; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; int syncp; int stats_lock; } ;


 int FUNC_0 (struct mtk_mac*) ;
 struct mtk_mac* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 unsigned int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_0,
       struct rtnl_link_stats64 *VAR_1)
{
 struct mtk_mac *VAR_2 = FUNC_1(VAR_0);
 struct mtk_hw_stats *VAR_3 = VAR_2->hw_stats;
 unsigned int VAR_4;

 if (FUNC_3(VAR_0) && FUNC_2(VAR_0)) {
  if (FUNC_4(&VAR_3->stats_lock)) {
   FUNC_0(VAR_2);
   FUNC_5(&VAR_3->stats_lock);
  }
 }

 do {
  VAR_4 = FUNC_6(&VAR_3->syncp);
  VAR_1->rx_packets = VAR_3->rx_packets;
  VAR_1->tx_packets = VAR_3->tx_packets;
  VAR_1->rx_bytes = VAR_3->rx_bytes;
  VAR_1->tx_bytes = VAR_3->tx_bytes;
  VAR_1->collisions = VAR_3->tx_collisions;
  VAR_1->rx_length_errors = VAR_3->rx_short_errors +
   VAR_3->rx_long_errors;
  VAR_1->rx_over_errors = VAR_3->rx_overflow;
  VAR_1->rx_crc_errors = VAR_3->rx_fcs_errors;
  VAR_1->rx_errors = VAR_3->rx_checksum_errors;
  VAR_1->tx_aborted_errors = VAR_3->tx_skip;
 } while (FUNC_7(&VAR_3->syncp, VAR_4));

 VAR_1->tx_errors = VAR_0->stats.tx_errors;
 VAR_1->rx_dropped = VAR_0->stats.rx_dropped;
 VAR_1->tx_dropped = VAR_0->stats.tx_dropped;
}
