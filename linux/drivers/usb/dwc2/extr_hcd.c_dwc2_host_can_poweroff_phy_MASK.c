
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct dwc2_hsotg {int dev; } ;
struct TYPE_3__ {struct usb_device* root_hub; } ;
struct TYPE_4__ {TYPE_1__ self; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct dwc2_hsotg*) ;
 scalar_t__ FUNC_2 (struct usb_device*) ;

bool FUNC_3(struct dwc2_hsotg *VAR_0)
{
 struct usb_device *VAR_1 = FUNC_1(VAR_0)->self.root_hub;


 if (!FUNC_0(VAR_0->dev))
  return 1;





 if (FUNC_2(VAR_1))
  return 0;


 return 1;
}
