
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device* controller; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int notifier_call; } ;
struct da8xx_ohci_hcd {TYPE_2__ nb; scalar_t__ vbus_reg; int oc_gpio; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (scalar_t__,TYPE_2__*) ;
 int VAR_0 ;
 struct da8xx_ohci_hcd* FUNC_2 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_3(struct usb_hcd *VAR_1)
{
 struct da8xx_ohci_hcd *VAR_2 = FUNC_2(VAR_1);
 struct device *VAR_3 = VAR_1->self.controller;
 int VAR_4 = 0;

 if (!VAR_2->oc_gpio && VAR_2->vbus_reg) {
  VAR_2->nb.notifier_call = VAR_0;
  VAR_4 = FUNC_1(VAR_2->vbus_reg,
      &VAR_2->nb);
 }

 if (VAR_4)
  FUNC_0(VAR_3, "Failed to register notifier: %d\n", VAR_4);

 return VAR_4;
}
