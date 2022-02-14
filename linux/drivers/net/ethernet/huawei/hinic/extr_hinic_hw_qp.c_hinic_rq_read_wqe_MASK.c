
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t u16 ;
struct sk_buff {int dummy; } ;
struct hinic_rq_wqe {int dummy; } ;
struct hinic_rq_cqe {int status; } ;
struct hinic_rq {struct sk_buff** saved_skb; struct hinic_rq_cqe** cqe; int wq; } ;
struct hinic_hw_wqe {struct hinic_rq_wqe rq_wqe; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct hinic_hw_wqe*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 struct hinic_hw_wqe* FUNC_3 (int ,unsigned int,size_t*) ;

struct hinic_rq_wqe *FUNC_4(struct hinic_rq *VAR_1,
           unsigned int VAR_2,
           struct sk_buff **VAR_3, u16 *VAR_4)
{
 struct hinic_hw_wqe *VAR_5;
 struct hinic_rq_cqe *VAR_6;
 int VAR_7;
 u32 VAR_8;

 VAR_5 = FUNC_3(VAR_1->wq, VAR_2, VAR_4);
 if (FUNC_1(VAR_5))
  return ((void*)0);

 VAR_6 = VAR_1->cqe[*VAR_4];

 VAR_8 = FUNC_2(VAR_6->status);

 VAR_7 = FUNC_0(VAR_8, VAR_0);
 if (!VAR_7)
  return ((void*)0);

 *VAR_3 = VAR_1->saved_skb[*VAR_4];

 return &VAR_5->rq_wqe;
}
