
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hub {TYPE_1__** ports; } ;
struct usb_device {int maxchild; } ;
struct TYPE_2__ {struct usb_device* child; } ;


 struct usb_hub* FUNC_0 (struct usb_device*) ;

struct usb_device *FUNC_1(struct usb_device *VAR_0,
  int VAR_1)
{
 struct usb_hub *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1 < 1 || VAR_1 > VAR_0->maxchild)
  return ((void*)0);
 return VAR_2->ports[VAR_1 - 1]->child;
}
