
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct usb_hcd {int dummy; } ;
struct urb {int pipe; int transfer_buffer_length; TYPE_1__* ep; } ;
struct max3421_hcd {int hien; int urb_done; int * err_stat; struct urb* curr_urb; } ;
struct max3421_ep {int pkt_state; scalar_t__ retries; scalar_t__ naks; } ;
struct TYPE_2__ {struct max3421_ep* hcpriv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 struct max3421_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct usb_hcd*,size_t) ;
 int FUNC_3 (struct usb_hcd*,int ) ;
 int FUNC_4 (struct usb_hcd*,struct urb*) ;
 int FUNC_5 (struct usb_hcd*,struct urb*) ;
 size_t FUNC_6 (struct usb_hcd*,int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct urb*) ;

__attribute__((used)) static void
FUNC_10(struct usb_hcd *VAR_6)
{
 struct max3421_hcd *VAR_7 = FUNC_1(VAR_6);
 struct urb *VAR_8 = VAR_7->curr_urb;
 struct max3421_ep *VAR_9;
 u8 VAR_10, VAR_11;
 int VAR_12 = 0;

 VAR_7->hien &= ~(FUNC_0(VAR_0) |
          FUNC_0(VAR_1));

 VAR_11 = FUNC_6(VAR_6, VAR_4);
 VAR_10 = VAR_11 & VAR_3;





 VAR_9 = VAR_8->ep->hcpriv;

 if (FUNC_7(VAR_10 != VAR_2)) {
  FUNC_2(VAR_6, VAR_11);
  return;
 }

 VAR_9->naks = 0;
 VAR_9->retries = 0;
 switch (VAR_9->pkt_state) {

 case 130:
  if (VAR_8->transfer_buffer_length > 0)
   VAR_9->pkt_state = 128;
  else
   VAR_9->pkt_state = 129;
  break;

 case 128:
  if (FUNC_9(VAR_8))
   VAR_12 = FUNC_4(VAR_6, VAR_8);
  else
   VAR_12 = FUNC_5(VAR_6, VAR_8);
  if (VAR_12 > 0 && FUNC_8(VAR_8->pipe) == VAR_5) {




   VAR_7->urb_done = VAR_12 = 0;
   VAR_9->pkt_state = 129;
  }
  break;

 case 129:
  VAR_12 = 1;
  break;
 }

 if (VAR_12)
  VAR_7->urb_done = VAR_12;
 else
  FUNC_3(VAR_6, 0);
}
