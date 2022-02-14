
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {size_t length; int buf; } ;
struct usb_ep {int desc; } ;


 int VAR_0 ;
 int FUNC_0 (size_t,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 size_t FUNC_2 (struct usb_ep*,size_t) ;
 struct usb_request* FUNC_3 (struct usb_ep*,int ) ;
 int FUNC_4 (struct usb_ep*,struct usb_request*) ;

struct usb_request *FUNC_5(struct usb_ep *VAR_1, size_t VAR_2)
{
 struct usb_request *VAR_3;

 VAR_3 = FUNC_3(VAR_1, VAR_0);
 if (VAR_3) {
  VAR_3->length = FUNC_1(VAR_1->desc) ?
   FUNC_2(VAR_1, VAR_2) : VAR_2;
  VAR_3->buf = FUNC_0(VAR_3->length, VAR_0);
  if (!VAR_3->buf) {
   FUNC_4(VAR_1, VAR_3);
   VAR_3 = ((void*)0);
  }
 }
 return VAR_3;
}
