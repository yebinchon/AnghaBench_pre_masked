
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* controller; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct device {int dummy; } ;
struct da8xx_ohci_root_hub {scalar_t__ potpgt; } ;


 struct da8xx_ohci_root_hub* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct usb_hcd *VAR_0)
{
 struct device *VAR_1 = VAR_0->self.controller;
 struct da8xx_ohci_root_hub *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 && VAR_2->potpgt)
  return 1;

 return 0;
}
