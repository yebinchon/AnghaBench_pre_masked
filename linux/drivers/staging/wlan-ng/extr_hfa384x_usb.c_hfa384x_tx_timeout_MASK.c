
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlandevice {struct hfa384x* priv; } ;
struct TYPE_3__ {int lock; } ;
struct hfa384x {TYPE_1__ ctlxq; int usb_work; int usb_flags; TYPE_2__* wlandev; } ;
struct TYPE_4__ {int hwremoved; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct wlandevice *VAR_2)
{
 struct hfa384x *VAR_3 = VAR_2->priv;
 unsigned long VAR_4;

 FUNC_1(&VAR_3->ctlxq.lock, VAR_4);

 if (!VAR_3->wlandev->hwremoved) {
  int VAR_5;

  VAR_5 = !FUNC_3(VAR_1, &VAR_3->usb_flags);
  VAR_5 |= !FUNC_3(VAR_0, &VAR_3->usb_flags);
  if (VAR_5)
   FUNC_0(&VAR_3->usb_work);
 }

 FUNC_2(&VAR_3->ctlxq.lock, VAR_4);
}
