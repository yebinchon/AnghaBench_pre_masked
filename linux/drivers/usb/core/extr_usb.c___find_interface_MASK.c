
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {scalar_t__ minor; } ;
struct find_interface_arg {scalar_t__ drv; scalar_t__ minor; } ;
struct device {scalar_t__ driver; } ;


 int FUNC_0 (struct device*) ;
 struct usb_interface* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, const void *VAR_1)
{
 const struct find_interface_arg *VAR_2 = VAR_1;
 struct usb_interface *VAR_3;

 if (!FUNC_0(VAR_0))
  return 0;

 if (VAR_0->driver != VAR_2->drv)
  return 0;
 VAR_3 = FUNC_1(VAR_0);
 return VAR_3->minor == VAR_2->minor;
}
