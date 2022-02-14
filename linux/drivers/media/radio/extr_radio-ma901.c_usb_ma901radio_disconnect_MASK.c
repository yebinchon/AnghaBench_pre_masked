
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct ma901radio_device {int v4l2_dev; int lock; int vdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct ma901radio_device* FUNC_2 (int ) ;
 int FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct usb_interface*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_0)
{
 struct ma901radio_device *VAR_1 = FUNC_2(FUNC_3(VAR_0));

 FUNC_0(&VAR_1->lock);
 FUNC_7(&VAR_1->vdev);
 FUNC_4(VAR_0, ((void*)0));
 FUNC_5(&VAR_1->v4l2_dev);
 FUNC_1(&VAR_1->lock);
 FUNC_6(&VAR_1->v4l2_dev);
}
