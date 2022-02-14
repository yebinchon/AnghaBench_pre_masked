
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct dsbr100_device {int v4l2_lock; int muted; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (struct dsbr100_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct dsbr100_device* FUNC_5 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_6(struct usb_interface *VAR_0)
{
 struct dsbr100_device *VAR_1 = FUNC_5(VAR_0);

 FUNC_3(&VAR_1->v4l2_lock);
 if (!VAR_1->muted && FUNC_2(VAR_1) < 0)
  FUNC_1(&VAR_0->dev, "dsbr100_start failed\n");
 FUNC_4(&VAR_1->v4l2_lock);

 FUNC_0(&VAR_0->dev, "coming out of suspend..\n");
 return 0;
}
