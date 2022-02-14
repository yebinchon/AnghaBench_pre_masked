
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int (* shutdown ) (struct uart_port*) ;} ;


 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_0)
{
 if (VAR_0->shutdown)
  VAR_0->shutdown(VAR_0);
 else
  FUNC_0(VAR_0);
}
