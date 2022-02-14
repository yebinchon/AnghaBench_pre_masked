
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tx; } ;
struct uart_port {TYPE_2__ icount; int dev; scalar_t__ x_char; TYPE_1__* state; } ;
struct sc16is7xx_port {int * buf; } ;
struct circ_buf {size_t tail; int * buf; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 struct sc16is7xx_port* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (struct uart_port*,unsigned int) ;
 unsigned int FUNC_4 (struct uart_port*,int ) ;
 int FUNC_5 (struct uart_port*,int ,scalar_t__) ;
 unsigned int FUNC_6 (struct circ_buf*) ;
 scalar_t__ FUNC_7 (struct circ_buf*) ;
 scalar_t__ FUNC_8 (struct uart_port*) ;
 int FUNC_9 (struct uart_port*) ;
 scalar_t__ FUNC_10 (scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct uart_port *VAR_5)
{
 struct sc16is7xx_port *VAR_6 = FUNC_1(VAR_5->dev);
 struct circ_buf *VAR_7 = &VAR_5->state->xmit;
 unsigned int VAR_8, VAR_9, VAR_10;

 if (FUNC_10(VAR_5->x_char)) {
  FUNC_5(VAR_5, VAR_1, VAR_5->x_char);
  VAR_5->icount.tx++;
  VAR_5->x_char = 0;
  return;
 }

 if (FUNC_7(VAR_7) || FUNC_8(VAR_5))
  return;


 VAR_9 = FUNC_6(VAR_7);
 if (FUNC_2(VAR_9)) {

  VAR_8 = FUNC_4(VAR_5, VAR_2);
  if (VAR_8 > VAR_0) {
   FUNC_0(VAR_5->dev,
    "chip reports %d free bytes in TX fifo, but it only has %d",
    VAR_8, VAR_0);
   VAR_8 = 0;
  }
  VAR_9 = (VAR_9 > VAR_8) ? VAR_8 : VAR_9;


  VAR_5->icount.tx += VAR_9;


  for (VAR_10 = 0; VAR_10 < VAR_9; ++VAR_10) {
   VAR_6->buf[VAR_10] = VAR_7->buf[VAR_7->tail];
   VAR_7->tail = (VAR_7->tail + 1) & (VAR_3 - 1);
  }

  FUNC_3(VAR_5, VAR_9);
 }

 if (FUNC_6(VAR_7) < VAR_4)
  FUNC_9(VAR_5);
}
