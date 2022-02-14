
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_data {int state; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {scalar_t__ cb; } ;
typedef enum skb_state { ____Placeholder_skb_state } skb_state ;


 int FUNC_0 (struct sk_buff_head*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_1(struct sk_buff_head *VAR_0,
         struct sk_buff *VAR_1, enum skb_state VAR_2)
{
 struct skb_data *VAR_3 = (struct skb_data *)VAR_1->cb;

 FUNC_0(VAR_0, VAR_1);
 VAR_3->state = VAR_2;
}
