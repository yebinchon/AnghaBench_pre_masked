
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ctrlrequest {int bRequestType; } ;
struct renesas_usb3 {int dummy; } ;





 int VAR_0 ;
 int FUNC_0 (struct renesas_usb3*) ;
 int FUNC_1 (struct renesas_usb3*,struct usb_ctrlrequest*,int) ;
 int FUNC_2 (struct renesas_usb3*,struct usb_ctrlrequest*,int) ;

__attribute__((used)) static bool FUNC_3(struct renesas_usb3 *VAR_1,
     struct usb_ctrlrequest *VAR_2, bool VAR_3)
{
 bool VAR_4 = 0;

 switch (VAR_2->bRequestType & VAR_0) {
 case 130:
  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
  break;
 case 128:
  break;
 case 129:
  VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
  break;
 default:
  VAR_4 = 1;
  break;
 }

 if (!VAR_4)
  FUNC_0(VAR_1);

 return VAR_4;
}
