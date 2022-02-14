
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct camera_data {int streaming; int v4l2_lock; } ;
typedef int pm_message_t ;


 int FUNC_0 (struct camera_data*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct camera_data* FUNC_4 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_5(struct usb_interface *VAR_0, pm_message_t VAR_1)
{
 struct camera_data *VAR_2 = FUNC_4(VAR_0);

 FUNC_2(&VAR_2->v4l2_lock);
 if (VAR_2->streaming) {
  FUNC_0(VAR_2);
  VAR_2->streaming = 1;
 }
 FUNC_3(&VAR_2->v4l2_lock);

 FUNC_1(&VAR_0->dev, "going into suspend..\n");
 return 0;
}
