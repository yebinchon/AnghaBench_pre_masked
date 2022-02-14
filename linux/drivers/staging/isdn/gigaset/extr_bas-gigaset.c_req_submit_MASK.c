
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bc_state {TYPE_3__* cs; } ;
struct TYPE_5__ {int bRequest; scalar_t__ wLength; scalar_t__ wIndex; int wValue; int bRequestType; } ;
struct bas_cardstate {int pending; int lock; int timer_ctrl; int urb_ctrl; scalar_t__ retry_ctrl; TYPE_2__ dr_ctrl; int udev; } ;
struct TYPE_4__ {struct bas_cardstate* bas; } ;
struct TYPE_6__ {int dev; TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int,...) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ,int ,int ,unsigned char*,int *,int ,int ,struct bas_cardstate*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_11(struct bc_state *VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
 struct bas_cardstate *VAR_11 = VAR_7->cs->hw.bas;
 int VAR_12;
 unsigned long VAR_13;

 FUNC_3(VAR_0, "-------> 0x%02x (%d)", VAR_8, VAR_9);

 FUNC_5(&VAR_11->lock, VAR_13);
 if (VAR_11->pending) {
  FUNC_6(&VAR_11->lock, VAR_13);
  FUNC_1(VAR_7->cs->dev,
   "submission of request 0x%02x failed: "
   "request 0x%02x still pending\n",
   VAR_8, VAR_11->pending);
  return -VAR_1;
 }

 VAR_11->dr_ctrl.bRequestType = VAR_4;
 VAR_11->dr_ctrl.bRequest = VAR_8;
 VAR_11->dr_ctrl.wValue = FUNC_0(VAR_9);
 VAR_11->dr_ctrl.wIndex = 0;
 VAR_11->dr_ctrl.wLength = 0;
 FUNC_8(VAR_11->urb_ctrl, VAR_11->udev,
        FUNC_9(VAR_11->udev, 0),
        (unsigned char *) &VAR_11->dr_ctrl, ((void*)0), 0,
        VAR_6, VAR_11);
 VAR_11->retry_ctrl = 0;
 VAR_12 = FUNC_10(VAR_11->urb_ctrl, VAR_2);
 if (FUNC_7(VAR_12)) {
  FUNC_1(VAR_7->cs->dev, "could not submit request 0x%02x: %s\n",
   VAR_8, FUNC_2(VAR_12));
  FUNC_6(&VAR_11->lock, VAR_13);
  return VAR_12;
 }
 VAR_11->pending = VAR_8;

 if (VAR_10 > 0) {
  FUNC_3(VAR_0, "setting timeout of %d/10 secs", VAR_10);
  FUNC_4(&VAR_11->timer_ctrl, VAR_5 + VAR_10 * VAR_3 / 10);
 }

 FUNC_6(&VAR_11->lock, VAR_13);
 return 0;
}
