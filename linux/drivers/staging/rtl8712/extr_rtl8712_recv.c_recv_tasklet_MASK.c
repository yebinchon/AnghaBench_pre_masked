
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;
struct recv_priv {int free_recv_skb_queue; int rx_skb_queue; } ;
struct _adapter {struct recv_priv recvpriv; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct _adapter*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(void *VAR_0)
{
 struct sk_buff *VAR_1;
 struct _adapter *VAR_2 = VAR_0;
 struct recv_priv *VAR_3 = &VAR_2->recvpriv;

 while (((void*)0) != (VAR_1 = FUNC_3(&VAR_3->rx_skb_queue))) {
  FUNC_1(VAR_2, VAR_1);
  FUNC_5(VAR_1);
  VAR_1->len = 0;
  if (!FUNC_2(VAR_1))
   FUNC_4(&VAR_3->free_recv_skb_queue, VAR_1);
  else
   FUNC_0(VAR_1);
 }
}
