
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct sk_buff {int dummy; } ;
struct hinic_wq {unsigned int wqebb_size; } ;
struct hinic_rq_wqe {int dummy; } ;
struct hinic_rq {struct sk_buff** saved_skb; struct hinic_wq* wq; } ;
struct hinic_hw_wqe {struct hinic_rq_wqe rq_wqe; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 size_t FUNC_1 (struct hinic_rq*,int ) ;
 struct hinic_hw_wqe* FUNC_2 (struct hinic_wq*,size_t) ;

struct hinic_rq_wqe *FUNC_3(struct hinic_rq *VAR_0,
         unsigned int VAR_1,
         struct sk_buff **VAR_2,
         u16 *VAR_3)
{
 struct hinic_wq *VAR_4 = VAR_0->wq;
 struct hinic_hw_wqe *VAR_5;
 unsigned int VAR_6;

 VAR_1 = FUNC_0(VAR_1, VAR_4->wqebb_size);
 VAR_6 = VAR_1 / VAR_4->wqebb_size;

 *VAR_3 = FUNC_1(VAR_0, *VAR_3 + VAR_6);

 *VAR_2 = VAR_0->saved_skb[*VAR_3];

 VAR_5 = FUNC_2(VAR_4, *VAR_3);

 return &VAR_5->rq_wqe;
}
