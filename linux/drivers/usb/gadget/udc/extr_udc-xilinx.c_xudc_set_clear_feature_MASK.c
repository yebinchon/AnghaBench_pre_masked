
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_3__ {scalar_t__ bRequest; int bRequestType; size_t wIndex; int wValue; } ;
struct xusb_udc {int remote_wkp; int (* read_fn ) (scalar_t__) ;int dev; scalar_t__ addr; int (* write_fn ) (scalar_t__,scalar_t__,int) ;TYPE_1__ setup; struct xusb_ep* ep; struct xusb_req* req; } ;
struct TYPE_4__ {scalar_t__ length; } ;
struct xusb_req {TYPE_2__ usb_req; } ;
struct xusb_ep {size_t is_in; scalar_t__ offset; } ;




 size_t VAR_0 ;
 size_t VAR_1 ;


 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct xusb_ep*,struct xusb_req*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;
 int FUNC_5 (scalar_t__,scalar_t__,int) ;
 int FUNC_6 (struct xusb_udc*) ;

__attribute__((used)) static void FUNC_7(struct xusb_udc *VAR_5)
{
 struct xusb_ep *VAR_6 = &VAR_5->ep[0];
 struct xusb_req *VAR_7 = VAR_5->req;
 struct xusb_ep *VAR_8;
 u8 VAR_9;
 u8 VAR_10;
 u32 VAR_11;
 int VAR_12 = (VAR_5->setup.bRequest == VAR_2 ? 1 : 0);
 int VAR_13;

 switch (VAR_5->setup.bRequestType) {
 case 129:
  switch (VAR_5->setup.wValue) {
  case 130:




   break;
  case 131:
   if (VAR_12)
    VAR_5->remote_wkp = 1;
   else
    VAR_5->remote_wkp = 0;
   break;
  default:
   FUNC_6(VAR_5);
   break;
  }
  break;
 case 128:
  if (!VAR_5->setup.wValue) {
   VAR_9 = VAR_5->setup.wIndex & VAR_1;
   VAR_8 = &VAR_5->ep[VAR_9];
   VAR_10 = VAR_5->setup.wIndex & VAR_0;
   VAR_10 = VAR_10 >> 7;


   if (VAR_10 != VAR_8->is_in) {
    FUNC_6(VAR_5);
    return;
   }
   VAR_11 = VAR_5->read_fn(VAR_5->addr + VAR_8->offset);
   if (!VAR_9) {

    VAR_11 &= ~VAR_4;
    VAR_5->write_fn(VAR_5->addr,
           VAR_8->offset, VAR_11);
   } else {
    if (VAR_12) {
     VAR_11 |= VAR_4;
     VAR_5->write_fn(VAR_5->addr,
            VAR_8->offset,
            VAR_11);
    } else {

     VAR_11 &= ~(VAR_4 |
      VAR_3);
     VAR_5->write_fn(VAR_5->addr,
            VAR_8->offset,
            VAR_11);
    }
   }
  }
  break;
 default:
  FUNC_6(VAR_5);
  return;
 }

 VAR_7->usb_req.length = 0;
 VAR_13 = FUNC_0(VAR_6, VAR_7);
 if (VAR_13 == 0)
  return;

 FUNC_1(VAR_5->dev, "Can't respond to SET/CLEAR FEATURE\n");
 FUNC_6(VAR_5);
}
