
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ath10k {int svc_rdy_work; int workqueue_aux; struct sk_buff* svc_rdy_skb; } ;


 int FUNC_0 (int ,int *) ;

void FUNC_1(struct ath10k *VAR_0, struct sk_buff *VAR_1)
{
 VAR_0->svc_rdy_skb = VAR_1;
 FUNC_0(VAR_0->workqueue_aux, &VAR_0->svc_rdy_work);
}
