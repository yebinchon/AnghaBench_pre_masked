
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct usb_hub {TYPE_5__* descriptor; TYPE_1__** ports; } ;
struct usb_device {int portnum; void* removable; struct usb_device* parent; } ;
struct TYPE_8__ {int* DeviceRemovable; } ;
struct TYPE_7__ {int DeviceRemovable; } ;
struct TYPE_9__ {TYPE_3__ hs; TYPE_2__ ss; } ;
struct TYPE_10__ {TYPE_4__ u; int wHubCharacteristics; } ;
struct TYPE_6__ {int connect_type; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;



 scalar_t__ FUNC_0 (struct usb_device*) ;
 int FUNC_1 (int ) ;
 struct usb_hub* FUNC_2 (struct usb_device*) ;

__attribute__((used)) static void FUNC_3(struct usb_device *VAR_3)
{
 struct usb_device *VAR_4 = VAR_3->parent;
 struct usb_hub *VAR_5;
 u8 VAR_6 = VAR_3->portnum;
 u16 VAR_7;
 bool VAR_8 = 1;

 if (!VAR_4)
  return;

 VAR_5 = FUNC_2(VAR_3->parent);





 switch (VAR_5->ports[VAR_3->portnum - 1]->connect_type) {
 case 129:
  VAR_3->removable = VAR_2;
  return;
 case 130:
 case 128:
  VAR_3->removable = VAR_1;
  return;
 default:
  break;
 }





 VAR_7 = FUNC_1(VAR_5->descriptor->wHubCharacteristics);

 if (!(VAR_7 & VAR_0))
  return;

 if (FUNC_0(VAR_4)) {
  if (FUNC_1(VAR_5->descriptor->u.ss.DeviceRemovable)
    & (1 << VAR_6))
   VAR_8 = 0;
 } else {
  if (VAR_5->descriptor->u.hs.DeviceRemovable[VAR_6 / 8] & (1 << (VAR_6 % 8)))
   VAR_8 = 0;
 }

 if (VAR_8)
  VAR_3->removable = VAR_2;
 else
  VAR_3->removable = VAR_1;

}
