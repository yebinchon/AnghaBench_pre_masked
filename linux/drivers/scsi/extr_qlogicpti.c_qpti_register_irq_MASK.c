
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlogicpti {int qpti_id; int irq; TYPE_1__* qhost; struct platform_device* op; } ;
struct TYPE_4__ {int * irqs; } ;
struct platform_device {TYPE_2__ archdata; } ;
struct TYPE_3__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,int ,char*,struct qlogicpti*) ;

__attribute__((used)) static int FUNC_2(struct qlogicpti *VAR_2)
{
 struct platform_device *VAR_3 = VAR_2->op;

 VAR_2->qhost->irq = VAR_2->irq = VAR_3->archdata.irqs[0];







 if (FUNC_1(VAR_2->irq, VAR_1,
   VAR_0, "QlogicPTI", VAR_2))
  goto fail;

 FUNC_0("qlogicpti%d: IRQ %d ", VAR_2->qpti_id, VAR_2->irq);

 return 0;

fail:
 FUNC_0("qlogicpti%d: Cannot acquire irq line\n", VAR_2->qpti_id);
 return -1;
}
