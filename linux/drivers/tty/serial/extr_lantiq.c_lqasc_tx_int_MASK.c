
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ membase; } ;
struct ltq_uart_port {int lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct ltq_uart_port* FUNC_4 (struct uart_port*) ;

__attribute__((used)) static irqreturn_t
FUNC_5(int VAR_3, void *VAR_4)
{
 unsigned long VAR_5;
 struct uart_port *VAR_6 = (struct uart_port *)VAR_4;
 struct ltq_uart_port *VAR_7 = FUNC_4(VAR_6);

 FUNC_2(&VAR_7->lock, VAR_5);
 FUNC_0(VAR_0, VAR_6->membase + VAR_2);
 FUNC_3(&VAR_7->lock, VAR_5);
 FUNC_1(VAR_6);
 return VAR_1;
}
