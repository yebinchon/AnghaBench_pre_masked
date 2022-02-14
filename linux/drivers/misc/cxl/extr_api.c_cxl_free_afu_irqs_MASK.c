
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cxl_context {TYPE_1__* afu; int irqs; } ;
typedef scalar_t__ irq_hw_number_t ;
struct TYPE_4__ {int (* release_irq_ranges ) (int *,int ) ;} ;
struct TYPE_3__ {int adapter; } ;


 int VAR_0 ;
 int FUNC_0 (struct cxl_context*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct cxl_context*,int ) ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (unsigned int,struct cxl_context*) ;
 unsigned int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,int ) ;

void FUNC_6(struct cxl_context *VAR_2)
{
 irq_hw_number_t VAR_3;
 unsigned int VAR_4;

 if (!FUNC_1(VAR_0)) {
  VAR_3 = FUNC_2(VAR_2, 0);
  if (VAR_3) {
   VAR_4 = FUNC_4(((void*)0), VAR_3);
   if (VAR_4)
    FUNC_3(VAR_4, VAR_2);
  }
 }
 FUNC_0(VAR_2);
 VAR_1->release_irq_ranges(&VAR_2->irqs, VAR_2->afu->adapter);
}
