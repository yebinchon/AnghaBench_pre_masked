
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct uart_8250_port {scalar_t__ gpios; } ;


 unsigned int FUNC_0 (scalar_t__,unsigned int*) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (struct uart_8250_port*) ;
 int FUNC_3 (struct uart_8250_port*) ;
 int FUNC_4 (struct uart_8250_port*) ;
 struct uart_8250_port* FUNC_5 (struct uart_port*) ;

unsigned int FUNC_6(struct uart_port *VAR_0)
{
 struct uart_8250_port *VAR_1 = FUNC_5(VAR_0);
 unsigned int VAR_2;
 unsigned int VAR_3;

 FUNC_3(VAR_1);
 VAR_2 = FUNC_2(VAR_1);
 FUNC_4(VAR_1);

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_1->gpios)
  return FUNC_0(VAR_1->gpios, &VAR_3);

 return VAR_3;
}
