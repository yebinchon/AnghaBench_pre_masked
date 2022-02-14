
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct uart_port {unsigned int fifosize; unsigned int read_status_mask; int lock; TYPE_2__* state; TYPE_1__ icount; } ;
struct TYPE_4__ {int port; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (struct uart_port*) ;
 unsigned int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*,int ) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct uart_port*) ;
 scalar_t__ FUNC_8 (struct uart_port*,unsigned int) ;
 int FUNC_9 (struct uart_port*,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_10(struct uart_port *VAR_9)
{
 unsigned int VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned int VAR_14 = VAR_9->fifosize;

 VAR_10 = FUNC_1(VAR_9);

 while (FUNC_3(VAR_10) && (VAR_14--)) {

  VAR_11 = FUNC_0(VAR_9);
  VAR_13 = VAR_1;

  VAR_9->icount.rx++;

  VAR_12 = FUNC_1(VAR_9) | VAR_3;
  FUNC_2(VAR_9, 0);
  if (VAR_12 & VAR_5) {

   if (VAR_12 & VAR_4) {
    VAR_12 &= ~(VAR_6 | VAR_8);
    VAR_9->icount.brk++;
    if (FUNC_7(VAR_9))
     goto ignore_char;
   } else if (VAR_12 & VAR_8) {
    VAR_9->icount.parity++;
   } else if (VAR_12 & VAR_6) {
    VAR_9->icount.frame++;
   }
   if (VAR_12 & VAR_7)
    VAR_9->icount.overrun++;

   VAR_12 &= VAR_9->read_status_mask;

   if (VAR_12 & VAR_8)
    VAR_13 = VAR_2;
   else if (VAR_12 & VAR_6)
    VAR_13 = VAR_0;
  }

  if (FUNC_8(VAR_9, VAR_11))
   goto ignore_char;

  FUNC_9(VAR_9, VAR_12, VAR_7, VAR_11, VAR_13);


       ignore_char:
  VAR_10 = FUNC_1(VAR_9);
 }

 FUNC_5(&VAR_9->lock);
 FUNC_6(&VAR_9->state->port);
 FUNC_4(&VAR_9->lock);
}
