
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cxl {TYPE_1__* native; int irq_name; } ;
struct TYPE_4__ {int (* release_one_irq ) (struct cxl*,int ) ;} ;
struct TYPE_3__ {scalar_t__ err_virq; int err_hwirq; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct cxl*,int ,int) ;
 int FUNC_1 (scalar_t__,struct cxl*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct cxl*,int ) ;

void FUNC_5(struct cxl *VAR_2)
{
 if (VAR_2->native->err_virq == 0 ||
     VAR_2->native->err_virq !=
     FUNC_2(((void*)0), VAR_2->native->err_hwirq))
  return;

 FUNC_0(VAR_2, VAR_0, 0x0000000000000000);
 FUNC_1(VAR_2->native->err_virq, VAR_2);
 VAR_1->release_one_irq(VAR_2, VAR_2->native->err_hwirq);
 FUNC_3(VAR_2->irq_name);
 VAR_2->native->err_virq = 0;
}
