
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct iguanair {int lock; int urb_out; int urb_in; int dev; scalar_t__ receiver_on; } ;
typedef int pm_message_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct iguanair*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct iguanair* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct usb_interface *VAR_0, pm_message_t VAR_1)
{
 struct iguanair *VAR_2 = FUNC_4(VAR_0);
 int VAR_3 = 0;

 FUNC_2(&VAR_2->lock);

 if (VAR_2->receiver_on) {
  VAR_3 = FUNC_1(VAR_2, 0);
  if (VAR_3)
   FUNC_0(VAR_2->dev, "failed to disable receiver for suspend\n");
 }

 FUNC_5(VAR_2->urb_in);
 FUNC_5(VAR_2->urb_out);

 FUNC_3(&VAR_2->lock);

 return VAR_3;
}
