
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_txq_stats {int syncp; scalar_t__ big_frags_pkts; scalar_t__ tx_dropped; scalar_t__ tx_wake; scalar_t__ tx_busy; scalar_t__ bytes; scalar_t__ pkts; } ;
struct hinic_txq {struct hinic_txq_stats txq_stats; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct hinic_txq *VAR_0)
{
 struct hinic_txq_stats *VAR_1 = &VAR_0->txq_stats;

 FUNC_0(&VAR_1->syncp);
 VAR_1->pkts = 0;
 VAR_1->bytes = 0;
 VAR_1->tx_busy = 0;
 VAR_1->tx_wake = 0;
 VAR_1->tx_dropped = 0;
 VAR_1->big_frags_pkts = 0;
 FUNC_1(&VAR_1->syncp);
}
