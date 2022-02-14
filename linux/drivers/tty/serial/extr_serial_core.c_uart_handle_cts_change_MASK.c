
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cts; } ;
struct uart_port {int hw_stopped; TYPE_2__* ops; TYPE_1__ icount; int lock; } ;
struct TYPE_4__ {int (* stop_tx ) (struct uart_port*) ;int (* start_tx ) (struct uart_port*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*) ;
 scalar_t__ FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct uart_port*) ;

void FUNC_5(struct uart_port *VAR_0, unsigned int VAR_1)
{
 FUNC_0(&VAR_0->lock);

 VAR_0->icount.cts++;

 if (FUNC_3(VAR_0)) {
  if (VAR_0->hw_stopped) {
   if (VAR_1) {
    VAR_0->hw_stopped = 0;
    VAR_0->ops->start_tx(VAR_0);
    FUNC_4(VAR_0);
   }
  } else {
   if (!VAR_1) {
    VAR_0->hw_stopped = 1;
    VAR_0->ops->stop_tx(VAR_0);
   }
  }

 }
}
