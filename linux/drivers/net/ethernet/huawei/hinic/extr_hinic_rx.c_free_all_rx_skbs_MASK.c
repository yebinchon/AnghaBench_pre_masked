
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct hinic_sge {int dummy; } ;
struct hinic_rxq {struct hinic_rq* rq; } ;
struct hinic_rq {int * saved_skb; int wq; } ;
struct hinic_hw_wqe {int rq_wqe; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hinic_hw_wqe*) ;
 int FUNC_1 (int ,int ) ;
 struct hinic_hw_wqe* FUNC_2 (int ,int ,size_t*) ;
 int FUNC_3 (struct hinic_rq*,int *,size_t,struct hinic_sge*) ;
 int FUNC_4 (struct hinic_sge*) ;
 int FUNC_5 (struct hinic_rxq*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct hinic_rxq *VAR_1)
{
 struct hinic_rq *VAR_2 = VAR_1->rq;
 struct hinic_hw_wqe *VAR_3;
 struct hinic_sge VAR_4;
 u16 VAR_5;

 while ((VAR_3 = FUNC_2(VAR_2->wq, VAR_0, &VAR_5))) {
  if (FUNC_0(VAR_3))
   break;

  FUNC_3(VAR_2, &VAR_3->rq_wqe, VAR_5, &VAR_4);

  FUNC_1(VAR_2->wq, VAR_0);

  FUNC_5(VAR_1, VAR_2->saved_skb[VAR_5], FUNC_4(&VAR_4));
 }
}
