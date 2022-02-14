
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_usb {int intf; } ;
struct usb_device {int dummy; } ;


 struct usb_device* FUNC_0 (int ) ;
 int FUNC_1 (struct usb_device*,char*,size_t) ;

int FUNC_2(struct zd_usb *VAR_0, char *VAR_1, size_t VAR_2)
{
 struct usb_device *VAR_3 = FUNC_0(VAR_0->intf);
 return FUNC_1(VAR_3, VAR_1, VAR_2);
}
