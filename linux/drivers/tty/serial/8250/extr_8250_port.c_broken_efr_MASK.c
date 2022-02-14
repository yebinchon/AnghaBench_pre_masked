
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_8250_port {int dummy; } ;


 int FUNC_0 (struct uart_8250_port*) ;
 int FUNC_1 (struct uart_8250_port*) ;

__attribute__((used)) static int FUNC_2(struct uart_8250_port *VAR_0)
{





 if (FUNC_0(VAR_0) == 0x0201 && FUNC_1(VAR_0) == 16)
  return 1;

 return 0;
}
