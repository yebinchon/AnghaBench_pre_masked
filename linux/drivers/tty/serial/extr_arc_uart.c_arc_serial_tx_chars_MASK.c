
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {unsigned char x_char; TYPE_2__ icount; TYPE_1__* state; } ;
struct circ_buf {unsigned char* buf; size_t tail; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*,unsigned char) ;
 int FUNC_2 (struct uart_port*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct circ_buf*) ;
 int FUNC_5 (struct circ_buf*) ;
 int FUNC_6 (struct uart_port*) ;
 scalar_t__ FUNC_7 (unsigned char) ;

__attribute__((used)) static void FUNC_8(struct uart_port *VAR_3)
{
 struct circ_buf *VAR_4 = &VAR_3->state->xmit;
 int VAR_5 = 0;
 unsigned char VAR_6;

 if (FUNC_7(VAR_3->x_char)) {
  FUNC_1(VAR_3, VAR_3->x_char);
  VAR_3->icount.tx++;
  VAR_3->x_char = 0;
  VAR_5 = 1;
 } else if (!FUNC_5(VAR_4)) {
  VAR_6 = VAR_4->buf[VAR_4->tail];
  VAR_4->tail = (VAR_4->tail + 1) & (VAR_1 - 1);
  VAR_3->icount.tx++;
  while (!(FUNC_0(VAR_3) & VAR_0))
   FUNC_3();
  FUNC_1(VAR_3, VAR_6);
  VAR_5 = 1;
 }





 if (FUNC_4(VAR_4) < VAR_2)
  FUNC_6(VAR_3);

 if (VAR_5)
  FUNC_2(VAR_3);
}
