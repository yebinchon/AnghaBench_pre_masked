
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {scalar_t__ authorized; } ;


 int FUNC_0 (struct usb_device*) ;
 int FUNC_1 (struct usb_device*,int) ;
 int FUNC_2 (struct usb_device*) ;

int FUNC_3(struct usb_device *VAR_0)
{
 FUNC_0(VAR_0);
 if (VAR_0->authorized == 0)
  goto out_unauthorized;

 VAR_0->authorized = 0;
 FUNC_1(VAR_0, -1);

out_unauthorized:
 FUNC_2(VAR_0);
 return 0;
}
