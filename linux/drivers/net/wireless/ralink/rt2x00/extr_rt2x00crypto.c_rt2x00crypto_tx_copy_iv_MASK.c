
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txentry_desc {int iv_len; scalar_t__ iv_offset; } ;
struct skb_frame_desc {int iv; } ;
struct sk_buff {scalar_t__ data; } ;


 struct skb_frame_desc* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(struct sk_buff *VAR_0, struct txentry_desc *VAR_1)
{
 struct skb_frame_desc *VAR_2 = FUNC_0(VAR_0);

 if (FUNC_2(!VAR_1->iv_len))
  return;


 FUNC_1(VAR_2->iv, VAR_0->data + VAR_1->iv_offset, VAR_1->iv_len);
}
