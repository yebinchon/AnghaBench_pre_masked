
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct si4713_usb_device {int v4l2_dev; int lock; int vdev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct si4713_usb_device* FUNC_3 (int ) ;
 int FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct usb_interface*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct usb_interface *VAR_0)
{
 struct si4713_usb_device *VAR_1 = FUNC_3(FUNC_4(VAR_0));

 FUNC_0(&VAR_0->dev, "Si4713 development board now disconnected\n");

 FUNC_1(&VAR_1->lock);
 FUNC_5(VAR_0, ((void*)0));
 FUNC_8(&VAR_1->vdev);
 FUNC_6(&VAR_1->v4l2_dev);
 FUNC_2(&VAR_1->lock);
 FUNC_7(&VAR_1->v4l2_dev);
}
