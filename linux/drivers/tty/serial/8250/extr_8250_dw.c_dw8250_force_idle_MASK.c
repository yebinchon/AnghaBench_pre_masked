
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int (* serial_in ) (struct uart_port*,int ) ;} ;
struct uart_8250_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_8250_port*) ;
 int FUNC_1 (struct uart_port*,int ) ;
 struct uart_8250_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_1)
{
 struct uart_8250_port *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_2);
 (void)VAR_1->serial_in(VAR_1, VAR_0);
}
