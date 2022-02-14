
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_format {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct ov5670 {int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ov5670*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*) ;
 struct ov5670* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_0,
     struct v4l2_subdev_pad_config *VAR_1,
     struct v4l2_subdev_format *VAR_2)
{
 struct ov5670 *VAR_3 = FUNC_3(VAR_0);
 int VAR_4;

 FUNC_0(&VAR_3->mutex);
 VAR_4 = FUNC_2(VAR_3, VAR_1, VAR_2);
 FUNC_1(&VAR_3->mutex);

 return VAR_4;
}
