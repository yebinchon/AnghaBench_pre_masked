
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct uart_8250_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_port*,unsigned int) ;
 int FUNC_1 (struct uart_8250_port*) ;
 int FUNC_2 (struct uart_8250_port*) ;
 unsigned int FUNC_3 (struct uart_port*,int ) ;
 struct uart_8250_port* FUNC_4 (struct uart_port*) ;

__attribute__((used)) static int FUNC_5(struct uart_port *VAR_1)
{
 struct uart_8250_port *VAR_2 = FUNC_4(VAR_1);
 unsigned int VAR_3;
 int VAR_4;

 FUNC_1(VAR_2);

 VAR_3 = FUNC_3(VAR_1, VAR_0);
 VAR_4 = FUNC_0(VAR_1, VAR_3);

 FUNC_2(VAR_2);
 return VAR_4;
}
