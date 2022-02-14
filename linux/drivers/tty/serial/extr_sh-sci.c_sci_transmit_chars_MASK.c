
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {char x_char; TYPE_2__ icount; TYPE_1__* state; } ;
struct circ_buf {unsigned char* buf; size_t tail; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 unsigned short FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct uart_port*,int ) ;
 int FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct uart_port*) ;
 unsigned short FUNC_5 (struct uart_port*,int ) ;
 int FUNC_6 (struct uart_port*,int ,unsigned char) ;
 scalar_t__ FUNC_7 (struct circ_buf*) ;
 scalar_t__ FUNC_8 (struct circ_buf*) ;
 unsigned int FUNC_9 (struct uart_port*) ;
 int FUNC_10 (struct uart_port*) ;

__attribute__((used)) static void FUNC_11(struct uart_port *VAR_6)
{
 struct circ_buf *VAR_7 = &VAR_6->state->xmit;
 unsigned int VAR_8 = FUNC_9(VAR_6);
 unsigned short VAR_9;
 unsigned short VAR_10;
 int VAR_11;

 VAR_9 = FUNC_5(VAR_6, VAR_2);
 if (!(VAR_9 & FUNC_0(VAR_6))) {
  VAR_10 = FUNC_5(VAR_6, VAR_0);
  if (FUNC_8(VAR_7))
   VAR_10 &= ~VAR_1;
  else
   VAR_10 |= VAR_1;
  FUNC_6(VAR_6, VAR_0, VAR_10);
  return;
 }

 VAR_11 = FUNC_4(VAR_6);

 do {
  unsigned char VAR_12;

  if (VAR_6->x_char) {
   VAR_12 = VAR_6->x_char;
   VAR_6->x_char = 0;
  } else if (!FUNC_8(VAR_7) && !VAR_8) {
   VAR_12 = VAR_7->buf[VAR_7->tail];
   VAR_7->tail = (VAR_7->tail + 1) & (VAR_4 - 1);
  } else {
   break;
  }

  FUNC_6(VAR_6, VAR_3, VAR_12);

  VAR_6->icount.tx++;
 } while (--VAR_11 > 0);

 FUNC_2(VAR_6, FUNC_1(VAR_6));

 if (FUNC_7(VAR_7) < VAR_5)
  FUNC_10(VAR_6);
 if (FUNC_8(VAR_7))
  FUNC_3(VAR_6);

}
