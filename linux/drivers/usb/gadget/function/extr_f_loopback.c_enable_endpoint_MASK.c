
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ep {struct f_loopback* driver_data; } ;
struct usb_composite_dev {int gadget; } ;
struct f_loopback {int function; } ;


 int FUNC_0 (int ,int *,struct usb_ep*) ;
 int FUNC_1 (struct usb_ep*) ;

__attribute__((used)) static int FUNC_2(struct usb_composite_dev *VAR_0,
      struct f_loopback *VAR_1, struct usb_ep *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0->gadget, &(VAR_1->function), VAR_2);
 if (VAR_3)
  goto out;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 < 0)
  goto out;
 VAR_2->driver_data = VAR_1;
 VAR_3 = 0;

out:
 return VAR_3;
}
