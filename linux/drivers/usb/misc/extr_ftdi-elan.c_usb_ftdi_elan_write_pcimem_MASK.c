
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct usb_ftdi {int dummy; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (struct usb_ftdi*,int,int ,int ) ;
 struct usb_ftdi* FUNC_1 (struct platform_device*) ;

int FUNC_2(struct platform_device *VAR_0, int VAR_1,
          u8 VAR_2, u32 VAR_3)
{
 struct usb_ftdi *VAR_4 = FUNC_1(VAR_0);
 return FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);
}
