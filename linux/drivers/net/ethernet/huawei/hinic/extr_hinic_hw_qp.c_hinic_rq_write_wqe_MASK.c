
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct sk_buff {int dummy; } ;
struct hinic_rq_wqe {int dummy; } ;
struct hinic_rq {int wq; struct sk_buff** saved_skb; } ;
struct hinic_hw_wqe {int dummy; } ;


 int FUNC_0 (struct hinic_rq_wqe*,int) ;
 int FUNC_1 (int ,struct hinic_hw_wqe*,int) ;

void FUNC_2(struct hinic_rq *VAR_0, u16 VAR_1,
   struct hinic_rq_wqe *VAR_2, struct sk_buff *VAR_3)
{
 struct hinic_hw_wqe *VAR_4 = (struct hinic_hw_wqe *)VAR_2;

 VAR_0->saved_skb[VAR_1] = VAR_3;


 FUNC_0(VAR_2, sizeof(*VAR_2));

 FUNC_1(VAR_0->wq, VAR_4, sizeof(*VAR_2));
}
