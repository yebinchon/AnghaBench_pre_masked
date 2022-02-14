
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int tx; } ;
struct uart_port {TYPE_3__ icount; scalar_t__ x_char; int dev; TYPE_1__* state; } ;
struct sccnxp_port {TYPE_2__* chip; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 struct sccnxp_port* FUNC_0 (int ) ;
 int FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*,int ) ;
 int FUNC_3 (struct uart_port*,int ,scalar_t__) ;
 int FUNC_4 (struct uart_port*,int ,int ) ;
 scalar_t__ FUNC_5 (struct circ_buf*) ;
 scalar_t__ FUNC_6 (struct circ_buf*) ;
 scalar_t__ FUNC_7 (struct uart_port*) ;
 int FUNC_8 (struct uart_port*) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct uart_port *VAR_9)
{
 u8 VAR_10;
 struct circ_buf *VAR_11 = &VAR_9->state->xmit;
 struct sccnxp_port *VAR_12 = FUNC_0(VAR_9->dev);

 if (FUNC_9(VAR_9->x_char)) {
  FUNC_3(VAR_9, VAR_4, VAR_9->x_char);
  VAR_9->icount.tx++;
  VAR_9->x_char = 0;
  return;
 }

 if (FUNC_6(VAR_11) || FUNC_7(VAR_9)) {

  if (FUNC_2(VAR_9, VAR_3) & VAR_5) {
   FUNC_1(VAR_9, VAR_1);


   if (VAR_12->chip->flags & VAR_2)
    FUNC_4(VAR_9, VAR_0, 0);
  }
  return;
 }

 while (!FUNC_6(VAR_11)) {
  VAR_10 = FUNC_2(VAR_9, VAR_3);
  if (!(VAR_10 & VAR_6))
   break;

  FUNC_3(VAR_9, VAR_4, VAR_11->buf[VAR_11->tail]);
  VAR_11->tail = (VAR_11->tail + 1) & (VAR_7 - 1);
  VAR_9->icount.tx++;
 }

 if (FUNC_5(VAR_11) < VAR_8)
  FUNC_8(VAR_9);
}
