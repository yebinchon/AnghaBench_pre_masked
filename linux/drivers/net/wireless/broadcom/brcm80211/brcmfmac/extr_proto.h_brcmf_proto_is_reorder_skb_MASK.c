
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ cb; } ;
struct brcmf_skb_reorder_data {int reorder; } ;



__attribute__((used)) static inline bool FUNC_0(struct sk_buff *VAR_0)
{
 struct brcmf_skb_reorder_data *VAR_1;

 VAR_1 = (struct brcmf_skb_reorder_data *)VAR_0->cb;
 return !!VAR_1->reorder;
}
