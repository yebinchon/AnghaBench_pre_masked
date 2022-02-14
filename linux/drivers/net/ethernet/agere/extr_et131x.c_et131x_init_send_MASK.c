
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_ring {int * send_tail; int * send_head; struct tcb* tcb_qtail; struct tcb* tcb_qhead; struct tcb* tcb_ring; } ;
struct tcb {struct tcb* next; } ;
struct et131x_adapter {struct tx_ring tx_ring; } ;


 int VAR_0 ;
 int FUNC_0 (struct tcb*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct et131x_adapter *VAR_1)
{
 int VAR_2;
 struct tx_ring *VAR_3 = &VAR_1->tx_ring;
 struct tcb *VAR_4 = VAR_3->tcb_ring;

 VAR_3->tcb_qhead = VAR_4;

 FUNC_0(VAR_4, 0, sizeof(struct tcb) * VAR_0);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_4->next = VAR_4 + 1;
  VAR_4++;
 }

 VAR_4--;
 VAR_3->tcb_qtail = VAR_4;
 VAR_4->next = ((void*)0);

 VAR_3->send_head = ((void*)0);
 VAR_3->send_tail = ((void*)0);
}
