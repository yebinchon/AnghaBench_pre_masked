
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct zilog_channel {int control; int data; } ;
struct TYPE_6__ {int tx; } ;
struct TYPE_7__ {TYPE_2__ icount; TYPE_1__* state; scalar_t__ x_char; } ;
struct uart_ip22zilog_port {TYPE_3__ port; int flags; int curregs; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct TYPE_5__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct uart_ip22zilog_port*) ;
 scalar_t__ FUNC_2 (struct uart_ip22zilog_port*) ;
 scalar_t__ FUNC_3 (struct uart_ip22zilog_port*) ;
 int FUNC_4 (struct zilog_channel*) ;
 int FUNC_5 (struct zilog_channel*,int ) ;
 unsigned char FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct circ_buf*) ;
 scalar_t__ FUNC_8 (struct circ_buf*) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_12(struct uart_ip22zilog_port *VAR_7,
        struct zilog_channel *VAR_8)
{
 struct circ_buf *VAR_9;

 if (FUNC_1(VAR_7)) {
  unsigned char VAR_10 = FUNC_6(&VAR_8->control);
  FUNC_0();
  if (!(VAR_10 & VAR_4))
   return;
 }

 VAR_7->flags &= ~VAR_1;

 if (FUNC_2(VAR_7)) {
  FUNC_5(VAR_8, VAR_7->curregs);
  VAR_7->flags &= ~VAR_0;
 }

 if (FUNC_3(VAR_7)) {
  VAR_7->flags &= ~VAR_2;
  goto ack_tx_int;
 }

 if (VAR_7->port.x_char) {
  VAR_7->flags |= VAR_1;
  FUNC_11(VAR_7->port.x_char, &VAR_8->data);
  FUNC_0();
  FUNC_4(VAR_8);

  VAR_7->port.icount.tx++;
  VAR_7->port.x_char = 0;
  return;
 }

 if (VAR_7->port.state == ((void*)0))
  goto ack_tx_int;
 VAR_9 = &VAR_7->port.state->xmit;
 if (FUNC_8(VAR_9))
  goto ack_tx_int;
 if (FUNC_9(&VAR_7->port))
  goto ack_tx_int;

 VAR_7->flags |= VAR_1;
 FUNC_11(VAR_9->buf[VAR_9->tail], &VAR_8->data);
 FUNC_0();
 FUNC_4(VAR_8);

 VAR_9->tail = (VAR_9->tail + 1) & (VAR_5 - 1);
 VAR_7->port.icount.tx++;

 if (FUNC_7(VAR_9) < VAR_6)
  FUNC_10(&VAR_7->port);

 return;

ack_tx_int:
 FUNC_11(VAR_3, &VAR_8->control);
 FUNC_0();
 FUNC_4(VAR_8);
}
