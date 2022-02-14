
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* handle_irq ) (TYPE_1__*) ;} ;
struct uart_8250_port {TYPE_1__ port; int timer; } ;
struct timer_list {int dummy; } ;


 struct uart_8250_port* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 struct uart_8250_port* VAR_2 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_3)
{
 struct uart_8250_port *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_1);

 VAR_4->port.handle_irq(&VAR_4->port);
 FUNC_1(&VAR_4->timer, VAR_0 + FUNC_3(&VAR_4->port));
}
