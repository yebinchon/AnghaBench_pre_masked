
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hfa384x_usbctlx {int list; int state; } ;
struct TYPE_4__ {int lock; int pending; } ;
struct hfa384x {TYPE_2__ ctlxq; TYPE_1__* wlandev; } ;
struct TYPE_3__ {scalar_t__ hwremoved; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfa384x*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct hfa384x *VAR_2,
      struct hfa384x_usbctlx *VAR_3)
{
 unsigned long VAR_4;

 FUNC_2(&VAR_2->ctlxq.lock, VAR_4);

 if (VAR_2->wlandev->hwremoved) {
  FUNC_3(&VAR_2->ctlxq.lock, VAR_4);
  return -VAR_1;
 }

 VAR_3->state = VAR_0;
 FUNC_1(&VAR_3->list, &VAR_2->ctlxq.pending);
 FUNC_3(&VAR_2->ctlxq.lock, VAR_4);
 FUNC_0(VAR_2);

 return 0;
}
