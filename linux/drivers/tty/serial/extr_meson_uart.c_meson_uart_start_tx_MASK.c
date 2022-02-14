
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_4__ {int tx; } ;
struct uart_port {unsigned int x_char; scalar_t__ membase; TYPE_2__ icount; TYPE_1__* state; } ;
struct circ_buf {unsigned int* buf; size_t tail; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct uart_port*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct circ_buf*) ;
 scalar_t__ FUNC_3 (struct circ_buf*) ;
 scalar_t__ FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct uart_port*) ;
 int FUNC_6 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_7)
{
 struct circ_buf *VAR_8 = &VAR_7->state->xmit;
 unsigned int VAR_9;
 u32 VAR_10;

 if (FUNC_4(VAR_7)) {
  FUNC_0(VAR_7);
  return;
 }

 while (!(FUNC_1(VAR_7->membase + VAR_1) & VAR_2)) {
  if (VAR_7->x_char) {
   FUNC_6(VAR_7->x_char, VAR_7->membase + VAR_4);
   VAR_7->icount.tx++;
   VAR_7->x_char = 0;
   continue;
  }

  if (FUNC_3(VAR_8))
   break;

  VAR_9 = VAR_8->buf[VAR_8->tail];
  FUNC_6(VAR_9, VAR_7->membase + VAR_4);
  VAR_8->tail = (VAR_8->tail+1) & (VAR_5 - 1);
  VAR_7->icount.tx++;
 }

 if (!FUNC_3(VAR_8)) {
  VAR_10 = FUNC_1(VAR_7->membase + VAR_0);
  VAR_10 |= VAR_3;
  FUNC_6(VAR_10, VAR_7->membase + VAR_0);
 }

 if (FUNC_2(VAR_8) < VAR_6)
  FUNC_5(VAR_7);
}
