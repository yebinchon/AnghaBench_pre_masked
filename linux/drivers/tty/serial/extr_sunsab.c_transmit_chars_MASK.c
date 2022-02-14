
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int isr1; } ;
union sab82532_irq_status {TYPE_2__ sreg; } ;
struct TYPE_13__ {int tx; } ;
struct TYPE_16__ {int fifosize; TYPE_4__ icount; TYPE_1__* state; } ;
struct uart_sunsab_port {int interrupt_mask1; TYPE_7__ port; TYPE_6__* regs; int irqflags; } ;
struct circ_buf {int* buf; size_t tail; } ;
struct TYPE_14__ {int cmdr; int * xfifo; int imr1; } ;
struct TYPE_12__ {int star; } ;
struct TYPE_15__ {TYPE_5__ w; TYPE_3__ r; } ;
struct TYPE_10__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct uart_sunsab_port*) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (struct uart_sunsab_port*) ;
 scalar_t__ FUNC_6 (struct circ_buf*) ;
 scalar_t__ FUNC_7 (struct circ_buf*) ;
 scalar_t__ FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (int,int *) ;

__attribute__((used)) static void FUNC_11(struct uart_sunsab_port *VAR_10,
      union sab82532_irq_status *VAR_11)
{
 struct circ_buf *VAR_12 = &VAR_10->port.state->xmit;
 int VAR_13;

 if (VAR_11->sreg.isr1 & VAR_4) {
  VAR_10->interrupt_mask1 |= VAR_2;
  FUNC_10(VAR_10->interrupt_mask1, &VAR_10->regs->w.imr1);
  FUNC_2(VAR_0, &VAR_10->irqflags);
 }






 if (!(FUNC_1(&VAR_10->regs->r.star) & VAR_6))
  return;

 FUNC_2(VAR_7, &VAR_10->irqflags);
 FUNC_5(VAR_10);

 if (FUNC_7(VAR_12) || FUNC_8(&VAR_10->port)) {
  VAR_10->interrupt_mask1 |= VAR_3;
  FUNC_10(VAR_10->interrupt_mask1, &VAR_10->regs->w.imr1);
  return;
 }

 VAR_10->interrupt_mask1 &= ~(VAR_2|VAR_3);
 FUNC_10(VAR_10->interrupt_mask1, &VAR_10->regs->w.imr1);
 FUNC_0(VAR_0, &VAR_10->irqflags);


 FUNC_0(VAR_7, &VAR_10->irqflags);
 for (VAR_13 = 0; VAR_13 < VAR_10->port.fifosize; VAR_13++) {
  FUNC_10(VAR_12->buf[VAR_12->tail],
         &VAR_10->regs->w.xfifo[VAR_13]);
  VAR_12->tail = (VAR_12->tail + 1) & (VAR_8 - 1);
  VAR_10->port.icount.tx++;
  if (FUNC_7(VAR_12))
   break;
 }


 FUNC_3(VAR_10);
 FUNC_10(VAR_1, &VAR_10->regs->w.cmdr);

 if (FUNC_6(VAR_12) < VAR_9)
  FUNC_9(&VAR_10->port);

 if (FUNC_7(VAR_12))
  FUNC_4(&VAR_10->port);
}
