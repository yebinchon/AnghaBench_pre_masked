
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct usba_udc {int devstatus; int lock; int gadget; TYPE_1__* driver; int test_mode; } ;
struct TYPE_4__ {int name; } ;
struct usba_ep {TYPE_2__ ep; int state; int index; int fifo; } ;
struct usb_ctrlrequest {int bRequest; int bRequestType; int wLength; int wIndex; int wValue; } ;
typedef int status ;
struct TYPE_3__ {int (* setup ) (int *,struct usb_ctrlrequest*) ;} ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;




 int FUNC_0 (int) ;
 int FUNC_1 (struct usb_ctrlrequest*) ;
 int FUNC_2 (struct usb_ctrlrequest*) ;
 int FUNC_3 (struct usb_ctrlrequest*) ;
 struct usba_ep* FUNC_4 (struct usba_udc*,int ) ;
 int FUNC_5 (struct usba_udc*,struct usba_ep*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ,int,int,int ,int ,int ) ;
 int FUNC_8 (struct usba_udc*,struct usba_ep*) ;
 int FUNC_9 (struct usba_udc*,int ) ;
 int FUNC_10 (struct usba_udc*,struct usba_ep*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,struct usb_ctrlrequest*) ;
 int FUNC_14 (struct usba_ep*,int ,int ) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static int FUNC_16(struct usba_udc *VAR_14, struct usba_ep *VAR_15,
  struct usb_ctrlrequest *VAR_16)
{
 int VAR_17 = 0;

 switch (VAR_16->bRequest) {
 case 130: {
  u16 VAR_18;

  if (VAR_16->bRequestType == (VAR_9 | VAR_11)) {
   VAR_18 = FUNC_0(VAR_14->devstatus);
  } else if (VAR_16->bRequestType
    == (VAR_9 | VAR_13)) {
   VAR_18 = FUNC_0(0);
  } else if (VAR_16->bRequestType
    == (VAR_9 | VAR_12)) {
   struct usba_ep *VAR_19;

   VAR_19 = FUNC_4(VAR_14, FUNC_6(VAR_16->wIndex));
   if (!VAR_19)
    goto stall;

   VAR_18 = 0;
   if (FUNC_5(VAR_14, VAR_19))
    VAR_18 |= FUNC_0(1);
  } else
   goto delegate;


  if (VAR_16->wLength != FUNC_0(sizeof(VAR_18)))
   goto stall;
  VAR_15->state = VAR_1;
  FUNC_15(VAR_18, VAR_15->fifo);
  FUNC_14(VAR_15, VAR_2, VAR_7);
  break;
 }

 case 131: {
  if (VAR_16->bRequestType == VAR_11) {
   if (FUNC_1(VAR_16))
    VAR_14->devstatus
     &= ~(1 << VAR_8);
   else

    goto stall;
  } else if (VAR_16->bRequestType == VAR_12) {
   struct usba_ep *VAR_20;

   if (VAR_16->wLength != FUNC_0(0)
     || !FUNC_3(VAR_16))
    goto stall;
   VAR_20 = FUNC_4(VAR_14, FUNC_6(VAR_16->wIndex));
   if (!VAR_20)
    goto stall;

   FUNC_14(VAR_20, VAR_0, VAR_5);
   if (VAR_20->index != 0)
    FUNC_14(VAR_20, VAR_0,
      VAR_6);
  } else {
   goto delegate;
  }

  FUNC_8(VAR_14, VAR_15);
  break;
 }

 case 128: {
  if (VAR_16->bRequestType == VAR_11) {
   if (FUNC_2(VAR_16)) {
    FUNC_8(VAR_14, VAR_15);
    VAR_15->state = VAR_4;
    VAR_14->test_mode = FUNC_6(VAR_16->wIndex);
    return 0;
   } else if (FUNC_1(VAR_16)) {
    VAR_14->devstatus |= 1 << VAR_8;
   } else {
    goto stall;
   }
  } else if (VAR_16->bRequestType == VAR_12) {
   struct usba_ep *VAR_21;

   if (VAR_16->wLength != FUNC_0(0)
     || !FUNC_3(VAR_16))
    goto stall;

   VAR_21 = FUNC_4(VAR_14, FUNC_6(VAR_16->wIndex));
   if (!VAR_21)
    goto stall;

   FUNC_14(VAR_21, VAR_2, VAR_5);
  } else
   goto delegate;

  FUNC_8(VAR_14, VAR_15);
  break;
 }

 case 129:
  if (VAR_16->bRequestType != (VAR_10 | VAR_11))
   goto delegate;

  FUNC_9(VAR_14, FUNC_6(VAR_16->wValue));
  FUNC_8(VAR_14, VAR_15);
  VAR_15->state = VAR_3;
  break;

 default:
delegate:
  FUNC_12(&VAR_14->lock);
  VAR_17 = VAR_14->driver->setup(&VAR_14->gadget, VAR_16);
  FUNC_11(&VAR_14->lock);
 }

 return VAR_17;

stall:
 FUNC_7("udc: %s: Invalid setup request: %02x.%02x v%04x i%04x l%d, "
  "halting endpoint...\n",
  VAR_15->ep.name, VAR_16->bRequestType, VAR_16->bRequest,
  FUNC_6(VAR_16->wValue), FUNC_6(VAR_16->wIndex),
  FUNC_6(VAR_16->wLength));
 FUNC_10(VAR_14, VAR_15);
 return -1;
}
