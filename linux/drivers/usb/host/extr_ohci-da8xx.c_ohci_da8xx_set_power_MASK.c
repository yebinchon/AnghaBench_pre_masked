
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* controller; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct device {int dummy; } ;
struct da8xx_ohci_hcd {int vbus_reg; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct da8xx_ohci_hcd* FUNC_3 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_4(struct usb_hcd *VAR_0, int VAR_1)
{
 struct da8xx_ohci_hcd *VAR_2 = FUNC_3(VAR_0);
 struct device *VAR_3 = VAR_0->self.controller;
 int VAR_4;

 if (!VAR_2->vbus_reg)
  return 0;

 if (VAR_1) {
  VAR_4 = FUNC_2(VAR_2->vbus_reg);
  if (VAR_4) {
   FUNC_0(VAR_3, "Failed to enable regulator: %d\n", VAR_4);
   return VAR_4;
  }
 } else {
  VAR_4 = FUNC_1(VAR_2->vbus_reg);
  if (VAR_4) {
   FUNC_0(VAR_3, "Failed  to disable regulator: %d\n", VAR_4);
   return VAR_4;
  }
 }

 return 0;
}
