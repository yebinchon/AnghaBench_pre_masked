
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int * ops; int lock; } ;
struct uart_8250_port {int cur_iotype; struct uart_port port; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct uart_8250_port *VAR_1)
{
 struct uart_port *VAR_2 = &VAR_1->port;

 FUNC_0(&VAR_2->lock);
 VAR_2->ops = &VAR_0;

 VAR_1->cur_iotype = 0xFF;
}
