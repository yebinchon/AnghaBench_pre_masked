
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct usb_device {TYPE_2__* parent; } ;
struct TYPE_3__ {int change_speed_quirk; } ;
struct dwc2_hsotg {int dev; TYPE_1__ params; } ;
struct TYPE_4__ {scalar_t__ speed; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct usb_hcd*,int ) ;
 struct dwc2_hsotg* FUNC_2 (struct usb_hcd*) ;

__attribute__((used)) static void FUNC_3(struct usb_hcd *VAR_3, struct usb_device *VAR_4)
{
 struct dwc2_hsotg *VAR_5 = FUNC_2(VAR_3);

 if (!VAR_5->params.change_speed_quirk)
  return;




 if (VAR_4->parent && VAR_4->parent->speed > VAR_2 &&
     VAR_4->parent->speed < VAR_1) {
  FUNC_0(VAR_5->dev, "Set speed to default high-speed\n");
  FUNC_1(VAR_3, VAR_0);
 }
}
