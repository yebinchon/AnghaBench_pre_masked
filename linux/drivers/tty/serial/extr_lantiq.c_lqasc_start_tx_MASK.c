
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct ltq_uart_port {int lock; } ;


 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct ltq_uart_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static void
FUNC_4(struct uart_port *VAR_0)
{
 unsigned long VAR_1;
 struct ltq_uart_port *VAR_2 = FUNC_3(VAR_0);

 FUNC_1(&VAR_2->lock, VAR_1);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_2->lock, VAR_1);
 return;
}
