
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl_afu {int err_irq_name; int serr_hwirq; int adapter; int serr_virq; } ;
struct TYPE_2__ {int (* release_one_irq ) (int ,int ) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,struct cxl_afu*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct cxl_afu *VAR_1)
{
 FUNC_0(VAR_1->serr_virq, VAR_1);
 VAR_0->release_one_irq(VAR_1->adapter, VAR_1->serr_hwirq);
 FUNC_1(VAR_1->err_irq_name);
}
