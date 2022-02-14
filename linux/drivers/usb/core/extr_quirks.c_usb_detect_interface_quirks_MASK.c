
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_device {int quirks; int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct usb_device*,int ) ;
 int VAR_0 ;

void FUNC_2(struct usb_device *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2 == 0)
  return;

 FUNC_0(&VAR_1->dev, "USB interface quirks for this device: %x\n",
  VAR_2);
 VAR_1->quirks |= VAR_2;
}
