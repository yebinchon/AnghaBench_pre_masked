
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_ctrlrequest {scalar_t__ wLength; int bRequestType; int bRequest; } ;
struct nbu2ss_udc {scalar_t__ ep0state; int lock; struct usb_ctrlrequest ctrl; int gadget; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* setup ) (int *,struct usb_ctrlrequest*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct nbu2ss_udc*,int) ;
 int VAR_5 ;





 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct nbu2ss_udc*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nbu2ss_udc*) ;
 int FUNC_5 (struct nbu2ss_udc*) ;
 int FUNC_6 (struct nbu2ss_udc*) ;
 int FUNC_7 (struct nbu2ss_udc*) ;
 int FUNC_8 (struct nbu2ss_udc*) ;
 int FUNC_9 (int *,struct usb_ctrlrequest*) ;

__attribute__((used)) static inline int FUNC_10(struct nbu2ss_udc *VAR_8)
{
 bool VAR_9 = 1;
 int VAR_10 = -VAR_0;
 struct usb_ctrlrequest *VAR_11;

 VAR_11 = &VAR_8->ctrl;
 FUNC_1(VAR_8, (u32 *)VAR_11);


 if (VAR_11->wLength == 0) {
  VAR_8->ep0state = VAR_3;

 } else {
  if (VAR_11->bRequestType & VAR_5)
   VAR_8->ep0state = VAR_2;
  else
   VAR_8->ep0state = VAR_4;
 }

 if ((VAR_11->bRequestType & VAR_6) == VAR_7) {
  switch (VAR_11->bRequest) {
  case 131:
   VAR_10 = FUNC_5(VAR_8);
   VAR_9 = 0;
   break;

  case 132:
   VAR_10 = FUNC_4(VAR_8);
   VAR_9 = 0;
   break;

  case 128:
   VAR_10 = FUNC_8(VAR_8);
   VAR_9 = 0;
   break;

  case 130:
   VAR_10 = FUNC_6(VAR_8);
   VAR_9 = 0;
   break;

  case 129:
   VAR_10 = FUNC_7(VAR_8);
   break;

  default:
   break;
  }
 }

 if (!VAR_9) {
  if (VAR_8->ep0state == VAR_3) {
   if (VAR_10 >= 0) {


    VAR_10 = FUNC_0(VAR_8, 1);
   }
  }

 } else {
  FUNC_3(&VAR_8->lock);
  VAR_10 = VAR_8->driver->setup(&VAR_8->gadget, &VAR_8->ctrl);
  FUNC_2(&VAR_8->lock);
 }

 if (VAR_10 < 0)
  VAR_8->ep0state = VAR_1;

 return VAR_10;
}
