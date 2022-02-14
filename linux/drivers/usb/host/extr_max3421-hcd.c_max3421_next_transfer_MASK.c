
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct urb {TYPE_1__* ep; } ;
struct max3421_hcd {int hien; struct urb* curr_urb; } ;
struct max3421_ep {int pkt_state; } ;
struct TYPE_2__ {struct max3421_ep* hcpriv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 struct max3421_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct usb_hcd*,struct urb*) ;
 int FUNC_3 (struct usb_hcd*,struct urb*) ;
 int FUNC_4 (struct usb_hcd*,struct urb*,int) ;
 int FUNC_5 (struct usb_hcd*,int ,int) ;
 int FUNC_6 (struct urb*) ;

__attribute__((used)) static void
FUNC_7(struct usb_hcd *VAR_5, int VAR_6)
{
 struct max3421_hcd *VAR_7 = FUNC_1(VAR_5);
 struct urb *VAR_8 = VAR_7->curr_urb;
 struct max3421_ep *VAR_9;
 int VAR_10 = -VAR_0;

 if (!VAR_8)
  return;

 VAR_9 = VAR_8->ep->hcpriv;

 switch (VAR_9->pkt_state) {
 case 130:
  VAR_10 = FUNC_2(VAR_5, VAR_8);
  break;

 case 128:
  if (FUNC_6(VAR_8))
   VAR_10 = FUNC_3(VAR_5, VAR_8);
  else
   VAR_10 = FUNC_4(VAR_5, VAR_8, VAR_6);
  break;

 case 129:




  if (FUNC_6(VAR_8))
   VAR_10 = VAR_3;
  else
   VAR_10 = VAR_2;
  break;
 }

 if (VAR_10 < 0)
  return;



 FUNC_5(VAR_5, VAR_4, VAR_10);
 VAR_7->hien |= FUNC_0(VAR_1);
}
