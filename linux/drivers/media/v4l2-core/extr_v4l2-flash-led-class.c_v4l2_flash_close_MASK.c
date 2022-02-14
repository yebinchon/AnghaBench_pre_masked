
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_fh {int vfh; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_flash {scalar_t__* ctrls; struct led_classdev* iled_cdev; struct led_classdev_flash* fled_cdev; } ;
struct led_classdev {int led_access; } ;
struct led_classdev_flash {struct led_classdev led_cdev; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct led_classdev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *) ;
 struct v4l2_flash* FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_2, struct v4l2_subdev_fh *VAR_3)
{
 struct v4l2_flash *VAR_4 = FUNC_5(VAR_2);
 struct led_classdev_flash *VAR_5 = VAR_4->fled_cdev;
 struct led_classdev *VAR_6 = VAR_5 ? &VAR_5->led_cdev : ((void*)0);
 struct led_classdev *VAR_7 = VAR_4->iled_cdev;
 int VAR_8 = 0;

 if (!FUNC_4(&VAR_3->vfh))
  return 0;

 if (VAR_6) {
  FUNC_1(&VAR_6->led_access);

  if (VAR_4->ctrls[VAR_0])
   VAR_8 = FUNC_3(
    VAR_4->ctrls[VAR_0],
    VAR_1);
  FUNC_0(VAR_6);

  FUNC_2(&VAR_6->led_access);
 }

 if (VAR_7) {
  FUNC_1(&VAR_7->led_access);
  FUNC_0(VAR_7);
  FUNC_2(&VAR_7->led_access);
 }

 return VAR_8;
}
