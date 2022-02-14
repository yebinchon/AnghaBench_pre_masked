
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* parent; } ;
struct usb_port {scalar_t__ location; TYPE_2__ dev; } ;
struct usb_hub {struct usb_port** ports; } ;
struct usb_hcd {struct usb_hcd* shared_hcd; } ;
struct usb_device {int maxchild; int bus; } ;
struct TYPE_3__ {int parent; } ;


 struct usb_hcd* FUNC_0 (int ) ;
 int FUNC_1 (struct usb_port*,struct usb_port*) ;
 struct usb_device* FUNC_2 (int ) ;
 struct usb_hub* FUNC_3 (struct usb_device*) ;

__attribute__((used)) static int FUNC_4(struct usb_device *VAR_0, void *VAR_1)
{
 int VAR_2;
 struct usb_hcd *VAR_3, *VAR_4;
 struct usb_port *VAR_5 = VAR_1, *VAR_6;
 struct usb_hub *VAR_7 = FUNC_3(VAR_0);
 struct usb_device *VAR_8 = FUNC_2(VAR_5->dev.parent->parent);

 if (!VAR_7)
  return 0;

 VAR_3 = FUNC_0(VAR_8->bus);
 VAR_4 = FUNC_0(VAR_0->bus);

 if (VAR_4 != VAR_3->shared_hcd)
  return 0;

 for (VAR_2 = 1; VAR_2 <= VAR_0->maxchild; VAR_2++) {
  VAR_6 = VAR_7->ports[VAR_2 - 1];
  if (VAR_6 && VAR_6->location == VAR_5->location) {
   FUNC_1(VAR_5, VAR_6);
   return 1;
  }
 }

 return 0;
}
