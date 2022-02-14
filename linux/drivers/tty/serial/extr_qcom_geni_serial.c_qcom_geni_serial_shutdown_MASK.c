
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; int irq; int cons; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct uart_port*) ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (struct uart_port*) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_0)
{
 unsigned long VAR_1;


 if (FUNC_6(VAR_0))
  FUNC_0(VAR_0->cons);

 FUNC_1(VAR_0->irq, VAR_0);
 FUNC_4(&VAR_0->lock, VAR_1);
 FUNC_3(VAR_0);
 FUNC_2(VAR_0);
 FUNC_5(&VAR_0->lock, VAR_1);
}
