
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ port; scalar_t__ intr; } ;
struct pch_udc_dev {TYPE_1__ vbus_gpio; } ;


 int FUNC_0 (scalar_t__,struct pch_udc_dev*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct pch_udc_dev *VAR_0)
{
 if (VAR_0->vbus_gpio.intr)
  FUNC_0(VAR_0->vbus_gpio.intr, VAR_0);

 if (VAR_0->vbus_gpio.port)
  FUNC_1(VAR_0->vbus_gpio.port);
}
