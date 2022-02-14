
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct atmel_uart_port {int fifo_size; } ;


 struct atmel_uart_port* FUNC_0 (struct uart_port*) ;

__attribute__((used)) static bool FUNC_1(struct uart_port *VAR_0)
{
 struct atmel_uart_port *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->fifo_size;
}
