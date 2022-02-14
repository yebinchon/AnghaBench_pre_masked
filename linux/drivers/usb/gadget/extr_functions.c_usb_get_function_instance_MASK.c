
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function_instance {int dummy; } ;


 int VAR_0 ;
 struct usb_function_instance* FUNC_0 (int) ;
 int FUNC_1 (struct usb_function_instance*) ;
 int FUNC_2 (struct usb_function_instance*) ;
 int FUNC_3 (char*,char const*) ;
 struct usb_function_instance* FUNC_4 (char const*) ;

struct usb_function_instance *FUNC_5(const char *VAR_1)
{
 struct usb_function_instance *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_4(VAR_1);
 if (!FUNC_1(VAR_2))
  return VAR_2;
 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 != -VAR_0)
  return VAR_2;
 VAR_3 = FUNC_3("usbfunc:%s", VAR_1);
 if (VAR_3 < 0)
  return FUNC_0(VAR_3);
 return FUNC_4(VAR_1);
}
