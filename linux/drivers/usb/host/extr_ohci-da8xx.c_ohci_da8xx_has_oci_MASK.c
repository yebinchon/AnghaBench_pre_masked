
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct da8xx_ohci_hcd {scalar_t__ vbus_reg; scalar_t__ oc_gpio; } ;


 struct da8xx_ohci_hcd* FUNC_0 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_1(struct usb_hcd *VAR_0)
{
 struct da8xx_ohci_hcd *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->oc_gpio)
  return 1;

 if (VAR_1->vbus_reg)
  return 1;

 return 0;
}
