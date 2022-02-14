
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;
struct recv_priv {int free_recv_skb_queue; int rx_skb_queue; } ;
struct adapter {scalar_t__ bSurpriseRemoved; scalar_t__ bDriverStopped; struct recv_priv recvpriv; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct adapter*,struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;

void FUNC_6(void *VAR_0)
{
 struct sk_buff *VAR_1;
 struct adapter *VAR_2 = VAR_0;
 struct recv_priv *VAR_3 = &VAR_2->recvpriv;

 while (((void*)0) != (VAR_1 = FUNC_3(&VAR_3->rx_skb_queue))) {
  if ((VAR_2->bDriverStopped) || (VAR_2->bSurpriseRemoved)) {
   FUNC_0("recv_tasklet => bDriverStopped or bSurpriseRemoved\n");
   FUNC_1(VAR_1);
   break;
  }
  FUNC_2(VAR_2, VAR_1);
  FUNC_5(VAR_1);
  VAR_1->len = 0;
  FUNC_4(&VAR_3->free_recv_skb_queue, VAR_1);
 }
}
