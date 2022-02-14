
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* range; int * offset; } ;
struct cxl_context {scalar_t__ irq_count; TYPE_1__* afu; TYPE_2__ irqs; } ;
typedef int irq_hw_number_t ;
struct TYPE_6__ {int (* release_irq_ranges ) (TYPE_2__*,int ) ;} ;
struct TYPE_4__ {int adapter; } ;


 int VAR_0 ;
 int FUNC_0 (struct cxl_context*) ;
 int FUNC_1 () ;
 TYPE_3__* VAR_1 ;
 int FUNC_2 (unsigned int,void*) ;
 unsigned int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;

void FUNC_5(struct cxl_context *VAR_2, void *VAR_3)
{
 irq_hw_number_t VAR_4;
 unsigned int VAR_5;
 int VAR_6, VAR_7;

 for (VAR_6 = FUNC_1(); VAR_6 < VAR_0; VAR_6++) {
  VAR_4 = VAR_2->irqs.offset[VAR_6];
  for (VAR_7 = 0; VAR_7 < VAR_2->irqs.range[VAR_6]; VAR_4++, VAR_7++) {
   VAR_5 = FUNC_3(((void*)0), VAR_4);
   if (VAR_5)
    FUNC_2(VAR_5, VAR_3);
  }
 }

 FUNC_0(VAR_2);
 VAR_1->release_irq_ranges(&VAR_2->irqs, VAR_2->afu->adapter);

 VAR_2->irq_count = 0;
}
