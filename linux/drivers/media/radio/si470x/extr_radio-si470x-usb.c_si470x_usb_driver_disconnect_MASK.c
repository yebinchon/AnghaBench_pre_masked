
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct si470x_device {int v4l2_dev; int lock; int int_in_urb; int videodev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct si470x_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct usb_interface*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_0)
{
 struct si470x_device *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->lock);
 FUNC_5(&VAR_1->v4l2_dev);
 FUNC_7(&VAR_1->videodev);
 FUNC_3(VAR_1->int_in_urb);
 FUNC_4(VAR_0, ((void*)0));
 FUNC_1(&VAR_1->lock);
 FUNC_6(&VAR_1->v4l2_dev);
}
