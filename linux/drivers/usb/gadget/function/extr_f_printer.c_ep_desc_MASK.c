
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int speed; } ;
struct usb_endpoint_descriptor {int dummy; } ;





__attribute__((used)) static inline struct usb_endpoint_descriptor *FUNC_0(struct usb_gadget *VAR_0,
     struct usb_endpoint_descriptor *VAR_1,
     struct usb_endpoint_descriptor *VAR_2,
     struct usb_endpoint_descriptor *VAR_3)
{
 switch (VAR_0->speed) {
 case 128:
  return VAR_3;
 case 129:
  return VAR_2;
 default:
  return VAR_1;
 }
}
