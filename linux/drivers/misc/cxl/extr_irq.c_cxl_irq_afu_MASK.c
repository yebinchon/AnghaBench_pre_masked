
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* offset; int* range; } ;
struct cxl_context {int pending_irq; int wq; int lock; int irq_bitmap; int pe; TYPE_1__ irqs; } ;
typedef int irqreturn_t ;
typedef int irq_hw_number_t ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,int ,int,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct cxl_context*,int,int,int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_2, void *VAR_3)
{
 struct cxl_context *VAR_4 = VAR_3;
 irq_hw_number_t VAR_5 = FUNC_2(FUNC_1(VAR_2));
 int VAR_6, VAR_7 = 0;
 __u16 VAR_8;
 int VAR_9;
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_6 = VAR_5 - VAR_4->irqs.offset[VAR_9];
  VAR_8 = VAR_4->irqs.range[VAR_9];
  if (VAR_6 >= 0 && VAR_6 < VAR_8) {
   VAR_7 += VAR_6;
   break;
  }
  VAR_7 += VAR_8;
 }
 if (FUNC_8(VAR_9 >= VAR_0)) {
  FUNC_0(1, "Received AFU IRQ out of range for pe %i (virq %i hwirq %lx)\n",
       VAR_4->pe, VAR_2, VAR_5);
  return VAR_1;
 }

 FUNC_7(VAR_4, VAR_7, VAR_2, VAR_5);
 FUNC_3("Received AFU interrupt %i for pe: %i (virq %i hwirq %lx)\n",
        VAR_7, VAR_4->pe, VAR_2, VAR_5);

 if (FUNC_8(!VAR_4->irq_bitmap)) {
  FUNC_0(1, "Received AFU IRQ for context with no IRQ bitmap\n");
  return VAR_1;
 }
 FUNC_5(&VAR_4->lock);
 FUNC_4(VAR_7 - 1, VAR_4->irq_bitmap);
 VAR_4->pending_irq = 1;
 FUNC_6(&VAR_4->lock);

 FUNC_9(&VAR_4->wq);

 return VAR_1;
}
