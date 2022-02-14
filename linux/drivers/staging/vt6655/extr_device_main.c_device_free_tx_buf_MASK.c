
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_tx_desc {struct vnt_td_info* td_info; } ;
struct vnt_td_info {scalar_t__ flags; struct sk_buff* skb; } ;
struct vnt_private {int hw; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (int ,struct sk_buff*) ;

__attribute__((used)) static void FUNC_1(struct vnt_private *VAR_0,
          struct vnt_tx_desc *VAR_1)
{
 struct vnt_td_info *VAR_2 = VAR_1->td_info;
 struct sk_buff *VAR_3 = VAR_2->skb;

 if (VAR_3)
  FUNC_0(VAR_0->hw, VAR_3);

 VAR_2->skb = ((void*)0);
 VAR_2->flags = 0;
}
