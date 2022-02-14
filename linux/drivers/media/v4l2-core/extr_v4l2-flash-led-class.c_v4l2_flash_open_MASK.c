
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_fh {int vfh; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_flash {struct led_classdev* iled_cdev; struct led_classdev_flash* fled_cdev; } ;
struct led_classdev {int led_access; } ;
struct led_classdev_flash {struct led_classdev led_cdev; } ;


 int FUNC_0 (struct v4l2_flash*) ;
 int FUNC_1 (struct led_classdev*) ;
 int FUNC_2 (struct led_classdev*) ;
 int FUNC_3 (struct led_classdev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct v4l2_flash* FUNC_7 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_8(struct v4l2_subdev *VAR_0, struct v4l2_subdev_fh *VAR_1)
{
 struct v4l2_flash *VAR_2 = FUNC_7(VAR_0);
 struct led_classdev_flash *VAR_3 = VAR_2->fled_cdev;
 struct led_classdev *VAR_4 = VAR_3 ? &VAR_3->led_cdev : ((void*)0);
 struct led_classdev *VAR_5 = VAR_2->iled_cdev;
 int VAR_6 = 0;

 if (!FUNC_6(&VAR_1->vfh))
  return 0;

 if (VAR_4) {
  FUNC_4(&VAR_4->led_access);

  FUNC_1(VAR_4);
  FUNC_3(VAR_4);

  FUNC_5(&VAR_4->led_access);
 }

 if (VAR_5) {
  FUNC_4(&VAR_5->led_access);

  FUNC_1(VAR_5);
  FUNC_3(VAR_5);

  FUNC_5(&VAR_5->led_access);
 }

 VAR_6 = FUNC_0(VAR_2);
 if (VAR_6 < 0)
  goto out_sync_device;

 return 0;
out_sync_device:
 if (VAR_4) {
  FUNC_4(&VAR_4->led_access);
  FUNC_2(VAR_4);
  FUNC_5(&VAR_4->led_access);
 }

 if (VAR_5) {
  FUNC_4(&VAR_5->led_access);
  FUNC_2(VAR_5);
  FUNC_5(&VAR_5->led_access);
 }

 return VAR_6;
}
