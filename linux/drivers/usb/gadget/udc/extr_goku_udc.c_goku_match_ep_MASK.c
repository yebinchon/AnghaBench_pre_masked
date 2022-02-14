
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ss_ep_comp_descriptor {int dummy; } ;
struct usb_gadget {int dummy; } ;
struct usb_ep {int dummy; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct goku_udc {TYPE_1__* ep; } ;
struct TYPE_2__ {struct usb_ep ep; } ;




 struct goku_udc* FUNC_0 (struct usb_gadget*) ;
 int FUNC_1 (struct usb_endpoint_descriptor*) ;
 int FUNC_2 (struct usb_endpoint_descriptor*) ;
 int FUNC_3 (struct usb_gadget*,struct usb_ep*,struct usb_endpoint_descriptor*,struct usb_ss_ep_comp_descriptor*) ;

__attribute__((used)) static struct usb_ep *FUNC_4(struct usb_gadget *VAR_0,
  struct usb_endpoint_descriptor *VAR_1,
  struct usb_ss_ep_comp_descriptor *VAR_2)
{
 struct goku_udc *VAR_3 = FUNC_0(VAR_0);
 struct usb_ep *VAR_4;

 switch (FUNC_2(VAR_1)) {
 case 128:

  VAR_4 = &VAR_3->ep[3].ep;
  if (FUNC_3(VAR_0, VAR_4, VAR_1, VAR_2))
   return VAR_4;
  break;
 case 129:
  if (FUNC_1(VAR_1)) {

   VAR_4 = &VAR_3->ep[2].ep;
   if (FUNC_3(VAR_0, VAR_4, VAR_1, VAR_2))
    return VAR_4;
  }
  break;
 default:
                ;
 }

 return ((void*)0);
}
