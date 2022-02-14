
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ftdi {int gone_away; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (struct usb_ftdi*) ;
 struct usb_ftdi* FUNC_1 (struct platform_device*) ;

void FUNC_2(struct platform_device *VAR_0)
{
 struct usb_ftdi *VAR_1 = FUNC_1(VAR_0);
 VAR_1->gone_away += 1;
 FUNC_0(VAR_1);
}
