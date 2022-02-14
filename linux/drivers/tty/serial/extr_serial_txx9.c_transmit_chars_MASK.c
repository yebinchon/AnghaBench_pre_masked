
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int tx; } ;
struct TYPE_8__ {TYPE_2__ icount; scalar_t__ x_char; TYPE_1__* state; } ;
struct uart_txx9_port {TYPE_3__ port; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct TYPE_6__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct uart_txx9_port*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct circ_buf*) ;
 scalar_t__ FUNC_3 (struct circ_buf*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static inline void FUNC_6(struct uart_txx9_port *VAR_4)
{
 struct circ_buf *VAR_5 = &VAR_4->port.state->xmit;
 int VAR_6;

 if (VAR_4->port.x_char) {
  FUNC_1(VAR_4, VAR_1, VAR_4->port.x_char);
  VAR_4->port.icount.tx++;
  VAR_4->port.x_char = 0;
  return;
 }
 if (FUNC_3(VAR_5) || FUNC_4(&VAR_4->port)) {
  FUNC_0(&VAR_4->port);
  return;
 }

 VAR_6 = VAR_0;
 do {
  FUNC_1(VAR_4, VAR_1, VAR_5->buf[VAR_5->tail]);
  VAR_5->tail = (VAR_5->tail + 1) & (VAR_2 - 1);
  VAR_4->port.icount.tx++;
  if (FUNC_3(VAR_5))
   break;
 } while (--VAR_6 > 0);

 if (FUNC_2(VAR_5) < VAR_3)
  FUNC_5(&VAR_4->port);

 if (FUNC_3(VAR_5))
  FUNC_0(&VAR_4->port);
}
