
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hub {int irq_urb_lock; int irq_urb_retry; int intfdev; int urb; scalar_t__ quiescing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct usb_hub *VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;

 FUNC_2(&VAR_6->irq_urb_lock, VAR_7);

 if (VAR_6->quiescing) {
  FUNC_3(&VAR_6->irq_urb_lock, VAR_7);
  return;
 }

 VAR_8 = FUNC_4(VAR_6->urb, VAR_3);
 if (VAR_8 && VAR_8 != -VAR_0 && VAR_8 != -VAR_1 &&
     VAR_8 != -VAR_2) {
  FUNC_0(VAR_6->intfdev, "resubmit --> %d\n", VAR_8);
  FUNC_1(&VAR_6->irq_urb_retry, VAR_5 + VAR_4);
 }

 FUNC_3(&VAR_6->irq_urb_lock, VAR_7);
}
