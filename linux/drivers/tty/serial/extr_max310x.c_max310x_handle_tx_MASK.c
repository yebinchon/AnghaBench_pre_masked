
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tx; } ;
struct uart_port {unsigned int fifosize; TYPE_2__ icount; scalar_t__ x_char; TYPE_1__* state; } ;
struct circ_buf {unsigned int tail; scalar_t__ buf; int head; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 unsigned int FUNC_0 (int ,unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (struct uart_port*,scalar_t__,unsigned int) ;
 unsigned int FUNC_3 (struct uart_port*,int ) ;
 int FUNC_4 (struct uart_port*,int ,scalar_t__) ;
 unsigned int FUNC_5 (struct circ_buf*) ;
 scalar_t__ FUNC_6 (struct circ_buf*) ;
 scalar_t__ FUNC_7 (struct uart_port*) ;
 int FUNC_8 (struct uart_port*) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct uart_port *VAR_4)
{
 struct circ_buf *VAR_5 = &VAR_4->state->xmit;
 unsigned int VAR_6, VAR_7, VAR_8;

 if (FUNC_9(VAR_4->x_char)) {
  FUNC_4(VAR_4, VAR_0, VAR_4->x_char);
  VAR_4->icount.tx++;
  VAR_4->x_char = 0;
  return;
 }

 if (FUNC_6(VAR_5) || FUNC_7(VAR_4))
  return;


 VAR_7 = FUNC_5(VAR_5);
 VAR_8 = FUNC_0(VAR_5->head, VAR_5->tail, VAR_2);
 if (FUNC_1(VAR_7)) {

  VAR_6 = FUNC_3(VAR_4, VAR_1);
  VAR_6 = VAR_4->fifosize - VAR_6;
  VAR_7 = (VAR_7 > VAR_6) ? VAR_6 : VAR_7;

  if (VAR_8 < VAR_7) {


   FUNC_2(VAR_4, VAR_5->buf + VAR_5->tail, VAR_8);
   FUNC_2(VAR_4, VAR_5->buf, VAR_7 - VAR_8);
  } else {
   FUNC_2(VAR_4, VAR_5->buf + VAR_5->tail, VAR_7);
  }


  VAR_4->icount.tx += VAR_7;
  VAR_5->tail = (VAR_5->tail + VAR_7) & (VAR_2 - 1);
 }

 if (FUNC_5(VAR_5) < VAR_3)
  FUNC_8(VAR_4);
}
