
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function_instance {int dummy; } ;
struct f_uvc_opts {int lock; } ;


 struct f_uvc_opts* FUNC_0 (struct usb_function_instance*) ;
 int FUNC_1 (struct f_uvc_opts*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct usb_function_instance *VAR_0)
{
 struct f_uvc_opts *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(&VAR_1->lock);
 FUNC_1(VAR_1);
}
