
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function {int dummy; } ;
struct usb_configuration {int dummy; } ;
struct g_audio {int * gadget; } ;


 struct g_audio* FUNC_0 (struct usb_function*) ;
 int FUNC_1 (struct g_audio*) ;
 int FUNC_2 (struct usb_function*) ;

__attribute__((used)) static void FUNC_3(struct usb_configuration *VAR_0, struct usb_function *VAR_1)
{
 struct g_audio *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2);
 FUNC_2(VAR_1);

 VAR_2->gadget = ((void*)0);
}
