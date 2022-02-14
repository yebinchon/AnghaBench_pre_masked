
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int (* unthrottle ) (struct uart_port*) ;} ;


 int FUNC_0 (struct uart_port*) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_0)
{
 VAR_0->unthrottle(VAR_0);
}
