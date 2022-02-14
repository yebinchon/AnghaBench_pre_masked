
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {unsigned int x_char; TYPE_2__ icount; TYPE_1__* state; } ;
struct circ_buf {unsigned int* buf; size_t tail; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*,unsigned int,int ) ;
 scalar_t__ FUNC_4 (struct circ_buf*) ;
 scalar_t__ FUNC_5 (struct circ_buf*) ;
 scalar_t__ FUNC_6 (struct uart_port*) ;
 int FUNC_7 (struct uart_port*) ;

__attribute__((used)) static void FUNC_8(struct uart_port *VAR_5)
{
 struct circ_buf *VAR_6 = &VAR_5->state->xmit;
 unsigned int VAR_7;

 if (FUNC_6(VAR_5))
  return;

 if (VAR_5->x_char) {
  while (!(FUNC_1(VAR_5, VAR_0) & VAR_1))
   FUNC_0();
  FUNC_3(VAR_5, VAR_5->x_char, VAR_2);
  VAR_5->icount.tx++;
  VAR_5->x_char = 0;
 }

 while (!(FUNC_1(VAR_5, VAR_0) & VAR_1)) {
  if (FUNC_5(VAR_6))
   break;

  VAR_7 = VAR_6->buf[VAR_6->tail];
  FUNC_3(VAR_5, VAR_7, VAR_2);
  VAR_6->tail = (VAR_6->tail + 1) & (VAR_3 - 1);
  VAR_5->icount.tx++;
 }

 if (FUNC_4(VAR_6) < VAR_4)
  FUNC_7(VAR_5);

 if (FUNC_5(VAR_6))
  FUNC_2(VAR_5);
}
