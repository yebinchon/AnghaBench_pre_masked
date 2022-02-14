
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct hfa384x_usbctlx {int state; } ;
struct TYPE_3__ {int lock; int active; } ;
struct TYPE_4__ {int transfer_flags; } ;
struct hfa384x {int req_timer_done; int resp_timer_done; TYPE_1__ ctlxq; int resptimer; TYPE_2__ ctlx_urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 struct hfa384x* FUNC_1 (int ,struct timer_list*,int ) ;
 struct hfa384x_usbctlx* FUNC_2 (struct hfa384x*) ;
 struct hfa384x* VAR_3 ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_5)
{
 struct hfa384x *VAR_6 = FUNC_1(VAR_6, VAR_5, VAR_4);
 unsigned long VAR_7;

 FUNC_4(&VAR_6->ctlxq.lock, VAR_7);

 VAR_6->req_timer_done = 1;




 if (!FUNC_3(&VAR_6->ctlxq.active)) {




  VAR_6->ctlx_urb.transfer_flags |= VAR_2;
  if (FUNC_6(&VAR_6->ctlx_urb) == -VAR_1) {
   struct hfa384x_usbctlx *VAR_8 = FUNC_2(VAR_6);

   VAR_8->state = VAR_0;
   if (FUNC_0(&VAR_6->resptimer) != 0)
    VAR_6->resp_timer_done = 1;
  }
 }

 FUNC_5(&VAR_6->ctlxq.lock, VAR_7);
}
