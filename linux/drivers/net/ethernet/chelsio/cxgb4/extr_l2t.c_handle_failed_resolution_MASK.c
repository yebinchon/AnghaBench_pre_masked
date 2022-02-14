
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct l2t_skb_cb {int handle; int (* arp_err_handler ) (int ,struct sk_buff*) ;} ;
struct l2t_entry {int lock; int arpq; } ;
struct adapter {int dummy; } ;


 struct l2t_skb_cb* FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct sk_buff*) ;
 int FUNC_5 (struct adapter*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct adapter *VAR_0, struct l2t_entry *VAR_1)
{
 struct sk_buff *VAR_2;

 while ((VAR_2 = FUNC_1(&VAR_1->arpq)) != ((void*)0)) {
  const struct l2t_skb_cb *VAR_3 = FUNC_0(VAR_2);

  FUNC_3(&VAR_1->lock);
  if (VAR_3->arp_err_handler)
   VAR_3->arp_err_handler(VAR_3->handle, VAR_2);
  else
   FUNC_5(VAR_0, VAR_2);
  FUNC_2(&VAR_1->lock);
 }
}
