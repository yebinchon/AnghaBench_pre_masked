
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tx_ring {scalar_t__ used; struct tcb* send_head; int * send_tail; } ;
struct tcb {struct tcb* next; } ;
struct et131x_adapter {int tcb_send_qlock; struct tx_ring tx_ring; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct et131x_adapter*,struct tcb*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct et131x_adapter *VAR_1)
{
 struct tcb *VAR_2;
 unsigned long VAR_3;
 u32 VAR_4 = 0;
 struct tx_ring *VAR_5 = &VAR_1->tx_ring;


 FUNC_2(&VAR_1->tcb_send_qlock, VAR_3);

 VAR_2 = VAR_5->send_head;

 while (VAR_2 != ((void*)0) && VAR_4 < VAR_0) {
  struct tcb *VAR_6 = VAR_2->next;

  VAR_5->send_head = VAR_6;

  if (VAR_6 == ((void*)0))
   VAR_5->send_tail = ((void*)0);

  VAR_5->used--;

  FUNC_3(&VAR_1->tcb_send_qlock, VAR_3);

  VAR_4++;
  FUNC_1(VAR_1, VAR_2);

  FUNC_2(&VAR_1->tcb_send_qlock, VAR_3);

  VAR_2 = VAR_5->send_head;
 }

 FUNC_0(VAR_4 == VAR_0);

 FUNC_3(&VAR_1->tcb_send_qlock, VAR_3);

 VAR_5->used = 0;
}
