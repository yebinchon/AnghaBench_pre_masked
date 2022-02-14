
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl_irq_info {int dummy; } ;
struct cxl_context {int pe; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int,struct cxl_context*,struct cxl_irq_info*) ;
 int FUNC_2 (struct cxl_context*,struct cxl_irq_info*) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct cxl_context *VAR_3 = VAR_2;
 struct cxl_irq_info VAR_4;
 int VAR_5;

 FUNC_3("%d: received PSL interrupt %i\n", VAR_3->pe, VAR_1);
 VAR_5 = FUNC_2(VAR_3, &VAR_4);
 if (VAR_5) {
  FUNC_0(1, "Unable to get IRQ info: %i\n", VAR_5);
  return VAR_0;
 }

 VAR_5 = FUNC_1(VAR_1, VAR_3, &VAR_4);
 return VAR_5;
}
