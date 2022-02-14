
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_ctrlrequest {int bRequestType; int bRequest; scalar_t__ wLength; int wValue; int wIndex; } ;
struct dwc2_hsotg_ep {int dir_in; } ;
struct dwc2_hsotg {int connected; int delayed_status; int dev; int lock; int gadget; TYPE_1__* driver; int ep0_state; struct dwc2_hsotg_ep** eps_out; } ;
struct TYPE_2__ {int (* setup ) (int *,struct usb_ctrlrequest*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct dwc2_hsotg*,struct usb_ctrlrequest*) ;
 int FUNC_3 (struct dwc2_hsotg*,struct usb_ctrlrequest*) ;
 int FUNC_4 (struct dwc2_hsotg*,struct dwc2_hsotg_ep*,int *,int ) ;
 int FUNC_5 (struct dwc2_hsotg*) ;
 int FUNC_6 (struct dwc2_hsotg*,int ) ;
 int FUNC_7 (struct dwc2_hsotg*,int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,struct usb_ctrlrequest*) ;

__attribute__((used)) static void FUNC_12(struct dwc2_hsotg *VAR_10,
           struct usb_ctrlrequest *VAR_11)
{
 struct dwc2_hsotg_ep *VAR_12 = VAR_10->eps_out[0];
 int VAR_13 = 0;
 u32 VAR_14;

 FUNC_0(VAR_10->dev,
  "ctrl Type=%02x, Req=%02x, V=%04x, I=%04x, L=%04x\n",
  VAR_11->bRequestType, VAR_11->bRequest, VAR_11->wValue,
  VAR_11->wIndex, VAR_11->wLength);

 if (VAR_11->wLength == 0) {
  VAR_12->dir_in = 1;
  VAR_10->ep0_state = VAR_5;
 } else if (VAR_11->bRequestType & VAR_6) {
  VAR_12->dir_in = 1;
  VAR_10->ep0_state = VAR_3;
 } else {
  VAR_12->dir_in = 0;
  VAR_10->ep0_state = VAR_4;
 }

 if ((VAR_11->bRequestType & VAR_8) == VAR_9) {
  switch (VAR_11->bRequest) {
  case 129:
   VAR_10->connected = 1;
   VAR_14 = FUNC_6(VAR_10, VAR_0);
   VAR_14 &= ~VAR_1;
   VAR_14 |= (FUNC_8(VAR_11->wValue) <<
     VAR_2) & VAR_1;
   FUNC_7(VAR_10, VAR_14, VAR_0);

   FUNC_1(VAR_10->dev, "new address %d\n", VAR_11->wValue);

   VAR_13 = FUNC_4(VAR_10, VAR_12, ((void*)0), 0);
   return;

  case 130:
   VAR_13 = FUNC_3(VAR_10, VAR_11);
   break;

  case 131:
  case 128:
   VAR_13 = FUNC_2(VAR_10, VAR_11);
   break;
  }
 }



 if (VAR_13 == 0 && VAR_10->driver) {
  FUNC_10(&VAR_10->lock);
  VAR_13 = VAR_10->driver->setup(&VAR_10->gadget, VAR_11);
  FUNC_9(&VAR_10->lock);
  if (VAR_13 < 0)
   FUNC_0(VAR_10->dev, "driver->setup() ret %d\n", VAR_13);
 }

 VAR_10->delayed_status = 0;
 if (VAR_13 == VAR_7)
  VAR_10->delayed_status = 1;






 if (VAR_13 < 0)
  FUNC_5(VAR_10);
}
