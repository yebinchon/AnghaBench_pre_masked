
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_txq_stats {int syncp; } ;
struct hinic_txq {struct hinic_txq_stats txq_stats; } ;


 int FUNC_0 (struct hinic_txq*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct hinic_txq *VAR_0)
{
 struct hinic_txq_stats *VAR_1 = &VAR_0->txq_stats;

 FUNC_1(&VAR_1->syncp);
 FUNC_0(VAR_0);
}
