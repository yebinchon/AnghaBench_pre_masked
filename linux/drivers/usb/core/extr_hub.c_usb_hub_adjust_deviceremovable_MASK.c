
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct usb_port {int connect_type; int dev; } ;
struct TYPE_5__ {int DeviceRemovable; } ;
struct TYPE_4__ {int* DeviceRemovable; } ;
struct TYPE_6__ {TYPE_2__ ss; TYPE_1__ hs; } ;
struct usb_hub_descriptor {TYPE_3__ u; } ;
struct usb_hub {struct usb_port** ports; } ;
struct usb_device {int maxchild; } ;
typedef enum usb_port_connect_type { ____Placeholder_usb_port_connect_type } usb_port_connect_type ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct usb_device*) ;
 int FUNC_3 (int ) ;
 struct usb_hub* FUNC_4 (struct usb_device*) ;

void FUNC_5(struct usb_device *VAR_1,
  struct usb_hub_descriptor *VAR_2)
{
 struct usb_hub *VAR_3 = FUNC_4(VAR_1);
 enum usb_port_connect_type VAR_4;
 int VAR_5;

 if (!VAR_3)
  return;

 if (!FUNC_2(VAR_1)) {
  for (VAR_5 = 1; VAR_5 <= VAR_1->maxchild; VAR_5++) {
   struct usb_port *VAR_6 = VAR_3->ports[VAR_5 - 1];

   VAR_4 = VAR_6->connect_type;
   if (VAR_4 == VAR_0) {
    u8 VAR_7 = 1 << (VAR_5%8);

    if (!(VAR_2->u.hs.DeviceRemovable[VAR_5/8] & VAR_7)) {
     FUNC_1(&VAR_6->dev, "DeviceRemovable is changed to 1 according to platform information.\n");
     VAR_2->u.hs.DeviceRemovable[VAR_5/8] |= VAR_7;
    }
   }
  }
 } else {
  u16 VAR_8 = FUNC_3(VAR_2->u.ss.DeviceRemovable);

  for (VAR_5 = 1; VAR_5 <= VAR_1->maxchild; VAR_5++) {
   struct usb_port *VAR_9 = VAR_3->ports[VAR_5 - 1];

   VAR_4 = VAR_9->connect_type;
   if (VAR_4 == VAR_0) {
    u16 VAR_10 = 1 << VAR_5;

    if (!(VAR_8 & VAR_10)) {
     FUNC_1(&VAR_9->dev, "DeviceRemovable is changed to 1 according to platform information.\n");
     VAR_8 |= VAR_10;
    }
   }
  }

  VAR_2->u.ss.DeviceRemovable = FUNC_0(VAR_8);
 }
}
