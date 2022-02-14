
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aggr_info {struct aggr_info* aggr_conn; int rx_amsdu_freeq; } ;


 int FUNC_0 (struct aggr_info*) ;
 int FUNC_1 (struct aggr_info*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct aggr_info *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0->aggr_conn);
 FUNC_2(&VAR_0->rx_amsdu_freeq);
 FUNC_1(VAR_0->aggr_conn);
 FUNC_1(VAR_0);
}
