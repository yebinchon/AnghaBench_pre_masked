
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_ctrlrequest {int bRequestType; int wValue; int wIndex; int wLength; } ;
struct mv_udc {int max_eps; int lock; struct mv_ep* eps; int remote_wakeup; } ;
struct mv_ep {int wedge; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct mv_udc*) ;
 int FUNC_1 (struct mv_udc*,int,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct mv_udc*,int,int ,int) ;

__attribute__((used)) static void FUNC_5(struct mv_udc *VAR_9, struct usb_ctrlrequest *VAR_10)
{
 u8 VAR_11;
 u8 VAR_12;
 struct mv_ep *VAR_13;

 if ((VAR_10->bRequestType & (VAR_7 | VAR_6))
  == ((VAR_8 | VAR_4))) {
  switch (VAR_10->wValue) {
  case 129:
   VAR_9->remote_wakeup = 0;
   break;
  default:
   goto out;
  }
 } else if ((VAR_10->bRequestType & (VAR_7 | VAR_6))
  == ((VAR_8 | VAR_5))) {
  switch (VAR_10->wValue) {
  case 128:
   VAR_11 = VAR_10->wIndex & VAR_3;
   VAR_12 = (VAR_10->wIndex & VAR_2)
    ? VAR_0 : VAR_1;
   if (VAR_10->wValue != 0 || VAR_10->wLength != 0
    || VAR_11 > VAR_9->max_eps)
    goto out;
   VAR_13 = &VAR_9->eps[VAR_11 * 2 + VAR_12];
   if (VAR_13->wedge == 1)
    break;
   FUNC_3(&VAR_9->lock);
   FUNC_1(VAR_9, VAR_11, VAR_12, 0);
   FUNC_2(&VAR_9->lock);
   break;
  default:
   goto out;
  }
 } else
  goto out;

 if (FUNC_4(VAR_9, VAR_0, 0, 1))
  FUNC_0(VAR_9);
out:
 return;
}
