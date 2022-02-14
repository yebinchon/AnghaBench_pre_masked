
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;


 int VAR_0 ;
 unsigned short FUNC_0 (struct uart_port*) ;
 unsigned int VAR_1 ;
 unsigned short FUNC_1 (struct uart_port*) ;
 unsigned short FUNC_2 (struct uart_port*,int ) ;

__attribute__((used)) static unsigned int FUNC_3(struct uart_port *VAR_2)
{
 unsigned short VAR_3 = FUNC_2(VAR_2, VAR_0);
 unsigned short VAR_4 = FUNC_1(VAR_2);

 return (VAR_3 & FUNC_0(VAR_2)) && !VAR_4 ? VAR_1 : 0;
}
