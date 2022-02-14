
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hub {TYPE_1__** ports; } ;
struct usb_device {scalar_t__ state; int portnum; int parent; } ;
struct TYPE_2__ {int port_owner; } ;


 scalar_t__ VAR_0 ;
 struct usb_hub* FUNC_0 (int ) ;

bool FUNC_1(struct usb_device *VAR_1)
{
 struct usb_hub *VAR_2;

 if (VAR_1->state == VAR_0 || !VAR_1->parent)
  return 0;
 VAR_2 = FUNC_0(VAR_1->parent);
 return !!VAR_2->ports[VAR_1->portnum - 1]->port_owner;
}
