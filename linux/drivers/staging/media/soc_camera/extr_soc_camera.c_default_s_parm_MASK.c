
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_streamparm {int dummy; } ;
struct soc_camera_device {int vdev; } ;


 struct v4l2_subdev* FUNC_0 (struct soc_camera_device*) ;
 int FUNC_1 (int ,struct v4l2_subdev*,struct v4l2_streamparm*) ;

__attribute__((used)) static int FUNC_2(struct soc_camera_device *VAR_0,
     struct v4l2_streamparm *VAR_1)
{
 struct v4l2_subdev *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_0->vdev, VAR_2, VAR_1);
}
