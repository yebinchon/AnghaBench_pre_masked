
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usb_ctrlrequest {int bRequestType; int wValue; int wIndex; int wLength; } ;
struct TYPE_2__ {int speed; } ;
struct mv_udc {int remote_wakeup; int max_eps; int lock; int usb_state; TYPE_1__ gadget; } ;


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
 int FUNC_0 (struct mv_udc*) ;
 int FUNC_1 (struct mv_udc*,int,int,int) ;
 int FUNC_2 (struct mv_udc*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct mv_udc*,int,int ,int) ;

__attribute__((used)) static void FUNC_6(struct mv_udc *VAR_13, struct usb_ctrlrequest *VAR_14)
{
 u8 VAR_15;
 u8 VAR_16;

 if ((VAR_14->bRequestType & (VAR_11 | VAR_6))
  == ((VAR_12 | VAR_4))) {
  switch (VAR_14->wValue) {
  case 130:
   VAR_13->remote_wakeup = 1;
   break;
  case 129:
   if (VAR_14->wIndex & 0xFF
    || VAR_13->gadget.speed != VAR_7)
    FUNC_0(VAR_13);

   if (VAR_13->usb_state != VAR_9
    && VAR_13->usb_state != VAR_8
    && VAR_13->usb_state != VAR_10)
    FUNC_0(VAR_13);

   FUNC_2(VAR_13, (VAR_14->wIndex >> 8));
   goto out;
  default:
   goto out;
  }
 } else if ((VAR_14->bRequestType & (VAR_11 | VAR_6))
  == ((VAR_12 | VAR_5))) {
  switch (VAR_14->wValue) {
  case 128:
   VAR_15 = VAR_14->wIndex & VAR_3;
   VAR_16 = (VAR_14->wIndex & VAR_2)
    ? VAR_0 : VAR_1;
   if (VAR_14->wValue != 0 || VAR_14->wLength != 0
    || VAR_15 > VAR_13->max_eps)
    goto out;
   FUNC_4(&VAR_13->lock);
   FUNC_1(VAR_13, VAR_15, VAR_16, 1);
   FUNC_3(&VAR_13->lock);
   break;
  default:
   goto out;
  }
 } else
  goto out;

 if (FUNC_5(VAR_13, VAR_0, 0, 1))
  FUNC_0(VAR_13);
out:
 return;
}
