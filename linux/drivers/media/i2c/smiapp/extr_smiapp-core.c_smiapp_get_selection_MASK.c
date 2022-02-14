
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_selection {int dummy; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct smiapp_sensor {int mutex; } ;


 int FUNC_0 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_selection*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct smiapp_sensor* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_0,
    struct v4l2_subdev_pad_config *VAR_1,
    struct v4l2_subdev_selection *VAR_2)
{
 struct smiapp_sensor *VAR_3 = FUNC_3(VAR_0);
 int VAR_4;

 FUNC_1(&VAR_3->mutex);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_3->mutex);

 return VAR_4;
}
