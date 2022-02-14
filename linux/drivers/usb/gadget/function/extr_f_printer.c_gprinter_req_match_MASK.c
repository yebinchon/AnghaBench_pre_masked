
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_function {int dummy; } ;
struct usb_ctrlrequest {int bRequestType; int bRequest; int wLength; int wValue; int wIndex; } ;
struct printer_dev {int interface; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct printer_dev* FUNC_0 (struct usb_function*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct usb_function *VAR_5,
          const struct usb_ctrlrequest *VAR_6,
          bool VAR_7)
{
 struct printer_dev *VAR_8 = FUNC_0(VAR_5);
 u16 VAR_9 = FUNC_1(VAR_6->wIndex);
 u16 VAR_10 = FUNC_1(VAR_6->wValue);
 u16 VAR_11 = FUNC_1(VAR_6->wLength);

 if (VAR_7)
  return 0;

 if ((VAR_6->bRequestType & VAR_2) != VAR_1 ||
     (VAR_6->bRequestType & VAR_4) != VAR_3)
  return 0;

 switch (VAR_6->bRequest) {
 case 130:
  VAR_9 >>= 8;
  if (VAR_0 & VAR_6->bRequestType)
   break;
  return 0;
 case 129:
  if (!VAR_10 && VAR_11 == 1 &&
      (VAR_0 & VAR_6->bRequestType))
   break;
  return 0;
 case 128:
  if (!VAR_10 && !VAR_11 &&
     !(VAR_0 & VAR_6->bRequestType))
   break;

 default:
  return 0;
 }
 return VAR_9 == VAR_8->interface;
}
