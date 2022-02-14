
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function {int (* free_func ) (struct usb_function*) ;} ;


 int FUNC_0 (struct usb_function*) ;

void FUNC_1(struct usb_function *VAR_0)
{
 if (!VAR_0)
  return;

 VAR_0->free_func(VAR_0);
}
