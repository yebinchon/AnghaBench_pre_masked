
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {scalar_t__ irq; } ;
struct TYPE_2__ {int function; } ;
struct uart_8250_port {TYPE_1__ timer; struct uart_port port; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (struct uart_8250_port*) ;

__attribute__((used)) static void FUNC_2(struct uart_8250_port *VAR_1)
{
 struct uart_port *VAR_2 = &VAR_1->port;

 FUNC_0(&VAR_1->timer);
 VAR_1->timer.function = VAR_0;
 if (VAR_2->irq)
  FUNC_1(VAR_1);
}
