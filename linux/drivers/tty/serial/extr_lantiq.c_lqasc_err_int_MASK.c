
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ membase; } ;
struct ltq_uart_port {int lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct ltq_uart_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static irqreturn_t
FUNC_4(int VAR_5, void *VAR_6)
{
 unsigned long VAR_7;
 struct uart_port *VAR_8 = (struct uart_port *)VAR_6;
 struct ltq_uart_port *VAR_9 = FUNC_3(VAR_8);

 FUNC_1(&VAR_9->lock, VAR_7);

 FUNC_0(0, VAR_1 | VAR_0 |
  VAR_2, VAR_8->membase + VAR_4);
 FUNC_2(&VAR_9->lock, VAR_7);
 return VAR_3;
}
