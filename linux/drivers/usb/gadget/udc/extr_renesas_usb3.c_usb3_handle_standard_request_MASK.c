
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ctrlrequest {int bRequestType; int bRequest; } ;
struct renesas_usb3 {int dummy; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct renesas_usb3*) ;
 int FUNC_1 (struct renesas_usb3*,struct usb_ctrlrequest*,int) ;
 int FUNC_2 (struct renesas_usb3*,struct usb_ctrlrequest*) ;
 int FUNC_3 (struct renesas_usb3*,struct usb_ctrlrequest*) ;
 int FUNC_4 (struct renesas_usb3*,struct usb_ctrlrequest*) ;
 int FUNC_5 (struct renesas_usb3*,struct usb_ctrlrequest*) ;

__attribute__((used)) static bool FUNC_6(struct renesas_usb3 *VAR_2,
      struct usb_ctrlrequest *VAR_3)
{
 bool VAR_4 = 0;
 bool VAR_5 = 0;

 if ((VAR_3->bRequestType & VAR_0) == VAR_1) {
  switch (VAR_3->bRequest) {
  case 132:
   VAR_5 = FUNC_3(VAR_2, VAR_3);
   VAR_4 = 1;
   break;
  case 133:
   VAR_5 = FUNC_2(VAR_2, VAR_3);
   VAR_4 = 1;
   break;
  case 134:
   VAR_5 = FUNC_1(VAR_2, VAR_3, 0);
   VAR_4 = 1;
   break;
  case 130:
   VAR_5 = FUNC_1(VAR_2, VAR_3, 1);
   VAR_4 = 1;
   break;
  case 128:
   VAR_5 = FUNC_5(VAR_2, VAR_3);
   VAR_4 = 1;
   break;
  case 129:

   VAR_5 = 1;
   VAR_4 = 1;
   break;
  case 131:
   FUNC_4(VAR_2, VAR_3);
   break;
  default:
   break;
  }
 }

 if (VAR_5)
  FUNC_0(VAR_2);

 return VAR_4;
}
