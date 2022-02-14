
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct megasas_irq_context {int irq_poll_scheduled; int os_irq; int irqpoll; } ;
struct megasas_instance {scalar_t__ msix_vectors; struct megasas_irq_context* irq_context; int pdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_0)
{
 u32 VAR_1, VAR_2;
 struct megasas_instance *VAR_3 =
  (struct megasas_instance *)VAR_0;
 struct megasas_irq_context *VAR_4;

 VAR_1 = VAR_3->msix_vectors > 0 ? VAR_3->msix_vectors : 1;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  FUNC_3(FUNC_2(VAR_3->pdev, VAR_2));
  VAR_4 = &VAR_3->irq_context[VAR_2];
  FUNC_1(&VAR_4->irqpoll);
  if (VAR_4->irq_poll_scheduled) {
   VAR_4->irq_poll_scheduled = 0;
   FUNC_0(VAR_4->os_irq);
  }
 }
}
