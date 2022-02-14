
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bDeviceClass; } ;
struct usb_device {int quirks; int persist_enabled; TYPE_1__ descriptor; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (struct usb_device*) ;
 int VAR_2 ;
 int FUNC_2 (struct usb_device*) ;
 int FUNC_3 (struct usb_device*,int ) ;
 int VAR_3 ;

void FUNC_4(struct usb_device *VAR_4)
{
 VAR_4->quirks = FUNC_3(VAR_4, VAR_3);





 if (FUNC_1(VAR_4))
  VAR_4->quirks |= FUNC_3(VAR_4,
    VAR_2);

 VAR_4->quirks ^= FUNC_2(VAR_4);

 if (VAR_4->quirks)
  FUNC_0(&VAR_4->dev, "USB quirks for this device: %x\n",
   VAR_4->quirks);






 if (VAR_4->descriptor.bDeviceClass == VAR_0)
  VAR_4->persist_enabled = 1;

}
