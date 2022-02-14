
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_4__ {struct bas_cardstate* bas; } ;
struct cardstate {int bcs; int dev; TYPE_1__ hw; } ;
struct bas_cardstate {int basstate; int int_in_wq; int timer_int_in; int timer_cmd_in; int timer_atrdy; int timer_ctrl; int urb_int_in; int urb_ctrl; int pending; int waitqueue; } ;
struct TYPE_5__ {scalar_t__ event; } ;
typedef TYPE_2__ pm_message_t ;


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
 scalar_t__ VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct bas_cardstate*,int,int) ;
 struct cardstate* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int,int) ;

__attribute__((used)) static int FUNC_9(struct usb_interface *VAR_12, pm_message_t VAR_13)
{
 struct cardstate *VAR_14 = FUNC_6(VAR_12);
 struct bas_cardstate *VAR_15 = VAR_14->hw.bas;
 int VAR_16;


 if (FUNC_5(VAR_15, VAR_6, 0) & VAR_6) {
  FUNC_3(VAR_7, "already suspended");
  return 0;
 }


 VAR_16 = FUNC_8(VAR_15->waitqueue,
    !(VAR_15->basstate &
      (VAR_4 | VAR_5 | VAR_2 | VAR_3)),
    VAR_0 * VAR_10 / 10);
 FUNC_3(VAR_7, "wait_event_timeout() -> %d", VAR_16);


 if (VAR_15->basstate & (VAR_4 | VAR_5 | VAR_2 | VAR_3)) {
  FUNC_2(VAR_14->dev, "cannot suspend:\n");
  if (VAR_15->basstate & VAR_4)
   FUNC_2(VAR_14->dev, " B channel 1 open\n");
  if (VAR_15->basstate & VAR_5)
   FUNC_2(VAR_14->dev, " B channel 2 open\n");
  if (VAR_15->basstate & VAR_2)
   FUNC_2(VAR_14->dev, " receiving AT reply\n");
  if (VAR_15->basstate & VAR_3)
   FUNC_2(VAR_14->dev, " sending AT command\n");
  FUNC_5(VAR_15, 0, VAR_6);
  return -VAR_8;
 }


 if (VAR_15->basstate & VAR_1) {
  FUNC_3(VAR_7, "closing AT channel");
  VAR_16 = FUNC_4(VAR_14->bcs, VAR_9, 0, 0);
  if (VAR_16) {
   FUNC_5(VAR_15, 0, VAR_6);
   return VAR_16;
  }
  FUNC_8(VAR_15->waitqueue, !VAR_15->pending,
       VAR_0 * VAR_10 / 10);

 }


 FUNC_7(VAR_15->urb_ctrl);
 FUNC_7(VAR_15->urb_int_in);
 FUNC_1(&VAR_15->timer_ctrl);
 FUNC_1(&VAR_15->timer_atrdy);
 FUNC_1(&VAR_15->timer_cmd_in);
 FUNC_1(&VAR_15->timer_int_in);




 if (VAR_13.event != VAR_11)
  FUNC_0(&VAR_15->int_in_wq);

 FUNC_3(VAR_7, "suspend complete");
 return 0;
}
