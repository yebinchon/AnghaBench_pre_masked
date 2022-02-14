
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {unsigned int uartclk; } ;


 int FUNC_0 (struct uart_port*,unsigned int) ;

__attribute__((used)) static unsigned int
FUNC_1(struct uart_port *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;

 if (!FUNC_0(VAR_0, VAR_1))
  VAR_2 = 13;
 else
  VAR_2 = 16;
 return VAR_0->uartclk/(VAR_2 * VAR_1);
}
