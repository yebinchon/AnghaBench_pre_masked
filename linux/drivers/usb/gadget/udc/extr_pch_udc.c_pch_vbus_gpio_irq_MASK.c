
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq_work_fall; int irq_work_rise; int intr; int port; } ;
struct pch_udc_dev {TYPE_1__ vbus_gpio; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pch_udc_dev*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct pch_udc_dev *VAR_4 = (struct pch_udc_dev *)VAR_3;

 if (!VAR_4->vbus_gpio.port || !VAR_4->vbus_gpio.intr)
  return VAR_1;

 if (FUNC_0(VAR_4))
  FUNC_1(&VAR_4->vbus_gpio.irq_work_rise);
 else
  FUNC_1(&VAR_4->vbus_gpio.irq_work_fall);

 return VAR_0;
}
