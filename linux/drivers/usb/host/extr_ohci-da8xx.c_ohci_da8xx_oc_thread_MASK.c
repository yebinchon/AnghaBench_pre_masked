
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct da8xx_ohci_hcd {scalar_t__ vbus_reg; int oc_gpio; TYPE_2__* hcd; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {struct device* controller; } ;
struct TYPE_4__ {TYPE_1__ self; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct da8xx_ohci_hcd *VAR_3 = VAR_2;
 struct device *VAR_4 = VAR_3->hcd->self.controller;
 int VAR_5;

 if (FUNC_1(VAR_3->oc_gpio) &&
     VAR_3->vbus_reg) {
  VAR_5 = FUNC_2(VAR_3->vbus_reg);
  if (VAR_5)
   FUNC_0(VAR_4, "Failed to disable regulator: %d\n", VAR_5);
 }

 return VAR_0;
}
