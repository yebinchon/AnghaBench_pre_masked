
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_request {int actual; int length; int zero; } ;
struct renesas_usb3_request {struct usb_request req; } ;
struct TYPE_2__ {int maxpacket; } ;
struct renesas_usb3_ep {TYPE_1__ ep; } ;



__attribute__((used)) static bool FUNC_0(struct renesas_usb3_ep *VAR_0,
          struct renesas_usb3_request *VAR_1)
{
 struct usb_request *VAR_2 = &VAR_1->req;

 if ((!VAR_2->zero && VAR_2->actual == VAR_2->length) ||
     (VAR_2->actual % VAR_0->ep.maxpacket) || (VAR_2->length == 0))
  return 1;
 else
  return 0;
}
