
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {unsigned int x_char; unsigned int fifosize; TYPE_2__ icount; TYPE_1__* state; } ;
struct circ_buf {unsigned int* buf; size_t tail; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*,unsigned int,int ) ;
 scalar_t__ FUNC_3 (struct circ_buf*) ;
 scalar_t__ FUNC_4 (struct circ_buf*) ;
 scalar_t__ FUNC_5 (struct uart_port*) ;
 int FUNC_6 (struct uart_port*) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_8)
{
 struct circ_buf *VAR_9;
 unsigned int VAR_10, VAR_11;

 if (VAR_8->x_char) {
  FUNC_2(VAR_8, VAR_8->x_char, VAR_0);
  VAR_8->icount.tx++;
  VAR_8->x_char = 0;
  return;
 }

 if (FUNC_5(VAR_8)) {
  FUNC_1(VAR_8);
  return;
 }

 VAR_9 = &VAR_8->state->xmit;
 if (FUNC_4(VAR_9))
  goto txq_empty;

 VAR_10 = FUNC_0(VAR_8, VAR_2);
 VAR_10 = (VAR_10 & VAR_3) >> VAR_4;
 VAR_11 = VAR_8->fifosize - VAR_10;

 while (VAR_11--) {
  unsigned int VAR_12;

  VAR_12 = VAR_9->buf[VAR_9->tail];
  FUNC_2(VAR_8, VAR_12, VAR_0);
  VAR_9->tail = (VAR_9->tail + 1) & (VAR_6 - 1);
  VAR_8->icount.tx++;
  if (FUNC_4(VAR_9))
   break;
 }

 if (FUNC_3(VAR_9) < VAR_7)
  FUNC_6(VAR_8);

 if (FUNC_4(VAR_9))
  goto txq_empty;
 return;

txq_empty:

 VAR_10 = FUNC_0(VAR_8, VAR_1);
 VAR_10 &= ~VAR_5;
 FUNC_2(VAR_8, VAR_10, VAR_1);
 return;
}
