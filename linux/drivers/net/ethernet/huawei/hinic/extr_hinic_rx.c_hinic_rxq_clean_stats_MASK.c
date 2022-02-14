
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_rxq_stats {int syncp; scalar_t__ other_errors; scalar_t__ csum_errors; scalar_t__ errors; scalar_t__ bytes; scalar_t__ pkts; } ;
struct hinic_rxq {struct hinic_rxq_stats rxq_stats; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct hinic_rxq *VAR_0)
{
 struct hinic_rxq_stats *VAR_1 = &VAR_0->rxq_stats;

 FUNC_0(&VAR_1->syncp);
 VAR_1->pkts = 0;
 VAR_1->bytes = 0;
 VAR_1->errors = 0;
 VAR_1->csum_errors = 0;
 VAR_1->other_errors = 0;
 FUNC_1(&VAR_1->syncp);
}
