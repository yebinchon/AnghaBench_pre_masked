
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hub {TYPE_1__** ports; } ;
struct usb_device {scalar_t__ state; unsigned int maxchild; } ;
struct usb_dev_state {int dummy; } ;
struct TYPE_2__ {struct usb_dev_state* port_owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct usb_hub* FUNC_0 (struct usb_device*) ;

__attribute__((used)) static int FUNC_1(struct usb_device *VAR_3, unsigned VAR_4,
  struct usb_dev_state ***VAR_5)
{
 struct usb_hub *VAR_6 = FUNC_0(VAR_3);

 if (VAR_3->state == VAR_2)
  return -VAR_1;
 if (VAR_4 == 0 || VAR_4 > VAR_3->maxchild)
  return -VAR_0;




 *VAR_5 = &(VAR_6->ports[VAR_4 - 1]->port_owner);
 return 0;
}
