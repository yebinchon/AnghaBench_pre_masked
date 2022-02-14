
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {scalar_t__ status; int (* complete ) (struct usb_ep*,struct usb_request*) ;} ;
struct usb_ep {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct usb_ep*,struct usb_request*) ;
 int FUNC_2 (struct usb_ep*,struct usb_request*,int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct usb_ep *VAR_1,
  struct usb_request *VAR_2)
{
 if (FUNC_0(VAR_2->status == 0))
  FUNC_3(VAR_0);

 FUNC_2(VAR_1, VAR_2, 0);

 VAR_2->complete(VAR_1, VAR_2);
}
