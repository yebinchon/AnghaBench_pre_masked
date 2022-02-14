
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rx; int frame; int overrun; } ;
struct uart_port {int lock; TYPE_2__* state; TYPE_1__ icount; } ;
struct TYPE_4__ {int port; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct uart_port*,unsigned int) ;
 unsigned int FUNC_1 (struct uart_port*) ;
 unsigned int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct uart_port*,unsigned int) ;
 int FUNC_7 (struct uart_port*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_8 (unsigned int) ;

__attribute__((used)) static void FUNC_9(struct uart_port *VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8, VAR_9 = 0;
 do {




  if (FUNC_8(VAR_7 & (VAR_2 | VAR_1))) {
   if (VAR_7 & VAR_2) {
    VAR_6->icount.overrun++;
    VAR_9 = VAR_5;
    FUNC_0(VAR_6, VAR_2);
   }

   if (VAR_7 & VAR_1) {
    VAR_6->icount.frame++;
    VAR_9 = VAR_3;
    FUNC_0(VAR_6, VAR_1);
   }
  } else
   VAR_9 = VAR_4;

  if (VAR_7 & VAR_0)
   continue;

  VAR_8 = FUNC_1(VAR_6);
  VAR_6->icount.rx++;

  if (!(FUNC_6(VAR_6, VAR_8)))
   FUNC_7(VAR_6, VAR_7, VAR_2, VAR_8, VAR_9);

  FUNC_4(&VAR_6->lock);
  FUNC_5(&VAR_6->state->port);
  FUNC_3(&VAR_6->lock);
 } while (!((VAR_7 = FUNC_2(VAR_6)) & VAR_0));
}
