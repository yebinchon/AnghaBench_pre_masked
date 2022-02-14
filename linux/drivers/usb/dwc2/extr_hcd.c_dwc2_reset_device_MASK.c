
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct usb_device {scalar_t__ speed; } ;
struct TYPE_2__ {int change_speed_quirk; } ;
struct dwc2_hsotg {int dev; TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct usb_hcd*,int ) ;
 struct dwc2_hsotg* FUNC_2 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_3(struct usb_hcd *VAR_5, struct usb_device *VAR_6)
{
 struct dwc2_hsotg *VAR_7 = FUNC_2(VAR_5);

 if (!VAR_7->params.change_speed_quirk)
  return 0;

 if (VAR_6->speed == VAR_3) {
  FUNC_0(VAR_7->dev, "Set speed to high-speed\n");
  FUNC_1(VAR_5, VAR_1);
 } else if ((VAR_6->speed == VAR_2 ||
    VAR_6->speed == VAR_4)) {




  FUNC_0(VAR_7->dev, "Set speed to full-speed\n");
  FUNC_1(VAR_5, VAR_0);
 }

 return 0;
}
