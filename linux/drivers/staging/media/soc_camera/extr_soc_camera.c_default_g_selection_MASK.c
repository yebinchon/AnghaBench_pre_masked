
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_selection {int r; int target; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_selection {int r; int target; } ;
struct soc_camera_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct v4l2_subdev* FUNC_0 (struct soc_camera_device*) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int ,int *,struct v4l2_subdev_selection*) ;

__attribute__((used)) static int FUNC_2(struct soc_camera_device *VAR_3,
          struct v4l2_selection *VAR_4)
{
 struct v4l2_subdev *VAR_5 = FUNC_0(VAR_3);
 struct v4l2_subdev_selection VAR_6 = {
  .which = VAR_0,
  .target = VAR_4->target,
 };
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_2, VAR_1, ((void*)0), &VAR_6);
 if (VAR_7)
  return VAR_7;
 VAR_4->r = VAR_6.r;
 return 0;
}
