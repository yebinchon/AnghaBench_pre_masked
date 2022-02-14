
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ss_ep_comp_descriptor {int dummy; } ;
struct usb_gadget {int dummy; } ;
struct usb_ep {int dummy; } ;
struct usb_endpoint_descriptor {int dummy; } ;
typedef int name ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct usb_ep* FUNC_0 (struct usb_gadget*,char*) ;
 int FUNC_1 (char*,int,char*,int,char*) ;
 scalar_t__ FUNC_2 (struct usb_endpoint_descriptor*) ;
 int FUNC_3 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_4 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_5 (struct usb_gadget*,struct usb_ep*,struct usb_endpoint_descriptor*,struct usb_ss_ep_comp_descriptor*) ;

__attribute__((used)) static struct usb_ep *FUNC_6(struct usb_gadget *VAR_2,
  struct usb_endpoint_descriptor *VAR_3,
  struct usb_ss_ep_comp_descriptor *VAR_4)
{
 char VAR_5[8];
 struct usb_ep *VAR_6;

 if (FUNC_4(VAR_3) == VAR_1) {

  VAR_6 = FUNC_0(VAR_2, "ep-e");
  if (VAR_6 && FUNC_5(VAR_2, VAR_6, VAR_3, VAR_4))
   return VAR_6;
  VAR_6 = FUNC_0(VAR_2, "ep-f");
  if (VAR_6 && FUNC_5(VAR_2, VAR_6, VAR_3, VAR_4))
   return VAR_6;
 }





 if (FUNC_4(VAR_3) == VAR_1 &&
     FUNC_2(VAR_3)) {
  VAR_6 = FUNC_0(VAR_2, "ep2in");
  if (VAR_6 && FUNC_5(VAR_2, VAR_6, VAR_3, VAR_4))
   return VAR_6;
  VAR_6 = FUNC_0(VAR_2, "ep4in");
  if (VAR_6 && FUNC_5(VAR_2, VAR_6, VAR_3, VAR_4))
   return VAR_6;
 } else if (FUNC_4(VAR_3) == VAR_1 &&
     !FUNC_2(VAR_3)) {
  VAR_6 = FUNC_0(VAR_2, "ep1out");
  if (VAR_6 && FUNC_5(VAR_2, VAR_6, VAR_3, VAR_4))
   return VAR_6;
  VAR_6 = FUNC_0(VAR_2, "ep3out");
  if (VAR_6 && FUNC_5(VAR_2, VAR_6, VAR_3, VAR_4))
   return VAR_6;
 } else if (FUNC_4(VAR_3) != VAR_0 &&
     FUNC_2(VAR_3)) {
  VAR_6 = FUNC_0(VAR_2, "ep1in");
  if (VAR_6 && FUNC_5(VAR_2, VAR_6, VAR_3, VAR_4))
   return VAR_6;
  VAR_6 = FUNC_0(VAR_2, "ep3in");
  if (VAR_6 && FUNC_5(VAR_2, VAR_6, VAR_3, VAR_4))
   return VAR_6;
 } else if (FUNC_4(VAR_3) != VAR_0 &&
     !FUNC_2(VAR_3)) {
  VAR_6 = FUNC_0(VAR_2, "ep2out");
  if (VAR_6 && FUNC_5(VAR_2, VAR_6, VAR_3, VAR_4))
   return VAR_6;
  VAR_6 = FUNC_0(VAR_2, "ep4out");
  if (VAR_6 && FUNC_5(VAR_2, VAR_6, VAR_3, VAR_4))
   return VAR_6;
 }


 FUNC_1(VAR_5, sizeof(VAR_5), "ep%d%s", FUNC_3(VAR_3),
   FUNC_2(VAR_3) ? "in" : "out");
 VAR_6 = FUNC_0(VAR_2, VAR_5);
 if (VAR_6 && FUNC_5(VAR_2, VAR_6, VAR_3, VAR_4))
  return VAR_6;

 return ((void*)0);
}
