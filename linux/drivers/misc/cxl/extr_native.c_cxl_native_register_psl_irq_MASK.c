
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl_afu {int * psl_irq_name; TYPE_1__* native; int adapter; int dev; } ;
struct TYPE_2__ {int psl_virq; int psl_hwirq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct cxl_afu*,int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;

int FUNC_4(struct cxl_afu *VAR_3)
{
 int VAR_4;

 VAR_3->psl_irq_name = FUNC_2(VAR_1, "cxl-%s",
          FUNC_1(&VAR_3->dev));
 if (!VAR_3->psl_irq_name)
  return -VAR_0;

 if ((VAR_4 = FUNC_0(VAR_3->adapter, VAR_2,
        VAR_3, &VAR_3->native->psl_hwirq, &VAR_3->native->psl_virq,
        VAR_3->psl_irq_name))) {
  FUNC_3(VAR_3->psl_irq_name);
  VAR_3->psl_irq_name = ((void*)0);
 }
 return VAR_4;
}
