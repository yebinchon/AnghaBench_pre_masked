
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int lock; } ;
struct stm32_usart_offsets {int cr3; int cr1; } ;
struct stm32_port {scalar_t__ cr3_irq; scalar_t__ cr1_irq; TYPE_1__* info; } ;
struct TYPE_2__ {struct stm32_usart_offsets ofs; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct uart_port*,int ,scalar_t__) ;
 struct stm32_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_0)
{
 struct stm32_port *VAR_1 = FUNC_3(VAR_0);
 struct stm32_usart_offsets *VAR_2 = &VAR_1->info->ofs;
 unsigned long VAR_3;

 FUNC_0(&VAR_0->lock, VAR_3);
 FUNC_2(VAR_0, VAR_2->cr1, VAR_1->cr1_irq);
 if (VAR_1->cr3_irq)
  FUNC_2(VAR_0, VAR_2->cr3, VAR_1->cr3_irq);

 FUNC_1(&VAR_0->lock, VAR_3);
}
