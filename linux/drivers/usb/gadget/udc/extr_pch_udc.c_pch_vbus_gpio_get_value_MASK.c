
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ port; } ;
struct pch_udc_dev {TYPE_1__ vbus_gpio; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct pch_udc_dev *VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0->vbus_gpio.port)
  VAR_1 = FUNC_0(VAR_0->vbus_gpio.port) ? 1 : 0;
 else
  VAR_1 = -1;

 return VAR_1;
}
