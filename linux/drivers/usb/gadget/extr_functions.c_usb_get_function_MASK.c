
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_function_instance {TYPE_1__* fd; } ;
struct usb_function {struct usb_function_instance* fi; } ;
struct TYPE_2__ {struct usb_function* (* alloc_func ) (struct usb_function_instance*) ;} ;


 scalar_t__ FUNC_0 (struct usb_function*) ;
 struct usb_function* FUNC_1 (struct usb_function_instance*) ;

struct usb_function *FUNC_2(struct usb_function_instance *VAR_0)
{
 struct usb_function *VAR_1;

 VAR_1 = VAR_0->fd->alloc_func(VAR_0);
 if (FUNC_0(VAR_1))
  return VAR_1;
 VAR_1->fi = VAR_0;
 return VAR_1;
}
