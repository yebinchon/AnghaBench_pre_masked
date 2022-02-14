
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ cb; } ;
struct ath10k_skb_rxcb {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline struct ath10k_skb_rxcb *FUNC_1(struct sk_buff *VAR_0)
{
 FUNC_0(sizeof(struct ath10k_skb_rxcb) > sizeof(VAR_0->cb));
 return (struct ath10k_skb_rxcb *)VAR_0->cb;
}
