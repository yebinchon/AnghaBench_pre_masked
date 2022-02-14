
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct dsbr100_device {int v4l2_lock; int muted; } ;
typedef int pm_message_t ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (struct dsbr100_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct dsbr100_device* FUNC_5 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_6(struct usb_interface *VAR_0, pm_message_t VAR_1)
{
 struct dsbr100_device *VAR_2 = FUNC_5(VAR_0);

 FUNC_3(&VAR_2->v4l2_lock);
 if (!VAR_2->muted && FUNC_2(VAR_2) < 0)
  FUNC_1(&VAR_0->dev, "dsbr100_stop failed\n");
 FUNC_4(&VAR_2->v4l2_lock);

 FUNC_0(&VAR_0->dev, "going into suspend..\n");
 return 0;
}
