
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct iguanair {int lock; int dev; scalar_t__ receiver_on; int urb_in; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct iguanair*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct iguanair* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct usb_interface *VAR_1)
{
 struct iguanair *VAR_2 = FUNC_4(VAR_1);
 int VAR_3 = 0;

 FUNC_2(&VAR_2->lock);

 VAR_3 = FUNC_5(VAR_2->urb_in, VAR_0);
 if (VAR_3)
  FUNC_0(VAR_1->dev, "failed to submit urb: %d\n", VAR_3);

 if (VAR_2->receiver_on) {
  VAR_3 = FUNC_1(VAR_2, 1);
  if (VAR_3)
   FUNC_0(VAR_2->dev, "failed to enable receiver after resume\n");
 }

 FUNC_3(&VAR_2->lock);

 return VAR_3;
}
