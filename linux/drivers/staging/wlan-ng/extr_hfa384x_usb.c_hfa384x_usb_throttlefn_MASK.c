
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_4__ {int lock; } ;
struct hfa384x {TYPE_2__ ctlxq; int usb_work; int usb_flags; TYPE_1__* wlandev; } ;
struct TYPE_3__ {int hwremoved; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct hfa384x* FUNC_0 (int ,struct timer_list*,int ) ;
 struct hfa384x* VAR_4 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_6)
{
 struct hfa384x *VAR_7 = FUNC_0(VAR_7, VAR_6, VAR_5);
 unsigned long VAR_8;

 FUNC_3(&VAR_7->ctlxq.lock, VAR_8);





 FUNC_1("flags=0x%lx\n", VAR_7->usb_flags);
 if (!VAR_7->wlandev->hwremoved &&
     ((FUNC_5(VAR_0, &VAR_7->usb_flags) &&
       !FUNC_6(VAR_2, &VAR_7->usb_flags)) |
      (FUNC_5(VAR_1, &VAR_7->usb_flags) &&
       !FUNC_6(VAR_3, &VAR_7->usb_flags))
     )) {
  FUNC_2(&VAR_7->usb_work);
 }

 FUNC_4(&VAR_7->ctlxq.lock, VAR_8);
}
