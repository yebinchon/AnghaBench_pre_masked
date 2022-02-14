
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl_afu {scalar_t__ serr_virq; int err_irq_name; int serr_hwirq; int adapter; } ;
struct TYPE_2__ {int (* release_one_irq ) (int ,int ) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct cxl_afu*,int ,int) ;
 int FUNC_1 (scalar_t__,struct cxl_afu*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(struct cxl_afu *VAR_2)
{
 if (VAR_2->serr_virq == 0 ||
     VAR_2->serr_virq != FUNC_2(((void*)0), VAR_2->serr_hwirq))
  return;

 FUNC_0(VAR_2, VAR_0, 0x0000000000000000);
 FUNC_1(VAR_2->serr_virq, VAR_2);
 VAR_1->release_one_irq(VAR_2->adapter, VAR_2->serr_hwirq);
 FUNC_3(VAR_2->err_irq_name);
 VAR_2->serr_virq = 0;
}
