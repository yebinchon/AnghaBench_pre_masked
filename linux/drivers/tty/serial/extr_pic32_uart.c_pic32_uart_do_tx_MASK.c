
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {unsigned int x_char; TYPE_2__ icount; TYPE_1__* state; } ;
struct pic32_sport {int dummy; } ;
struct circ_buf {unsigned int* buf; size_t tail; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct pic32_sport*,int ) ;
 int FUNC_1 (struct pic32_sport*,int ) ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct pic32_sport*,int ,unsigned int) ;
 struct pic32_sport* FUNC_4 (struct uart_port*) ;
 scalar_t__ FUNC_5 (struct circ_buf*) ;
 scalar_t__ FUNC_6 (struct circ_buf*) ;
 scalar_t__ FUNC_7 (struct uart_port*) ;
 int FUNC_8 (struct uart_port*) ;

__attribute__((used)) static void FUNC_9(struct uart_port *VAR_6)
{
 struct pic32_sport *VAR_7 = FUNC_4(VAR_6);
 struct circ_buf *VAR_8 = &VAR_6->state->xmit;
 unsigned int VAR_9 = VAR_3;

 if (VAR_6->x_char) {
  FUNC_3(VAR_7, VAR_2, VAR_6->x_char);
  VAR_6->icount.tx++;
  VAR_6->x_char = 0;
  return;
 }

 if (FUNC_7(VAR_6)) {
  FUNC_2(VAR_6);
  return;
 }

 if (FUNC_6(VAR_8))
  goto txq_empty;
 while (!(VAR_1 &
  FUNC_1(VAR_7, VAR_0))) {
  unsigned int VAR_10 = VAR_8->buf[VAR_8->tail];

  FUNC_3(VAR_7, VAR_2, VAR_10);

  VAR_8->tail = (VAR_8->tail + 1) & (VAR_4 - 1);
  VAR_6->icount.tx++;
  if (FUNC_6(VAR_8))
   break;
  if (--VAR_9 == 0)
   break;
 }

 if (FUNC_5(VAR_8) < VAR_5)
  FUNC_8(VAR_6);

 if (FUNC_6(VAR_8))
  goto txq_empty;

 return;

txq_empty:
 FUNC_0(VAR_7, 0);
}
