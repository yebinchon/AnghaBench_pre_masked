
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {scalar_t__ index; int code; } ;
struct v4l2_subdev {int dummy; } ;
struct imx355 {int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct imx355*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct imx355* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_1,
     struct v4l2_subdev_pad_config *VAR_2,
     struct v4l2_subdev_mbus_code_enum *VAR_3)
{
 struct imx355 *VAR_4 = FUNC_3(VAR_1);

 if (VAR_3->index > 0)
  return -VAR_0;

 FUNC_1(&VAR_4->mutex);
 VAR_3->code = FUNC_0(VAR_4);
 FUNC_2(&VAR_4->mutex);

 return 0;
}
