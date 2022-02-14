
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_7__ {int tx; } ;
struct TYPE_8__ {TYPE_2__ icount; scalar_t__ x_char; TYPE_1__* state; } ;
struct rp2_uart_port {TYPE_3__ port; scalar_t__ base; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct TYPE_6__ {struct circ_buf xmit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (struct circ_buf*) ;
 scalar_t__ FUNC_3 (struct circ_buf*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct rp2_uart_port *VAR_5)
{
 u16 VAR_6 = VAR_0 - FUNC_0(VAR_5->base + VAR_2);
 struct circ_buf *VAR_7 = &VAR_5->port.state->xmit;

 if (FUNC_4(&VAR_5->port)) {
  FUNC_1(&VAR_5->port);
  return;
 }

 for (; VAR_6 != 0; VAR_6--) {
  if (VAR_5->port.x_char) {
   FUNC_6(VAR_5->port.x_char, VAR_5->base + VAR_1);
   VAR_5->port.x_char = 0;
   VAR_5->port.icount.tx++;
   continue;
  }
  if (FUNC_3(VAR_7)) {
   FUNC_1(&VAR_5->port);
   break;
  }
  FUNC_6(VAR_7->buf[VAR_7->tail], VAR_5->base + VAR_1);
  VAR_7->tail = (VAR_7->tail + 1) & (VAR_3 - 1);
  VAR_5->port.icount.tx++;
 }

 if (FUNC_2(VAR_7) < VAR_4)
  FUNC_5(&VAR_5->port);
}
