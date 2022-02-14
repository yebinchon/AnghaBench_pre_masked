
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct megasas_irq_context {int irqpoll; } ;
struct megasas_instance {int msix_vectors; scalar_t__ adapter_type; struct megasas_irq_context* irq_context; int pdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct megasas_irq_context*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(struct megasas_instance *VAR_1) {

 int VAR_2;
 int VAR_3;
 struct megasas_irq_context *VAR_4;

 VAR_3 = VAR_1->msix_vectors > 0 ? VAR_1->msix_vectors : 1;
 if (VAR_1->adapter_type != VAR_0) {
  for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
   VAR_4 = &VAR_1->irq_context[VAR_2];
   FUNC_1(&VAR_4->irqpoll);
  }
 }

 if (VAR_1->msix_vectors)
  for (VAR_2 = 0; VAR_2 < VAR_1->msix_vectors; VAR_2++) {
   FUNC_0(FUNC_2(VAR_1->pdev, VAR_2),
     &VAR_1->irq_context[VAR_2]);
  }
 else
  FUNC_0(FUNC_2(VAR_1->pdev, 0),
    &VAR_1->irq_context[0]);
}
