
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl_afu {int * err_irq_name; int serr_hwirq; int adapter; int serr_virq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,struct cxl_afu*,int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int * FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct cxl_afu *VAR_3)
{
 VAR_3->err_irq_name = FUNC_2(VAR_1, "cxl-%s-err",
          FUNC_1(&VAR_3->dev));
 if (!VAR_3->err_irq_name)
  return -VAR_0;

 if (!(VAR_3->serr_virq = FUNC_0(VAR_3->adapter, VAR_3->serr_hwirq,
     VAR_2, VAR_3, VAR_3->err_irq_name))) {
  FUNC_3(VAR_3->err_irq_name);
  VAR_3->err_irq_name = ((void*)0);
  return -VAR_0;
 }

 return 0;
}
