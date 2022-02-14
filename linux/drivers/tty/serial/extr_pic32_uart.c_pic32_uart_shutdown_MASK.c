
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;
struct pic32_sport {int irq_rx; int irq_tx; int irq_fault; } ;


 int FUNC_0 (int ,struct uart_port*) ;
 int FUNC_1 (struct pic32_sport*) ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct pic32_sport* FUNC_5 (struct uart_port*) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_0)
{
 struct pic32_sport *VAR_1 = FUNC_5(VAR_0);
 unsigned long VAR_2;


 FUNC_3(&VAR_0->lock, VAR_2);
 FUNC_2(VAR_0);
 FUNC_4(&VAR_0->lock, VAR_2);
 FUNC_1(VAR_1);


 FUNC_0(VAR_1->irq_fault, VAR_0);
 FUNC_0(VAR_1->irq_tx, VAR_0);
 FUNC_0(VAR_1->irq_rx, VAR_0);
}
