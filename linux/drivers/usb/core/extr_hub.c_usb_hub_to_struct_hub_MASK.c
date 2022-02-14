
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hub {int dummy; } ;
struct usb_device {TYPE_1__* actconfig; int maxchild; } ;
struct TYPE_2__ {int * interface; } ;


 struct usb_hub* FUNC_0 (int ) ;

struct usb_hub *FUNC_1(struct usb_device *VAR_0)
{
 if (!VAR_0 || !VAR_0->actconfig || !VAR_0->maxchild)
  return ((void*)0);
 return FUNC_0(VAR_0->actconfig->interface[0]);
}
