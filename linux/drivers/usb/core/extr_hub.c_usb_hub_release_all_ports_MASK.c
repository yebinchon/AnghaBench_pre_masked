
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hub {TYPE_1__** ports; } ;
struct usb_device {int maxchild; } ;
struct usb_dev_state {int dummy; } ;
struct TYPE_2__ {struct usb_dev_state* port_owner; } ;


 struct usb_hub* FUNC_0 (struct usb_device*) ;

void FUNC_1(struct usb_device *VAR_0, struct usb_dev_state *VAR_1)
{
 struct usb_hub *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->maxchild; VAR_3++) {
  if (VAR_2->ports[VAR_3]->port_owner == VAR_1)
   VAR_2->ports[VAR_3]->port_owner = ((void*)0);
 }

}
