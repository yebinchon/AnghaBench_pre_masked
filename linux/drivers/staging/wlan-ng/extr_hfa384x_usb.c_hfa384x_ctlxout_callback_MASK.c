
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct urb {int status; struct hfa384x* context; } ;
struct TYPE_6__ {int type; } ;
struct hfa384x_usbctlx {int state; TYPE_1__ outbuf; } ;
struct TYPE_8__ {int lock; int active; } ;
struct hfa384x {int req_timer_done; int resp_timer_done; TYPE_3__ ctlxq; int resptimer; int usb_work; TYPE_2__* wlandev; int usb_flags; int reqtimer; } ;
struct TYPE_9__ {int name; } ;
struct TYPE_7__ {TYPE_4__* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct urb*) ;
 int FUNC_2 (int *) ;
 struct hfa384x_usbctlx* FUNC_3 (struct hfa384x*) ;
 int FUNC_4 (struct hfa384x*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (TYPE_4__*,char*,int ,int ,int ) ;
 int FUNC_8 (TYPE_4__*,char*,int ) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (struct hfa384x*,struct hfa384x_usbctlx*) ;

__attribute__((used)) static void FUNC_15(struct urb *VAR_7)
{
 struct hfa384x *VAR_8 = VAR_7->context;
 int VAR_9 = 0;
 int VAR_10 = 1;
 int VAR_11 = 0;
 struct hfa384x_usbctlx *VAR_12;
 unsigned long VAR_13;

 FUNC_9("urb->status=%d\n", VAR_7->status);



 if ((VAR_7->status == -VAR_5) ||
     (VAR_7->status == -VAR_3) || !VAR_8)
  return;

retry:
 FUNC_11(&VAR_8->ctlxq.lock, VAR_13);







 if (FUNC_6(&VAR_8->ctlxq.active)) {
  FUNC_12(&VAR_8->ctlxq.lock, VAR_13);
  return;
 }





 if (FUNC_2(&VAR_8->reqtimer) == 0) {
  if (VAR_8->req_timer_done == 0) {





   FUNC_12(&VAR_8->ctlxq.lock, VAR_13);
   goto retry;
  }
 } else {
  VAR_8->req_timer_done = 1;
 }

 VAR_12 = FUNC_3(VAR_8);

 if (VAR_7->status == 0) {

  switch (VAR_12->state) {
  case 129:

   VAR_12->state = VAR_1;
   break;

  case 128:



   VAR_12->state = VAR_0;
   FUNC_14(VAR_8, VAR_12);
   VAR_11 = 1;
   break;

  default:

   FUNC_7(VAR_8->wlandev->netdev,
       "Illegal CTLX[%d] success state(%s, %d) in OUT URB\n",
       FUNC_5(VAR_12->outbuf.type),
       FUNC_0(VAR_12->state), VAR_7->status);
   break;
  }
 } else {

  if ((VAR_7->status == -VAR_4) &&
      !FUNC_13(VAR_6, &VAR_8->usb_flags)) {
   FUNC_8(VAR_8->wlandev->netdev,
        "%s tx pipe stalled: requesting reset\n",
        VAR_8->wlandev->netdev->name);
   FUNC_10(&VAR_8->usb_work);
  }




  VAR_12->state = VAR_2;
  FUNC_14(VAR_8, VAR_12);
  VAR_9 = 1;
  VAR_11 = 1;
 }

delresp:
 if (VAR_9) {
  VAR_10 = FUNC_2(&VAR_8->resptimer);
  if (VAR_10 != 0)
   VAR_8->resp_timer_done = 1;
 }

 FUNC_12(&VAR_8->ctlxq.lock, VAR_13);

 if (!VAR_10 && (VAR_8->resp_timer_done == 0)) {
  FUNC_11(&VAR_8->ctlxq.lock, VAR_13);
  goto delresp;
 }

 if (VAR_11)
  FUNC_4(VAR_8);
}
