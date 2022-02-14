
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int tx; } ;
struct TYPE_7__ {TYPE_2__ icount; TYPE_1__* state; scalar_t__ x_char; } ;
struct uart_pmac_port {TYPE_3__ port; int flags; int curregs; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct TYPE_5__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct uart_pmac_port*) ;
 int FUNC_1 (struct uart_pmac_port*) ;
 scalar_t__ FUNC_2 (struct uart_pmac_port*) ;
 scalar_t__ FUNC_3 (struct uart_pmac_port*) ;
 int FUNC_4 (struct uart_pmac_port*,int ) ;
 unsigned char FUNC_5 (struct uart_pmac_port*,int ) ;
 scalar_t__ FUNC_6 (struct circ_buf*) ;
 scalar_t__ FUNC_7 (struct circ_buf*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (struct uart_pmac_port*,scalar_t__) ;
 int FUNC_11 (struct uart_pmac_port*,int ,int ) ;
 int FUNC_12 (struct uart_pmac_port*) ;

__attribute__((used)) static void FUNC_13(struct uart_pmac_port *VAR_8)
{
 struct circ_buf *VAR_9;

 if (FUNC_0(VAR_8)) {
  unsigned char VAR_10 = FUNC_5(VAR_8, VAR_3);
  if (!(VAR_10 & VAR_5))
   return;
 }

 VAR_8->flags &= ~VAR_1;

 if (FUNC_2(VAR_8)) {
  FUNC_4(VAR_8, VAR_8->curregs);
  VAR_8->flags &= ~VAR_0;
 }

 if (FUNC_3(VAR_8)) {
  VAR_8->flags &= ~VAR_2;
  goto ack_tx_int;
 }
 if (!FUNC_1(VAR_8))
  goto ack_tx_int;

 if (VAR_8->port.x_char) {
  VAR_8->flags |= VAR_1;
  FUNC_10(VAR_8, VAR_8->port.x_char);
  FUNC_12(VAR_8);
  VAR_8->port.icount.tx++;
  VAR_8->port.x_char = 0;
  return;
 }

 if (VAR_8->port.state == ((void*)0))
  goto ack_tx_int;
 VAR_9 = &VAR_8->port.state->xmit;
 if (FUNC_7(VAR_9)) {
  FUNC_9(&VAR_8->port);
  goto ack_tx_int;
 }
 if (FUNC_8(&VAR_8->port))
  goto ack_tx_int;

 VAR_8->flags |= VAR_1;
 FUNC_10(VAR_8, VAR_9->buf[VAR_9->tail]);
 FUNC_12(VAR_8);

 VAR_9->tail = (VAR_9->tail + 1) & (VAR_6 - 1);
 VAR_8->port.icount.tx++;

 if (FUNC_6(VAR_9) < VAR_7)
  FUNC_9(&VAR_8->port);

 return;

ack_tx_int:
 FUNC_11(VAR_8, VAR_3, VAR_4);
 FUNC_12(VAR_8);
}
