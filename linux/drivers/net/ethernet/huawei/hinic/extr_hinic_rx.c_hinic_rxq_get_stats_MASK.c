
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_rxq_stats {int syncp; scalar_t__ other_errors; scalar_t__ csum_errors; scalar_t__ errors; int bytes; int pkts; } ;
struct hinic_rxq {struct hinic_rxq_stats rxq_stats; } ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct hinic_rxq *VAR_0, struct hinic_rxq_stats *VAR_1)
{
 struct hinic_rxq_stats *VAR_2 = &VAR_0->rxq_stats;
 unsigned int VAR_3;

 FUNC_2(&VAR_1->syncp);
 do {
  VAR_3 = FUNC_0(&VAR_2->syncp);
  VAR_1->pkts = VAR_2->pkts;
  VAR_1->bytes = VAR_2->bytes;
  VAR_1->errors = VAR_2->csum_errors +
    VAR_2->other_errors;
  VAR_1->csum_errors = VAR_2->csum_errors;
  VAR_1->other_errors = VAR_2->other_errors;
 } while (FUNC_1(&VAR_2->syncp, VAR_3));
 FUNC_3(&VAR_1->syncp);
}
