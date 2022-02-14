
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct soc_camera_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct v4l2_subdev* FUNC_0 (struct soc_camera_device*) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct soc_camera_device *VAR_4)
{
 struct v4l2_subdev *VAR_5 = FUNC_0(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_2, VAR_3, 1);
 if (VAR_6 < 0 && VAR_6 != -VAR_1 && VAR_6 != -VAR_0)
  return VAR_6;

 return 0;
}
