
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_txq_stats {int syncp; scalar_t__ big_frags_pkts; scalar_t__ tx_dropped; scalar_t__ tx_wake; scalar_t__ tx_busy; scalar_t__ pkts; scalar_t__ bytes; } ;
struct hinic_txq {int dummy; } ;
struct hinic_dev {struct hinic_txq_stats tx_stats; } ;


 int FUNC_0 (struct hinic_txq*) ;
 int FUNC_1 (struct hinic_txq*,struct hinic_txq_stats*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct hinic_dev *VAR_0, struct hinic_txq *VAR_1)
{
 struct hinic_txq_stats *VAR_2 = &VAR_0->tx_stats;
 struct hinic_txq_stats VAR_3;

 FUNC_2(&VAR_3.syncp);

 FUNC_1(VAR_1, &VAR_3);

 FUNC_3(&VAR_2->syncp);
 VAR_2->bytes += VAR_3.bytes;
 VAR_2->pkts += VAR_3.pkts;
 VAR_2->tx_busy += VAR_3.tx_busy;
 VAR_2->tx_wake += VAR_3.tx_wake;
 VAR_2->tx_dropped += VAR_3.tx_dropped;
 VAR_2->big_frags_pkts += VAR_3.big_frags_pkts;
 FUNC_4(&VAR_2->syncp);

 FUNC_0(VAR_1);
}
