
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct xhci_hcd {TYPE_2__** devs; } ;
struct usb_hcd {scalar_t__ speed; } ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;
struct TYPE_4__ {scalar_t__ fake_port; TYPE_1__* udev; } ;
struct TYPE_3__ {int speed; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(struct usb_hcd *VAR_3, struct xhci_hcd *VAR_4,
  u16 VAR_5)
{
 int VAR_6;
 int VAR_7;
 enum usb_device_speed VAR_8;

 VAR_6 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (!VAR_4->devs[VAR_7] || !VAR_4->devs[VAR_7]->udev)
   continue;
  VAR_8 = VAR_4->devs[VAR_7]->udev->speed;
  if (((VAR_8 >= VAR_2) == (VAR_3->speed >= VAR_0))
    && VAR_4->devs[VAR_7]->fake_port == VAR_5) {
   VAR_6 = VAR_7;
   break;
  }
 }

 return VAR_6;
}
