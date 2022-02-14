
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct da8xx_ohci_hcd {int vbus_reg; scalar_t__ oc_gpio; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,unsigned int*) ;
 struct da8xx_ohci_hcd* FUNC_2 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_3(struct usb_hcd *VAR_1)
{
 struct da8xx_ohci_hcd *VAR_2 = FUNC_2(VAR_1);
 unsigned int VAR_3;
 int VAR_4;

 if (VAR_2->oc_gpio)
  return FUNC_0(VAR_2->oc_gpio);

 if (!VAR_2->vbus_reg)
  return 0;

 VAR_4 = FUNC_1(VAR_2->vbus_reg, &VAR_3);
 if (VAR_4)
  return VAR_4;

 if (VAR_3 & VAR_0)
  return 1;

 return 0;
}
