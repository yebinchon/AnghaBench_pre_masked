
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cxl_afu {TYPE_1__* native; int psl_irq_name; int adapter; } ;
struct TYPE_4__ {int (* release_one_irq ) (int ,int ) ;} ;
struct TYPE_3__ {scalar_t__ psl_virq; int psl_hwirq; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (scalar_t__,struct cxl_afu*) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(struct cxl_afu *VAR_1)
{
 if (VAR_1->native->psl_virq == 0 ||
     VAR_1->native->psl_virq !=
     FUNC_1(((void*)0), VAR_1->native->psl_hwirq))
  return;

 FUNC_0(VAR_1->native->psl_virq, VAR_1);
 VAR_0->release_one_irq(VAR_1->adapter, VAR_1->native->psl_hwirq);
 FUNC_2(VAR_1->psl_irq_name);
 VAR_1->native->psl_virq = 0;
}
