
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct usb_ss_ep_comp_descriptor {int bmAttributes; } ;
struct usb_gadget {int dummy; } ;
struct TYPE_2__ {int type_bulk; int type_int; int type_iso; int dir_out; int dir_in; } ;
struct usb_ep {scalar_t__ maxpacket_limit; int max_streams; TYPE_1__ caps; scalar_t__ claimed; } ;
struct usb_endpoint_descriptor {int dummy; } ;






 int FUNC_0 (struct usb_gadget*) ;
 int FUNC_1 (struct usb_gadget*) ;
 scalar_t__ FUNC_2 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_3 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_4 (struct usb_endpoint_descriptor*) ;
 int FUNC_5 (struct usb_endpoint_descriptor*) ;
 int FUNC_6 (struct usb_endpoint_descriptor*) ;

int FUNC_7(struct usb_gadget *VAR_0,
  struct usb_ep *VAR_1, struct usb_endpoint_descriptor *VAR_2,
  struct usb_ss_ep_comp_descriptor *VAR_3)
{
 u8 VAR_4;
 u16 VAR_5;
 int VAR_6 = 0;


 if (VAR_1->claimed)
  return 0;

 VAR_4 = FUNC_6(VAR_2);
 VAR_5 = FUNC_4(VAR_2);

 if (FUNC_2(VAR_2) && !VAR_1->caps.dir_in)
  return 0;
 if (FUNC_3(VAR_2) && !VAR_1->caps.dir_out)
  return 0;

 if (VAR_5 > VAR_1->maxpacket_limit)
  return 0;


 if (!FUNC_0(VAR_0) && FUNC_5(VAR_2) > 1)
  return 0;

 switch (VAR_4) {
 case 130:

  return 0;
 case 128:
  if (!VAR_1->caps.type_iso)
   return 0;

  if (!FUNC_0(VAR_0) && VAR_5 > 1023)
   return 0;
  break;
 case 131:
  if (!VAR_1->caps.type_bulk)
   return 0;
  if (VAR_3 && FUNC_1(VAR_0)) {




   VAR_6 = VAR_3->bmAttributes & 0x1f;
   if (VAR_6 > VAR_1->max_streams)
    return 0;
  }
  break;
 case 129:



  if (!VAR_1->caps.type_int && !VAR_1->caps.type_bulk)
   return 0;

  if (!FUNC_0(VAR_0) && VAR_5 > 64)
   return 0;
  break;
 }

 return 1;
}
