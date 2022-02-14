
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ath10k_skb_cb {size_t eid; } ;
struct ath10k_htc_ep {int dummy; } ;
struct ath10k_htc {struct ath10k_htc_ep* endpoint; } ;
struct ath10k {struct ath10k_htc htc; } ;


 struct ath10k_skb_cb* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ath10k_htc_ep*,struct sk_buff*) ;

void FUNC_3(struct ath10k *VAR_0, struct sk_buff *VAR_1)
{
 struct ath10k_htc *VAR_2 = &VAR_0->htc;
 struct ath10k_skb_cb *VAR_3;
 struct ath10k_htc_ep *VAR_4;

 if (FUNC_1(!VAR_1))
  return;

 VAR_3 = FUNC_0(VAR_1);
 VAR_4 = &VAR_2->endpoint[VAR_3->eid];

 FUNC_2(VAR_4, VAR_1);

}
