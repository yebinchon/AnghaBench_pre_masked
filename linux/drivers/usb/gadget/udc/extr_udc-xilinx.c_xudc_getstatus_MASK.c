
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int bRequestType; int wIndex; } ;
struct xusb_udc {int (* read_fn ) (scalar_t__) ;int dev; TYPE_1__ setup; scalar_t__ addr; struct xusb_ep* ep; int remote_wkp; struct xusb_req* req; } ;
struct TYPE_4__ {int length; scalar_t__ buf; } ;
struct xusb_req {TYPE_2__ usb_req; } ;
struct xusb_ep {int is_in; scalar_t__ offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct xusb_ep*,struct xusb_req*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct xusb_udc*) ;

__attribute__((used)) static void FUNC_5(struct xusb_udc *VAR_7)
{
 struct xusb_ep *VAR_8 = &VAR_7->ep[0];
 struct xusb_req *VAR_9 = VAR_7->req;
 struct xusb_ep *VAR_10;
 u16 VAR_11 = 0;
 u32 VAR_12;
 int VAR_13;
 u32 VAR_14;
 int VAR_15;

 switch (VAR_7->setup.bRequestType & VAR_5) {
 case 130:

  VAR_11 = 1 << VAR_1;
  if (VAR_7->remote_wkp)
   VAR_11 |= (1 << VAR_0);
  break;
 case 128:
  break;
 case 129:
  VAR_13 = VAR_7->setup.wIndex & VAR_4;
  VAR_10 = &VAR_7->ep[VAR_13];
  VAR_12 = VAR_7->read_fn(VAR_7->addr + VAR_10->offset);
  VAR_14 = VAR_12 & VAR_6;
  if (VAR_7->setup.wIndex & VAR_2) {
   if (!VAR_10->is_in)
    goto stall;
  } else {
   if (VAR_10->is_in)
    goto stall;
  }
  if (VAR_14)
   VAR_11 = 1 << VAR_3;
  break;
 default:
  goto stall;
 }

 VAR_9->usb_req.length = 2;
 *(u16 *)VAR_9->usb_req.buf = FUNC_1(VAR_11);
 VAR_15 = FUNC_0(VAR_8, VAR_9);
 if (VAR_15 == 0)
  return;
stall:
 FUNC_2(VAR_7->dev, "Can't respond to getstatus request\n");
 FUNC_4(VAR_7);
}
