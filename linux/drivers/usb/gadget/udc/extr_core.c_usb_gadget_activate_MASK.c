
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int deactivated; scalar_t__ connected; } ;


 int FUNC_0 (struct usb_gadget*,int) ;
 int FUNC_1 (struct usb_gadget*) ;

int FUNC_2(struct usb_gadget *VAR_0)
{
 int VAR_1 = 0;

 if (!VAR_0->deactivated)
  goto out;

 VAR_0->deactivated = 0;





 if (VAR_0->connected)
  VAR_1 = FUNC_1(VAR_0);

out:
 FUNC_0(VAR_0, VAR_1);

 return VAR_1;
}
