
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int power_up; int id; int b_ssend_srp; int b_sess_vld; int lock; int host_req_flag; int * ops; TYPE_1__* otg; } ;
struct TYPE_8__ {int hnp_polling_support; } ;
struct TYPE_7__ {int state; TYPE_2__* gadget; int usb_phy; scalar_t__ phy; } ;
struct ci_hdrc {TYPE_3__ fsm; TYPE_4__* dev; int next_otg_timer; scalar_t__ enabled_otg_timer_bits; TYPE_2__ gadget; TYPE_1__ otg; int usb_phy; scalar_t__ phy; } ;
struct TYPE_10__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ci_hdrc*) ;
 int VAR_8 ;
 int FUNC_1 (TYPE_4__*,char*,int) ;
 int FUNC_2 (TYPE_4__*,char*) ;
 int FUNC_3 (TYPE_4__*,int,int ) ;
 scalar_t__ FUNC_4 (struct ci_hdrc*,int ) ;
 int FUNC_5 (struct ci_hdrc*,int ,int ) ;
 int VAR_9 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;

int FUNC_8(struct ci_hdrc *VAR_10)
{
 int VAR_11 = 0;

 if (VAR_10->phy)
  VAR_10->otg.phy = VAR_10->phy;
 else
  VAR_10->otg.usb_phy = VAR_10->usb_phy;

 VAR_10->otg.gadget = &VAR_10->gadget;
 VAR_10->fsm.otg = &VAR_10->otg;
 VAR_10->fsm.power_up = 1;
 VAR_10->fsm.id = FUNC_4(VAR_10, VAR_6) ? 1 : 0;
 VAR_10->fsm.otg->state = VAR_7;
 VAR_10->fsm.ops = &VAR_8;
 VAR_10->gadget.hnp_polling_support = 1;
 VAR_10->fsm.host_req_flag = FUNC_3(VAR_10->dev, 1, VAR_1);
 if (!VAR_10->fsm.host_req_flag)
  return -VAR_0;

 FUNC_6(&VAR_10->fsm.lock);

 VAR_11 = FUNC_0(VAR_10);
 if (VAR_11) {
  FUNC_2(VAR_10->dev, "Couldn't init OTG timers\n");
  return VAR_11;
 }
 VAR_10->enabled_otg_timer_bits = 0;
 VAR_10->next_otg_timer = VAR_2;

 VAR_11 = FUNC_7(&VAR_10->dev->kobj, &VAR_9);
 if (VAR_11 < 0) {
  FUNC_1(VAR_10->dev,
   "Can't register sysfs attr group: %d\n", VAR_11);
  return VAR_11;
 }


 FUNC_5(VAR_10, VAR_3, VAR_3);

 if (VAR_10->fsm.id) {
  VAR_10->fsm.b_ssend_srp =
   FUNC_4(VAR_10, VAR_4) ? 0 : 1;
  VAR_10->fsm.b_sess_vld =
   FUNC_4(VAR_10, VAR_4) ? 1 : 0;

  FUNC_5(VAR_10, VAR_5, VAR_5);
 }

 return 0;
}
