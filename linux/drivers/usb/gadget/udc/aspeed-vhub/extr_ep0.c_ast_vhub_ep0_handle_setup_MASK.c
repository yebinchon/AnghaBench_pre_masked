
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_ctrlrequest {int bRequestType; int wLength; int wIndex; int wValue; int bRequest; } ;
struct TYPE_8__ {scalar_t__ state; int dir_in; int ctlstat; int setup; } ;
struct ast_vhub_ep {scalar_t__ d_idx; TYPE_4__ ep0; TYPE_3__* vhub; TYPE_2__* dev; } ;
typedef enum std_req_rc { ____Placeholder_std_req_rc } std_req_rc ;
typedef int crq ;
struct TYPE_7__ {int lock; } ;
struct TYPE_6__ {int gadget; TYPE_1__* driver; } ;
struct TYPE_5__ {int (* setup ) (int *,struct usb_ctrlrequest*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ast_vhub_ep*,char*,...) ;
 int FUNC_1 (struct ast_vhub_ep*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct ast_vhub_ep*,struct usb_ctrlrequest*) ;
 int FUNC_4 (struct ast_vhub_ep*,int ) ;
 int FUNC_5 (struct ast_vhub_ep*,struct usb_ctrlrequest*) ;
 int FUNC_6 (struct ast_vhub_ep*,struct usb_ctrlrequest*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct usb_ctrlrequest*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;




 int FUNC_11 (int *,struct usb_ctrlrequest*) ;
 int FUNC_12 (int ,int ) ;

void FUNC_13(struct ast_vhub_ep *VAR_12)
{
 struct usb_ctrlrequest VAR_13;
 enum std_req_rc VAR_14;
 int VAR_15 = -VAR_1;

 if (FUNC_2(VAR_12->d_idx != 0))
  return;





 FUNC_8(&VAR_13, VAR_12->ep0.setup, sizeof(VAR_13));

 FUNC_0(VAR_12, "SETUP packet %02x/%02x/%04x/%04x/%04x [%s] st=%d\n",
       VAR_13.bRequestType, VAR_13.bRequest,
        FUNC_7(VAR_13.wValue),
        FUNC_7(VAR_13.wIndex),
        FUNC_7(VAR_13.wLength),
        (VAR_13.bRequestType & VAR_2) ? "in" : "out",
        VAR_12->ep0.state);
 if (VAR_12->ep0.state != VAR_11 &&
     VAR_12->ep0.state != VAR_9) {
  FUNC_0(VAR_12, "wrong state\n");
  FUNC_4(VAR_12, -VAR_0);
 }


 VAR_12->ep0.state = VAR_8;
 VAR_12->ep0.dir_in = !!(VAR_13.bRequestType & VAR_2);


 VAR_14 = 129;
 if (VAR_12->dev == ((void*)0)) {
  if ((VAR_13.bRequestType & VAR_4) == VAR_5)
   VAR_14 = FUNC_6(VAR_12, &VAR_13);
  else if ((VAR_13.bRequestType & VAR_4) == VAR_3)
   VAR_14 = FUNC_3(VAR_12, &VAR_13);
  else
   VAR_14 = 128;
 } else if ((VAR_13.bRequestType & VAR_4) == VAR_5)
  VAR_14 = FUNC_5(VAR_12, &VAR_13);


 switch(VAR_14) {
 case 131:
  goto complete;
 case 128:
  goto stall;
 case 129:
  break;
 case 130:
  return;
 }


 if (FUNC_2(!VAR_12->dev))
  goto stall;
 if (VAR_12->dev->driver) {
  FUNC_0(VAR_12, "forwarding to gadget...\n");
  FUNC_10(&VAR_12->vhub->lock);
  VAR_15 = VAR_12->dev->driver->setup(&VAR_12->dev->gadget, &VAR_13);
  FUNC_9(&VAR_12->vhub->lock);
  FUNC_0(VAR_12, "driver returned %d\n", VAR_15);
 } else {
  FUNC_0(VAR_12, "no gadget for request !\n");
 }
 if (VAR_15 >= 0)
  return;

 stall:
 FUNC_0(VAR_12, "stalling\n");
 FUNC_12(VAR_6, VAR_12->ep0.ctlstat);
 VAR_12->ep0.state = VAR_9;
 VAR_12->ep0.dir_in = 0;
 return;

 complete:
 FUNC_1(VAR_12, "sending [in] status with no data\n");
 FUNC_12(VAR_7, VAR_12->ep0.ctlstat);
 VAR_12->ep0.state = VAR_10;
 VAR_12->ep0.dir_in = 0;
}
