
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx; } ;
struct uart_port {scalar_t__ membase; TYPE_1__ icount; TYPE_2__* state; } ;
struct circ_buf {unsigned int* buf; size_t tail; } ;
struct TYPE_4__ {struct circ_buf xmit; } ;


 unsigned int FUNC_0 (struct uart_port*) ;
 scalar_t__ FUNC_1 (struct uart_port*) ;
 scalar_t__ FUNC_2 (struct uart_port*) ;
 scalar_t__ FUNC_3 (struct uart_port*) ;
 int VAR_0 ;
 unsigned int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct circ_buf*) ;
 int FUNC_6 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_1)
{
 unsigned int VAR_2;
 struct circ_buf *VAR_3 = &VAR_1->state->xmit;

 if (FUNC_1(VAR_1) && !FUNC_5(VAR_3)) {
  FUNC_6(VAR_3->buf[VAR_3->tail], VAR_1->membase + FUNC_3(VAR_1));
  VAR_3->tail = (VAR_3->tail + 1) & (VAR_0 - 1);
  VAR_1->icount.tx++;
 }

 VAR_2 = FUNC_4(VAR_1->membase + FUNC_2(VAR_1));
 VAR_2 |= FUNC_0(VAR_1);
 FUNC_6(VAR_2, VAR_1->membase + FUNC_2(VAR_1));
}
