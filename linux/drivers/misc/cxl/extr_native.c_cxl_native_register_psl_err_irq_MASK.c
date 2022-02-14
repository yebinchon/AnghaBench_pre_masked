
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl {TYPE_1__* native; int * irq_name; int dev; } ;
struct TYPE_2__ {int err_hwirq; int err_virq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cxl*,int ,int) ;
 int FUNC_1 (struct cxl*,int ,struct cxl*,int*,int *,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;

int FUNC_5(struct cxl *VAR_4)
{
 int VAR_5;

 VAR_4->irq_name = FUNC_3(VAR_2, "cxl-%s-err",
          FUNC_2(&VAR_4->dev));
 if (!VAR_4->irq_name)
  return -VAR_1;

 if ((VAR_5 = FUNC_1(VAR_4, VAR_3, VAR_4,
           &VAR_4->native->err_hwirq,
           &VAR_4->native->err_virq,
           VAR_4->irq_name))) {
  FUNC_4(VAR_4->irq_name);
  VAR_4->irq_name = ((void*)0);
  return VAR_5;
 }

 FUNC_0(VAR_4, VAR_0, VAR_4->native->err_hwirq & 0xffff);

 return 0;
}
