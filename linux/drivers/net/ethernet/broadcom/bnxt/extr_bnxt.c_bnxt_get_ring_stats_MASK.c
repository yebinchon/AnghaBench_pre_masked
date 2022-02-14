
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_stats64 {int tx_dropped; int multicast; int rx_missed_errors; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; } ;
struct ctx_hw_stats {int tx_drop_pkts; int rx_mcast_pkts; int rx_discard_pkts; int tx_bcast_bytes; int tx_mcast_bytes; int tx_ucast_bytes; int rx_bcast_bytes; int rx_mcast_bytes; int rx_ucast_bytes; int tx_bcast_pkts; int tx_mcast_pkts; int tx_ucast_pkts; int rx_bcast_pkts; int rx_ucast_pkts; } ;
struct bnxt_cp_ring_info {struct ctx_hw_stats* hw_stats; } ;
struct bnxt_napi {struct bnxt_cp_ring_info cp_ring; } ;
struct bnxt {int cp_nr_rings; struct bnxt_napi** bnapi; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct bnxt *VAR_0,
    struct rtnl_link_stats64 *VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0->cp_nr_rings; VAR_2++) {
  struct bnxt_napi *VAR_3 = VAR_0->bnapi[VAR_2];
  struct bnxt_cp_ring_info *VAR_4 = &VAR_3->cp_ring;
  struct ctx_hw_stats *VAR_5 = VAR_4->hw_stats;

  VAR_1->rx_packets += FUNC_0(VAR_5->rx_ucast_pkts);
  VAR_1->rx_packets += FUNC_0(VAR_5->rx_mcast_pkts);
  VAR_1->rx_packets += FUNC_0(VAR_5->rx_bcast_pkts);

  VAR_1->tx_packets += FUNC_0(VAR_5->tx_ucast_pkts);
  VAR_1->tx_packets += FUNC_0(VAR_5->tx_mcast_pkts);
  VAR_1->tx_packets += FUNC_0(VAR_5->tx_bcast_pkts);

  VAR_1->rx_bytes += FUNC_0(VAR_5->rx_ucast_bytes);
  VAR_1->rx_bytes += FUNC_0(VAR_5->rx_mcast_bytes);
  VAR_1->rx_bytes += FUNC_0(VAR_5->rx_bcast_bytes);

  VAR_1->tx_bytes += FUNC_0(VAR_5->tx_ucast_bytes);
  VAR_1->tx_bytes += FUNC_0(VAR_5->tx_mcast_bytes);
  VAR_1->tx_bytes += FUNC_0(VAR_5->tx_bcast_bytes);

  VAR_1->rx_missed_errors +=
   FUNC_0(VAR_5->rx_discard_pkts);

  VAR_1->multicast += FUNC_0(VAR_5->rx_mcast_pkts);

  VAR_1->tx_dropped += FUNC_0(VAR_5->tx_drop_pkts);
 }
}
