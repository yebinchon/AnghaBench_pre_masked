
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_endpoint_descriptor {int dummy; } ;




 int FUNC_0 (struct usb_endpoint_descriptor*) ;
 int FUNC_1 (struct usb_endpoint_descriptor*) ;

__attribute__((used)) static bool FUNC_2(struct usb_endpoint_descriptor *VAR_0,
  struct usb_endpoint_descriptor **VAR_1,
  struct usb_endpoint_descriptor **VAR_2,
  struct usb_endpoint_descriptor **VAR_3,
  struct usb_endpoint_descriptor **VAR_4)
{
 switch (FUNC_1(VAR_0)) {
 case 129:
  if (FUNC_0(VAR_0)) {
   if (VAR_1 && !*VAR_1) {
    *VAR_1 = VAR_0;
    break;
   }
  } else {
   if (VAR_2 && !*VAR_2) {
    *VAR_2 = VAR_0;
    break;
   }
  }

  return 0;
 case 128:
  if (FUNC_0(VAR_0)) {
   if (VAR_3 && !*VAR_3) {
    *VAR_3 = VAR_0;
    break;
   }
  } else {
   if (VAR_4 && !*VAR_4) {
    *VAR_4 = VAR_0;
    break;
   }
  }

  return 0;
 default:
  return 0;
 }

 return (!VAR_1 || *VAR_1) && (!VAR_2 || *VAR_2) &&
   (!VAR_3 || *VAR_3) && (!VAR_4 || *VAR_4);
}
