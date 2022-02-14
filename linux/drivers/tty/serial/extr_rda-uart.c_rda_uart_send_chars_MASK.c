
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_4__ {int tx; } ;
struct uart_port {unsigned int x_char; TYPE_2__ icount; TYPE_1__* state; } ;
struct circ_buf {unsigned int* buf; size_t tail; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*,unsigned int,int ) ;
 scalar_t__ FUNC_3 (struct circ_buf*) ;
 scalar_t__ FUNC_4 (struct circ_buf*) ;
 scalar_t__ FUNC_5 (struct uart_port*) ;
 int FUNC_6 (struct uart_port*) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_7)
{
 struct circ_buf *VAR_8 = &VAR_7->state->xmit;
 unsigned int VAR_9;
 u32 VAR_10;

 if (FUNC_5(VAR_7))
  return;

 if (VAR_7->x_char) {
  while (!(FUNC_1(VAR_7, VAR_2) &
    VAR_4))
   FUNC_0();

  FUNC_2(VAR_7, VAR_7->x_char, VAR_1);
  VAR_7->icount.tx++;
  VAR_7->x_char = 0;
 }

 while (FUNC_1(VAR_7, VAR_2) & VAR_4) {
  if (FUNC_4(VAR_8))
   break;

  VAR_9 = VAR_8->buf[VAR_8->tail];
  FUNC_2(VAR_7, VAR_9, VAR_1);
  VAR_8->tail = (VAR_8->tail + 1) & (VAR_5 - 1);
  VAR_7->icount.tx++;
 }

 if (FUNC_3(VAR_8) < VAR_6)
  FUNC_6(VAR_7);

 if (!FUNC_4(VAR_8)) {

  VAR_10 = FUNC_1(VAR_7, VAR_0);
  VAR_10 |= VAR_3;
  FUNC_2(VAR_7, VAR_10, VAR_0);
 }
}
