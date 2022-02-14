
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tx; } ;
struct uart_port {unsigned int fifosize; TYPE_2__* state; TYPE_1__ icount; scalar_t__ membase; } ;
struct TYPE_7__ {size_t tail; int * buf; } ;
struct TYPE_6__ {TYPE_3__ xmit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct uart_port*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(void *VAR_7)
{
 struct uart_port *VAR_8 = (struct uart_port *)VAR_7;
 unsigned int VAR_9;

 if (FUNC_2(&VAR_8->state->xmit)) {
  FUNC_4(VAR_2, VAR_8->membase + VAR_1);
 } else {
  VAR_9 = VAR_8->fifosize;
  while (VAR_9 && !FUNC_2(&VAR_8->state->xmit) &&
         !(FUNC_0(VAR_8->membase + VAR_3) &
      VAR_4)) {





   FUNC_4(
    VAR_8->state->xmit.buf[VAR_8->state->xmit.tail],
     VAR_8->membase + VAR_0);

   VAR_8->icount.tx++;





   VAR_8->state->xmit.tail =
    (VAR_8->state->xmit.tail + 1) &
     (VAR_5 - 1);

   VAR_9--;
  }

  if (FUNC_1(
    &VAR_8->state->xmit) < VAR_6)
   FUNC_3(VAR_8);
 }
}
