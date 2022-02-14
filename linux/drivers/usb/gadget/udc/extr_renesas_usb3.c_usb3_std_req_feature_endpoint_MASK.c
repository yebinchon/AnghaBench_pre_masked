
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ctrlrequest {int wValue; int wIndex; } ;
struct renesas_usb3_request {int dummy; } ;
struct renesas_usb3_ep {int started; } ;
struct renesas_usb3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct renesas_usb3_ep* FUNC_1 (struct renesas_usb3*,int) ;
 struct renesas_usb3_request* FUNC_2 (struct renesas_usb3_ep*) ;
 int FUNC_3 (struct renesas_usb3_ep*,int,int) ;
 int FUNC_4 (struct renesas_usb3_ep*,struct renesas_usb3_request*) ;

__attribute__((used)) static bool FUNC_5(struct renesas_usb3 *VAR_2,
       struct usb_ctrlrequest *VAR_3,
       bool VAR_4)
{
 int VAR_5 = FUNC_0(VAR_3->wIndex) & VAR_1;
 struct renesas_usb3_ep *VAR_6;
 struct renesas_usb3_request *VAR_7;

 if (FUNC_0(VAR_3->wValue) != VAR_0)
  return 1;

 VAR_6 = FUNC_1(VAR_2, VAR_5);
 FUNC_3(VAR_6, VAR_4, 1);


 if (!VAR_4) {
  VAR_6->started = 0;
  VAR_7 = FUNC_2(VAR_6);
  if (VAR_7)
   FUNC_4(VAR_6, VAR_7);
 }

 return 0;
}
