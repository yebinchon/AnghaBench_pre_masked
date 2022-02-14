
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int lock; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* handle_irq ) (struct uart_port*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uart_port*) ;

__attribute__((used)) static irqreturn_t
FUNC_3(int VAR_1, void *VAR_2)
{
 struct uart_port *VAR_3 = VAR_2;
 irqreturn_t VAR_4;

 FUNC_0(&VAR_3->lock);

 VAR_4 = VAR_0->handle_irq(VAR_3);

 FUNC_1(&VAR_3->lock);

 return VAR_4;
}
