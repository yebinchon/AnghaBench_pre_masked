
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct atmel_uart_port {int tasklet_rx; } ;


 int FUNC_0 (struct atmel_uart_port*,int *) ;
 struct atmel_uart_port* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct uart_port *VAR_1 = VAR_0;
 struct atmel_uart_port *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2, &VAR_2->tasklet_rx);
}
