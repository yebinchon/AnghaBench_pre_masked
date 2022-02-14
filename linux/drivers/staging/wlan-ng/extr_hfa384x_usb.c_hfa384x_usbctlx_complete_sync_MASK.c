
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usbctlx_completor {int (* complete ) (struct usbctlx_completor*) ;} ;
struct TYPE_5__ {int type; } ;
struct hfa384x_usbctlx {int reapable; scalar_t__ state; int list; TYPE_2__ outbuf; int done; } ;
struct TYPE_6__ {int lock; int completing; } ;
struct hfa384x {int req_timer_done; int resp_timer_done; TYPE_3__ ctlxq; TYPE_1__* wlandev; int ctlx_urb; int resptimer; int reqtimer; } ;
struct TYPE_4__ {int netdev; scalar_t__ hwremoved; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 struct hfa384x_usbctlx* FUNC_2 (struct hfa384x*) ;
 int FUNC_3 (struct hfa384x*) ;
 int FUNC_4 (struct hfa384x_usbctlx*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ,char*,int ,int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct usbctlx_completor*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct hfa384x *VAR_4,
      struct hfa384x_usbctlx *VAR_5,
      struct usbctlx_completor *VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_13(&VAR_5->done);

 FUNC_9(&VAR_4->ctlxq.lock, VAR_7);





cleanup:
 if (VAR_4->wlandev->hwremoved) {
  FUNC_10(&VAR_4->ctlxq.lock, VAR_7);
  VAR_8 = -VAR_3;
 } else if (VAR_8 != 0) {
  int VAR_9 = 0;
  if (VAR_5 == FUNC_2(VAR_4)) {
   FUNC_10(&VAR_4->ctlxq.lock, VAR_7);

   FUNC_1(&VAR_4->reqtimer);
   FUNC_1(&VAR_4->resptimer);
   VAR_4->req_timer_done = 1;
   VAR_4->resp_timer_done = 1;
   FUNC_12(&VAR_4->ctlx_urb);

   FUNC_9(&VAR_4->ctlxq.lock, VAR_7);

   VAR_9 = 1;





   if (VAR_4->wlandev->hwremoved)
    goto cleanup;
  }






  VAR_5->reapable = 1;
  VAR_5->state = VAR_1;
  FUNC_7(&VAR_5->list, &VAR_4->ctlxq.completing);

  FUNC_10(&VAR_4->ctlxq.lock, VAR_7);

  if (VAR_9)
   FUNC_3(VAR_4);
 } else {
  if (VAR_5->state == VAR_0) {
   VAR_8 = VAR_6->complete(VAR_6);
  } else {
   FUNC_8(VAR_4->wlandev->netdev, "CTLX[%d] error: state(%s)\n",
        FUNC_5(VAR_5->outbuf.type),
        FUNC_0(VAR_5->state));
   VAR_8 = -VAR_2;
  }

  FUNC_6(&VAR_5->list);
  FUNC_10(&VAR_4->ctlxq.lock, VAR_7);
  FUNC_4(VAR_5);
 }

 return VAR_8;
}
