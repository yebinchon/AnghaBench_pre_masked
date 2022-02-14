
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {scalar_t__ membase; TYPE_2__ icount; scalar_t__ x_char; TYPE_1__* state; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct altera_jtaguart {scalar_t__ imr; struct uart_port port; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int FUNC_0 (scalar_t__) ;
 unsigned int FUNC_1 (struct circ_buf*) ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct altera_jtaguart *VAR_7)
{
 struct uart_port *VAR_8 = &VAR_7->port;
 struct circ_buf *VAR_9 = &VAR_8->state->xmit;
 unsigned int VAR_10, VAR_11;

 if (VAR_8->x_char) {

  FUNC_3(VAR_8->x_char, VAR_8->membase + VAR_4);
  VAR_8->x_char = 0;
  VAR_8->icount.tx++;
  return;
 }

 VAR_10 = FUNC_1(VAR_9);
 if (VAR_10 > 0) {
  VAR_11 = (FUNC_0(VAR_8->membase + VAR_0) &
    VAR_2) >>
   VAR_3;
  if (VAR_11 > VAR_10)
   VAR_11 = VAR_10;
  if (VAR_11 > 0) {
   VAR_10 -= VAR_11;
   while (VAR_11--) {
    FUNC_3(VAR_9->buf[VAR_9->tail],
           VAR_8->membase + VAR_4);
    VAR_9->tail = (VAR_9->tail + 1) & (VAR_5 - 1);
    VAR_8->icount.tx++;
   }
   if (VAR_10 < VAR_6)
    FUNC_2(VAR_8);
  }
 }

 if (VAR_10 == 0) {
  VAR_7->imr &= ~VAR_1;
  FUNC_3(VAR_7->imr, VAR_8->membase + VAR_0);
 }
}
