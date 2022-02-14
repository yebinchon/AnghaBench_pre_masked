
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct hfa384x_usbctlx {int dummy; } ;
struct TYPE_2__ {int lock; int active; } ;
struct hfa384x {int resp_timer_done; TYPE_1__ ctlxq; } ;


 struct hfa384x* FUNC_0 (int ,struct timer_list*,int ) ;
 struct hfa384x_usbctlx* FUNC_1 (struct hfa384x*) ;
 int FUNC_2 (struct hfa384x*) ;
 struct hfa384x* VAR_0 ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (struct hfa384x*,struct hfa384x_usbctlx*) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_2)
{
 struct hfa384x *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);
 unsigned long VAR_4;

 FUNC_4(&VAR_3->ctlxq.lock, VAR_4);

 VAR_3->resp_timer_done = 1;




 if (!FUNC_3(&VAR_3->ctlxq.active)) {
  struct hfa384x_usbctlx *VAR_5 = FUNC_1(VAR_3);

  if (FUNC_6(VAR_3, VAR_5) == 0) {
   FUNC_5(&VAR_3->ctlxq.lock, VAR_4);
   FUNC_2(VAR_3);
   return;
  }
 }
 FUNC_5(&VAR_3->ctlxq.lock, VAR_4);
}
