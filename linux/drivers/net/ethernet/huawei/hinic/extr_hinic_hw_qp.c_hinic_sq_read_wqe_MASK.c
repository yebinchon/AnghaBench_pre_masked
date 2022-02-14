
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct sk_buff {int dummy; } ;
struct hinic_sq_wqe {int dummy; } ;
struct hinic_sq {struct sk_buff** saved_skb; int wq; } ;
struct hinic_hw_wqe {struct hinic_sq_wqe sq_wqe; } ;


 struct hinic_hw_wqe* FUNC_0 (int ,unsigned int,size_t*) ;

struct hinic_sq_wqe *FUNC_1(struct hinic_sq *VAR_0,
           struct sk_buff **VAR_1,
           unsigned int VAR_2, u16 *VAR_3)
{
 struct hinic_hw_wqe *VAR_4;

 VAR_4 = FUNC_0(VAR_0->wq, VAR_2, VAR_3);
 *VAR_1 = VAR_0->saved_skb[*VAR_3];

 return &VAR_4->sq_wqe;
}
