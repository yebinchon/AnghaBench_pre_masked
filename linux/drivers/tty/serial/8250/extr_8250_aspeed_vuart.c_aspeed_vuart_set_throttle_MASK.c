
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;
struct uart_8250_port {int dummy; } ;


 int FUNC_0 (struct uart_8250_port*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct uart_8250_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_0, bool VAR_1)
{
 struct uart_8250_port *VAR_2 = FUNC_3(VAR_0);
 unsigned long VAR_3;

 FUNC_1(&VAR_0->lock, VAR_3);
 FUNC_0(VAR_2, VAR_1);
 FUNC_2(&VAR_0->lock, VAR_3);
}
