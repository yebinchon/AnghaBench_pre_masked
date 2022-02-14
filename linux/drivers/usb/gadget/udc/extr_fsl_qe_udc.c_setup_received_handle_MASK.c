
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct usb_ctrlrequest {int bRequestType; int bRequest; int wLength; int wIndex; int wValue; } ;
struct qe_udc {int ep0_dir; int ep0_state; int lock; int local_setup_buff; int gadget; TYPE_1__* driver; struct qe_ep* eps; } ;
struct qe_ep {int ep; } ;
struct TYPE_2__ {scalar_t__ (* setup ) (int *,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;




 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct qe_udc*,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct qe_udc*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct qe_udc*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct qe_udc*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 int FUNC_10 (struct qe_udc*,int ) ;

__attribute__((used)) static void FUNC_11(struct qe_udc *VAR_12,
    struct usb_ctrlrequest *VAR_13)
{

 u16 VAR_14 = FUNC_3(VAR_13->wValue);
 u16 VAR_15 = FUNC_3(VAR_13->wIndex);
 u16 VAR_16 = FUNC_3(VAR_13->wLength);


 FUNC_10(VAR_12, 0);

 if (VAR_13->bRequestType & VAR_3)
  VAR_12->ep0_dir = VAR_3;
 else
  VAR_12->ep0_dir = VAR_4;

 switch (VAR_13->bRequest) {
 case 130:

  if ((VAR_13->bRequestType & (VAR_3 | VAR_10))
     != (VAR_3 | VAR_11))
   break;
  FUNC_0(VAR_12, VAR_13->bRequestType, VAR_14, VAR_15,
     VAR_16);
  return;

 case 129:

  if (VAR_13->bRequestType != (VAR_4 | VAR_11 |
      VAR_7))
   break;
  FUNC_1(VAR_12, VAR_14, VAR_15, VAR_16);
  return;

 case 131:
 case 128:

  if ((VAR_13->bRequestType & VAR_10)
     != VAR_11)
   break;

  if ((VAR_13->bRequestType & VAR_9)
    == VAR_8) {
   int VAR_17 = VAR_15 & VAR_5;
   struct qe_ep *VAR_18;

   if (VAR_14 != 0 || VAR_16 != 0
    || VAR_17 >= VAR_6)
    break;
   VAR_18 = &VAR_12->eps[VAR_17];

   FUNC_7(&VAR_12->lock);
   FUNC_5(&VAR_18->ep,
     (VAR_13->bRequest == 128)
      ? 1 : 0);
   FUNC_6(&VAR_12->lock);
  }

  FUNC_2(VAR_12, VAR_3);

  return;

 default:
  break;
 }

 if (VAR_16) {

  if (VAR_13->bRequestType & VAR_3) {
   VAR_12->ep0_state = VAR_2;
   VAR_12->ep0_dir = VAR_3;
  } else {
   VAR_12->ep0_state = VAR_1;
   VAR_12->ep0_dir = VAR_4;
  }
  FUNC_7(&VAR_12->lock);
  if (VAR_12->driver->setup(&VAR_12->gadget,
     &VAR_12->local_setup_buff) < 0)
   FUNC_4(VAR_12);
  FUNC_6(&VAR_12->lock);
 } else {

  VAR_12->ep0_dir = VAR_3;
  FUNC_7(&VAR_12->lock);
  if (VAR_12->driver->setup(&VAR_12->gadget,
     &VAR_12->local_setup_buff) < 0)
   FUNC_4(VAR_12);
  FUNC_6(&VAR_12->lock);
  VAR_12->ep0_state = VAR_0;
 }
}
