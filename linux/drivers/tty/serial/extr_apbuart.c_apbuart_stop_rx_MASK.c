
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 VAR_2 &= ~(VAR_0);
 FUNC_1(VAR_1, VAR_2);
}
