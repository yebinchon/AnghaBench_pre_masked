
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct megasas_irq_context {int irq_poll_scheduled; int irqpoll; int os_irq; } ;
struct megasas_instance {scalar_t__ msix_vectors; int threshold_reply_count; int pdev; struct megasas_irq_context* irq_context; } ;


 int FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,size_t) ;

__attribute__((used)) static
void FUNC_2(struct megasas_instance *VAR_1)
{
 struct megasas_irq_context *VAR_2;
 u32 VAR_3, VAR_4;

 VAR_3 = VAR_1->msix_vectors > 0 ? VAR_1->msix_vectors : 1;


 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_2 = &VAR_1->irq_context[VAR_4];
  VAR_2->os_irq = FUNC_1(VAR_1->pdev, VAR_4);
  VAR_2->irq_poll_scheduled = 0;
  FUNC_0(&VAR_2->irqpoll,
         VAR_1->threshold_reply_count,
         VAR_0);
 }
}
