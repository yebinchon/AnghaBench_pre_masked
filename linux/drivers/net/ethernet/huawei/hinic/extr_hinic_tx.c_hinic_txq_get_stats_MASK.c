
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_txq_stats {int syncp; int big_frags_pkts; int tx_dropped; int tx_wake; int tx_busy; int bytes; int pkts; } ;
struct hinic_txq {struct hinic_txq_stats txq_stats; } ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct hinic_txq *VAR_0, struct hinic_txq_stats *VAR_1)
{
 struct hinic_txq_stats *VAR_2 = &VAR_0->txq_stats;
 unsigned int VAR_3;

 FUNC_2(&VAR_1->syncp);
 do {
  VAR_3 = FUNC_0(&VAR_2->syncp);
  VAR_1->pkts = VAR_2->pkts;
  VAR_1->bytes = VAR_2->bytes;
  VAR_1->tx_busy = VAR_2->tx_busy;
  VAR_1->tx_wake = VAR_2->tx_wake;
  VAR_1->tx_dropped = VAR_2->tx_dropped;
  VAR_1->big_frags_pkts = VAR_2->big_frags_pkts;
 } while (FUNC_1(&VAR_2->syncp, VAR_3));
 FUNC_3(&VAR_1->syncp);
}
