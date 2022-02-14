
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx; } ;
struct uart_port {TYPE_1__ icount; scalar_t__ x_char; TYPE_2__* state; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct TYPE_4__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (struct circ_buf*) ;
 scalar_t__ FUNC_4 (struct circ_buf*) ;
 scalar_t__ FUNC_5 (struct uart_port*) ;
 int FUNC_6 (struct uart_port*) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_5)
{
 struct circ_buf *VAR_6 = &VAR_5->state->xmit;

 while (!(FUNC_0(VAR_5, VAR_2) & VAR_3)) {
  if (VAR_5->x_char) {
   FUNC_2(VAR_5, VAR_5->x_char, VAR_1);
   VAR_5->x_char = 0;
   VAR_5->icount.tx++;
   continue;
  }

  if (FUNC_4(VAR_6) || FUNC_5(VAR_5))
   break;

  FUNC_2(VAR_5, VAR_6->buf[VAR_6->tail], VAR_1);
  VAR_6->tail = (VAR_6->tail + 1) % VAR_0;
  VAR_5->icount.tx++;
 }

 if (FUNC_3(VAR_6) < VAR_4)
  FUNC_6(VAR_5);

 if (FUNC_4(VAR_6))
  FUNC_1(VAR_5);
}
