
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tx_ring {int used; struct tcb* send_head; int * send_tail; } ;
struct tcb {int index; struct tcb* next; } ;
struct et131x_adapter {int tcb_send_qlock; int netdev; TYPE_2__* regs; struct tx_ring tx_ring; } ;
struct TYPE_3__ {int new_service_complete; } ;
struct TYPE_4__ {TYPE_1__ txdma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct et131x_adapter*,struct tcb*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct et131x_adapter *VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5;
 struct tcb *VAR_6;
 u32 VAR_7;
 struct tx_ring *VAR_8 = &VAR_3->tx_ring;

 VAR_5 = FUNC_3(&VAR_3->regs->txdma.new_service_complete);
 VAR_7 = FUNC_0(VAR_5);




 FUNC_4(&VAR_3->tcb_send_qlock, VAR_4);

 VAR_6 = VAR_8->send_head;

 while (VAR_6 &&
        ((VAR_5 ^ VAR_6->index) & VAR_1) &&
        VAR_7 < FUNC_0(VAR_6->index)) {
  VAR_8->used--;
  VAR_8->send_head = VAR_6->next;
  if (VAR_6->next == ((void*)0))
   VAR_8->send_tail = ((void*)0);

  FUNC_5(&VAR_3->tcb_send_qlock, VAR_4);
  FUNC_1(VAR_3, VAR_6);
  FUNC_4(&VAR_3->tcb_send_qlock, VAR_4);


  VAR_6 = VAR_8->send_head;
 }
 while (VAR_6 &&
        !((VAR_5 ^ VAR_6->index) & VAR_1) &&
        VAR_7 > (VAR_6->index & VAR_0)) {
  VAR_8->used--;
  VAR_8->send_head = VAR_6->next;
  if (VAR_6->next == ((void*)0))
   VAR_8->send_tail = ((void*)0);

  FUNC_5(&VAR_3->tcb_send_qlock, VAR_4);
  FUNC_1(VAR_3, VAR_6);
  FUNC_4(&VAR_3->tcb_send_qlock, VAR_4);


  VAR_6 = VAR_8->send_head;
 }


 if (VAR_8->used <= VAR_2 / 3)
  FUNC_2(VAR_3->netdev);

 FUNC_5(&VAR_3->tcb_send_qlock, VAR_4);
}
