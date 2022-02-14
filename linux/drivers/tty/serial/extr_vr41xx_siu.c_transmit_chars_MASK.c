
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {TYPE_2__ icount; scalar_t__ x_char; TYPE_1__* state; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct circ_buf*) ;
 scalar_t__ FUNC_3 (struct circ_buf*) ;
 scalar_t__ FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct uart_port*) ;

__attribute__((used)) static inline void FUNC_6(struct uart_port *VAR_4)
{
 struct circ_buf *VAR_5;
 int VAR_6 = VAR_0;

 VAR_5 = &VAR_4->state->xmit;

 if (VAR_4->x_char) {
  FUNC_1(VAR_4, VAR_1, VAR_4->x_char);
  VAR_4->icount.tx++;
  VAR_4->x_char = 0;
  return;
 }

 if (FUNC_3(VAR_5) || FUNC_4(VAR_4)) {
  FUNC_0(VAR_4);
  return;
 }

 do {
  FUNC_1(VAR_4, VAR_1, VAR_5->buf[VAR_5->tail]);
  VAR_5->tail = (VAR_5->tail + 1) & (VAR_2 - 1);
  VAR_4->icount.tx++;
  if (FUNC_3(VAR_5))
   break;
 } while (VAR_6-- > 0);

 if (FUNC_2(VAR_5) < VAR_3)
  FUNC_5(VAR_4);

 if (FUNC_3(VAR_5))
  FUNC_0(VAR_4);
}
