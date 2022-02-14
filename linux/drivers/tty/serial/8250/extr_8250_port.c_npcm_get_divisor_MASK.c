
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int uartclk; } ;
struct uart_8250_port {struct uart_port port; } ;


 unsigned int FUNC_0 (int ,int) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_8250_port *VAR_0,
  unsigned int VAR_1)
{
 struct uart_port *VAR_2 = &VAR_0->port;

 return FUNC_0(VAR_2->uartclk, 16 * VAR_1 + 2) - 2;
}
