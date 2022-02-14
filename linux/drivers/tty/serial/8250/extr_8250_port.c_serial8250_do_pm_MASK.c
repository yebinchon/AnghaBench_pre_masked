
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct uart_8250_port {int dummy; } ;


 int FUNC_0 (struct uart_8250_port*,int) ;
 struct uart_8250_port* FUNC_1 (struct uart_port*) ;

void FUNC_2(struct uart_port *VAR_0, unsigned int VAR_1,
        unsigned int VAR_2)
{
 struct uart_8250_port *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3, VAR_1 != 0);
}
