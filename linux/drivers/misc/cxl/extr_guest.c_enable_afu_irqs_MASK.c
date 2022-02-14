
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* range; int * offset; } ;
struct cxl_context {TYPE_2__ irqs; TYPE_1__* afu; } ;
typedef int irq_hw_number_t ;
struct TYPE_3__ {int slice; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(struct cxl_context *VAR_1)
{
 irq_hw_number_t VAR_2;
 unsigned int VAR_3;
 int VAR_4, VAR_5;

 FUNC_2("Enabling AFU(%d) interrupts\n", VAR_1->afu->slice);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_2 = VAR_1->irqs.offset[VAR_4];
  for (VAR_5 = 0; VAR_5 < VAR_1->irqs.range[VAR_4]; VAR_2++, VAR_5++) {
   VAR_3 = FUNC_1(((void*)0), VAR_2);
   FUNC_0(VAR_3);
  }
 }
}
