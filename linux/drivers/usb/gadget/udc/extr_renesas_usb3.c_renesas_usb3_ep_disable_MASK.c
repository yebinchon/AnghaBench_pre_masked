
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ep {int dummy; } ;
struct renesas_usb3_request {int dummy; } ;
struct renesas_usb3_ep {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct renesas_usb3_ep*) ;
 int FUNC_1 (struct renesas_usb3_ep*,struct renesas_usb3_request*) ;
 struct renesas_usb3_request* FUNC_2 (struct renesas_usb3_ep*) ;
 int FUNC_3 (struct renesas_usb3_ep*,struct renesas_usb3_request*,int ) ;
 struct renesas_usb3_ep* FUNC_4 (struct usb_ep*) ;

__attribute__((used)) static int FUNC_5(struct usb_ep *VAR_1)
{
 struct renesas_usb3_ep *VAR_2 = FUNC_4(VAR_1);
 struct renesas_usb3_request *VAR_3;

 do {
  VAR_3 = FUNC_2(VAR_2);
  if (!VAR_3)
   break;
  FUNC_1(VAR_2, VAR_3);
  FUNC_3(VAR_2, VAR_3, -VAR_0);
 } while (1);

 return FUNC_0(VAR_2);
}
