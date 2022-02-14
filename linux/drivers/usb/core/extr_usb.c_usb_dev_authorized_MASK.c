
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hub {TYPE_1__** ports; } ;
struct usb_hcd {int dev_policy; } ;
struct usb_device {int portnum; int parent; } ;
struct TYPE_2__ {int connect_type; } ;





 int VAR_0 ;
 struct usb_hub* FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct usb_device *VAR_1, struct usb_hcd *VAR_2)
{
 struct usb_hub *VAR_3;

 if (!VAR_1->parent)
  return 1;

 switch (VAR_2->dev_policy) {
 case 128:
 default:
  return 0;

 case 130:
  return 1;

 case 129:
  VAR_3 = FUNC_0(VAR_1->parent);
  return VAR_3->ports[VAR_1->portnum - 1]->connect_type ==
    VAR_0;
 }
}
