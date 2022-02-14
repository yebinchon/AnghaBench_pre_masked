
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl_irq_info {int dsisr; } ;
struct cxl_afu {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct cxl_afu*,int ) ;
 int FUNC_1 (struct cxl_afu*,int ,int ) ;

irqreturn_t FUNC_2(struct cxl_afu *VAR_4, struct cxl_irq_info *VAR_5)
{
 if (FUNC_0(VAR_4, VAR_5->dsisr))
  FUNC_1(VAR_4, VAR_0, VAR_2);
 else
  FUNC_1(VAR_4, VAR_0, VAR_1);

 return VAR_3;
}
