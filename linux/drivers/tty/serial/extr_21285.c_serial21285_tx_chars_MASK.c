
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {TYPE_2__ icount; scalar_t__ x_char; TYPE_1__* state; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 scalar_t__* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct uart_port*) ;
 scalar_t__ FUNC_1 (struct circ_buf*) ;
 scalar_t__ FUNC_2 (struct circ_buf*) ;
 scalar_t__ FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct uart_port*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct uart_port *VAR_7 = VAR_6;
 struct circ_buf *VAR_8 = &VAR_7->state->xmit;
 int VAR_9 = 256;

 if (VAR_7->x_char) {
  *VAR_0 = VAR_7->x_char;
  VAR_7->icount.tx++;
  VAR_7->x_char = 0;
  goto out;
 }
 if (FUNC_2(VAR_8) || FUNC_3(VAR_7)) {
  FUNC_0(VAR_7);
  goto out;
 }

 do {
  *VAR_0 = VAR_8->buf[VAR_8->tail];
  VAR_8->tail = (VAR_8->tail + 1) & (VAR_3 - 1);
  VAR_7->icount.tx++;
  if (FUNC_2(VAR_8))
   break;
 } while (--VAR_9 > 0 && !(*VAR_1 & 0x20));

 if (FUNC_1(VAR_8) < VAR_4)
  FUNC_4(VAR_7);

 if (FUNC_2(VAR_8))
  FUNC_0(VAR_7);

 out:
 return VAR_2;
}
