
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_ring {scalar_t__ used; struct tcb* tcb_qtail; struct tcb* tcb_qhead; } ;
struct tcb {struct tcb* next; struct sk_buff* skb; } ;
struct sk_buff {scalar_t__ len; } ;
struct et131x_adapter {int tcb_ready_qlock; struct tx_ring tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct et131x_adapter*,struct tcb*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_4, struct et131x_adapter *VAR_5)
{
 int VAR_6;
 struct tcb *VAR_7;
 unsigned long VAR_8;
 struct tx_ring *VAR_9 = &VAR_5->tx_ring;


 if (VAR_4->len < VAR_2)
  return -VAR_0;

 FUNC_2(&VAR_5->tcb_ready_qlock, VAR_8);

 VAR_7 = VAR_9->tcb_qhead;

 if (VAR_7 == ((void*)0)) {
  FUNC_3(&VAR_5->tcb_ready_qlock, VAR_8);
  return -VAR_1;
 }

 VAR_9->tcb_qhead = VAR_7->next;

 if (VAR_9->tcb_qhead == ((void*)0))
  VAR_9->tcb_qtail = ((void*)0);

 FUNC_3(&VAR_5->tcb_ready_qlock, VAR_8);

 VAR_7->skb = VAR_4;
 VAR_7->next = ((void*)0);

 VAR_6 = FUNC_1(VAR_5, VAR_7);

 if (VAR_6 != 0) {
  FUNC_2(&VAR_5->tcb_ready_qlock, VAR_8);

  if (VAR_9->tcb_qtail)
   VAR_9->tcb_qtail->next = VAR_7;
  else

   VAR_9->tcb_qhead = VAR_7;

  VAR_9->tcb_qtail = VAR_7;
  FUNC_3(&VAR_5->tcb_ready_qlock, VAR_8);
  return VAR_6;
 }
 FUNC_0(VAR_9->used > VAR_3);
 return 0;
}
