
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {scalar_t__ power; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct usb_usbvision*,int ,int ) ;

int FUNC_2(struct usb_usbvision *VAR_3)
{
 int VAR_4 = 0;

 FUNC_0(VAR_0, "");

 VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);
 if (VAR_4 == 1)
  VAR_3->power = 0;
 FUNC_0(VAR_0, "%s: err_code %d", (VAR_4 != 1) ? "ERROR" : "power is off", VAR_4);
 return VAR_4;
}
