
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_4__ {int tx; } ;
struct uart_port {int membase; TYPE_2__ icount; scalar_t__ x_char; TYPE_1__* state; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_3 (unsigned int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct circ_buf*) ;
 scalar_t__ FUNC_6 (struct circ_buf*) ;
 scalar_t__ FUNC_7 (struct uart_port*) ;
 int FUNC_8 (struct uart_port*) ;
 int FUNC_9 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_10(struct uart_port *VAR_3)
{
 struct circ_buf *VAR_4 = &VAR_3->state->xmit;
 unsigned int VAR_5;

 if (VAR_3->x_char) {
  FUNC_9((u32)VAR_3->x_char, FUNC_1(VAR_3->membase));
  VAR_3->icount.tx++;
  VAR_3->x_char = 0;
  return;
 }

 if (FUNC_6(VAR_4) || FUNC_7(VAR_3))
  goto exit_tx;


 while (FUNC_3(FUNC_4(
  FUNC_2(VAR_3->membase))) < 64) {
  FUNC_9((u32) VAR_4->buf[VAR_4->tail],
         FUNC_1(VAR_3->membase));
  VAR_4->tail = (VAR_4->tail + 1) & (VAR_1 - 1);
  VAR_3->icount.tx++;
  if (FUNC_6(VAR_4))
   break;
 }

 if (FUNC_5(VAR_4) < VAR_2)
  FUNC_8(VAR_3);

exit_tx:
 if (FUNC_6(VAR_4)) {
  VAR_5 = FUNC_4(FUNC_0(VAR_3->membase));
  VAR_5 &= ~VAR_0;
  FUNC_9(VAR_5, FUNC_0(VAR_3->membase));
 }
}
