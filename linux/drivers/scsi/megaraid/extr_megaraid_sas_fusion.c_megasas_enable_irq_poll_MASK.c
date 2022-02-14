
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct megasas_irq_context {int irqpoll; } ;
struct megasas_instance {scalar_t__ msix_vectors; struct megasas_irq_context* irq_context; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct megasas_instance *VAR_0)
{
 u32 VAR_1, VAR_2;
 struct megasas_irq_context *VAR_3;

 VAR_1 = VAR_0->msix_vectors > 0 ? VAR_0->msix_vectors : 1;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  VAR_3 = &VAR_0->irq_context[VAR_2];
  FUNC_0(&VAR_3->irqpoll);
 }
}
