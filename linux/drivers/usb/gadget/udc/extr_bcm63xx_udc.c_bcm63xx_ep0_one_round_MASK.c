
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int dummy; } ;
struct bcm63xx_udc {int ep0state; struct usb_request* ep0_reply; int * ep0_request; int * iudma; int ep0_req_completed; scalar_t__ ep0_req_shutdown; scalar_t__ ep0_req_reset; } ;
typedef enum bcm63xx_ep0_state { ____Placeholder_bcm63xx_ep0_state } bcm63xx_ep0_state ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct bcm63xx_udc*,struct usb_request*,int ) ;
 int FUNC_1 (struct bcm63xx_udc*) ;
 int FUNC_2 (struct bcm63xx_udc*,size_t,int ) ;
 int FUNC_3 (struct bcm63xx_udc*,size_t,struct usb_request*) ;
 int FUNC_4 (struct bcm63xx_udc*,int) ;
 int FUNC_5 (struct bcm63xx_udc*) ;
 int FUNC_6 (struct bcm63xx_udc*,int *) ;

__attribute__((used)) static int FUNC_7(struct bcm63xx_udc *VAR_4)
{
 enum bcm63xx_ep0_state VAR_5 = VAR_4->ep0state;
 bool VAR_6 = VAR_4->ep0_req_reset || VAR_4->ep0_req_shutdown;

 switch (VAR_4->ep0state) {
 case 129:

  FUNC_2(VAR_4, VAR_2,
          VAR_0);
  VAR_5 = 136;
  break;
 case 136:
  return FUNC_1(VAR_4);
 case 134:
  if (VAR_4->ep0_reply) {
   FUNC_3(VAR_4, VAR_3,
           VAR_4->ep0_reply);
   VAR_5 = 135;
  } else if (VAR_6) {
   VAR_5 = 129;
  }
  break;
 case 135: {







  if (VAR_4->ep0_req_completed) {
   VAR_4->ep0_reply = ((void*)0);
   FUNC_5(VAR_4);




   VAR_5 = 129;
  } else if (VAR_6) {
   FUNC_6(VAR_4, &VAR_4->iudma[VAR_3]);
   FUNC_4(VAR_4, 1);
   VAR_5 = 129;
  }
  break;
 }
 case 131:

  if (VAR_4->ep0_reply) {
   FUNC_3(VAR_4, VAR_2,
           VAR_4->ep0_reply);
   VAR_5 = 132;
  } else if (VAR_6) {
   VAR_5 = 129;
  }
  break;
 case 132: {

  if (VAR_4->ep0_req_completed) {
   VAR_4->ep0_reply = ((void*)0);
   FUNC_5(VAR_4);


   FUNC_2(VAR_4, VAR_3, 0);
   VAR_5 = 130;
  } else if (VAR_6) {
   FUNC_6(VAR_4, &VAR_4->iudma[VAR_2]);
   FUNC_4(VAR_4, 0);
   VAR_5 = 129;
  }
  break;
 }
 case 130:
  if (VAR_4->ep0_req_completed) {
   FUNC_5(VAR_4);
   VAR_5 = 129;
  } else if (VAR_6) {
   FUNC_6(VAR_4, &VAR_4->iudma[VAR_3]);
   VAR_4->ep0_request = ((void*)0);
   VAR_5 = 129;
  }
  break;
 case 133: {
  struct usb_request *VAR_7 = VAR_4->ep0_reply;

  if (!VAR_7) {
   if (VAR_6)
    VAR_5 = 136;
   break;
  }

  FUNC_0(VAR_4, VAR_7, 0);
  VAR_4->ep0_reply = ((void*)0);
  VAR_5 = 136;
  break;
 }
 case 128:
  break;
 }

 if (VAR_4->ep0state == VAR_5)
  return -VAR_1;

 VAR_4->ep0state = VAR_5;
 return 0;
}
