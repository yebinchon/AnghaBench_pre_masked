
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int tx; } ;
struct TYPE_8__ {int fifosize; TYPE_2__ icount; scalar_t__ x_char; TYPE_1__* state; } ;
struct uart_sunsu_port {TYPE_3__ port; } ;
struct circ_buf {size_t tail; int * buf; } ;
struct TYPE_6__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct uart_sunsu_port*) ;
 int FUNC_1 (struct uart_sunsu_port*,int ,int ) ;
 int FUNC_2 (struct uart_sunsu_port*,int ,scalar_t__) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (struct circ_buf*) ;
 scalar_t__ FUNC_5 (struct circ_buf*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_8(struct uart_sunsu_port *VAR_3)
{
 struct circ_buf *VAR_4 = &VAR_3->port.state->xmit;
 int VAR_5;

 if (VAR_3->port.x_char) {
  FUNC_2(VAR_3, VAR_0, VAR_3->port.x_char);
  VAR_3->port.icount.tx++;
  VAR_3->port.x_char = 0;
  return;
 }
 if (FUNC_6(&VAR_3->port)) {
  FUNC_3(&VAR_3->port);
  return;
 }
 if (FUNC_5(VAR_4)) {
  FUNC_0(VAR_3);
  return;
 }

 VAR_5 = VAR_3->port.fifosize;
 do {
  FUNC_1(VAR_3, VAR_0, VAR_4->buf[VAR_4->tail]);
  VAR_4->tail = (VAR_4->tail + 1) & (VAR_1 - 1);
  VAR_3->port.icount.tx++;
  if (FUNC_5(VAR_4))
   break;
 } while (--VAR_5 > 0);

 if (FUNC_4(VAR_4) < VAR_2)
  FUNC_7(&VAR_3->port);

 if (FUNC_5(VAR_4))
  FUNC_0(VAR_3);
}
