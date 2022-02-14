
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_rxq_stats {int syncp; scalar_t__ other_errors; scalar_t__ csum_errors; scalar_t__ errors; scalar_t__ pkts; scalar_t__ bytes; } ;
struct hinic_rxq {int dummy; } ;
struct hinic_dev {struct hinic_rxq_stats rx_stats; } ;


 int FUNC_0 (struct hinic_rxq*) ;
 int FUNC_1 (struct hinic_rxq*,struct hinic_rxq_stats*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct hinic_dev *VAR_0, struct hinic_rxq *VAR_1)
{
 struct hinic_rxq_stats *VAR_2 = &VAR_0->rx_stats;
 struct hinic_rxq_stats VAR_3;

 FUNC_2(&VAR_3.syncp);

 FUNC_1(VAR_1, &VAR_3);

 FUNC_3(&VAR_2->syncp);
 VAR_2->bytes += VAR_3.bytes;
 VAR_2->pkts += VAR_3.pkts;
 VAR_2->errors += VAR_3.errors;
 VAR_2->csum_errors += VAR_3.csum_errors;
 VAR_2->other_errors += VAR_3.other_errors;
 FUNC_4(&VAR_2->syncp);

 FUNC_0(VAR_1);
}
