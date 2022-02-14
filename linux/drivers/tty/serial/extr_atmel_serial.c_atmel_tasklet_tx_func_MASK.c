
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;
struct atmel_uart_port {int (* schedule_tx ) (struct uart_port*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uart_port*) ;
 struct atmel_uart_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_0)
{
 struct uart_port *VAR_1 = (struct uart_port *)VAR_0;
 struct atmel_uart_port *VAR_2 = FUNC_3(VAR_1);


 FUNC_0(&VAR_1->lock);
 VAR_2->schedule_tx(VAR_1);
 FUNC_1(&VAR_1->lock);
}
