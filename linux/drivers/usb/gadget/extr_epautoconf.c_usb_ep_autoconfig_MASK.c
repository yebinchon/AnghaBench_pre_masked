
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_gadget {int dummy; } ;
struct usb_ep {int maxpacket_limit; } ;
struct usb_endpoint_descriptor {int bmAttributes; int wMaxPacketSize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct usb_ep* FUNC_1 (struct usb_gadget*,struct usb_endpoint_descriptor*,int *) ;

struct usb_ep *FUNC_2(
 struct usb_gadget *VAR_2,
 struct usb_endpoint_descriptor *VAR_3
)
{
 struct usb_ep *VAR_4;
 u8 VAR_5;

 VAR_4 = FUNC_1(VAR_2, VAR_3, ((void*)0));
 if (!VAR_4)
  return ((void*)0);

 VAR_5 = VAR_3->bmAttributes & VAR_0;


 if (VAR_5 == VAR_1) {
  int VAR_6 = VAR_4->maxpacket_limit;


  if (VAR_6 > 64)
   VAR_6 = 64;
  VAR_3->wMaxPacketSize = FUNC_0(VAR_6);
 }

 return VAR_4;
}
