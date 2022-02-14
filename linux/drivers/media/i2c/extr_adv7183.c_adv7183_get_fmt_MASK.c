
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_format {int format; scalar_t__ pad; } ;
struct v4l2_subdev {int dummy; } ;
struct adv7183 {int fmt; } ;


 int VAR_0 ;
 struct adv7183* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_1,
  struct v4l2_subdev_pad_config *VAR_2,
  struct v4l2_subdev_format *VAR_3)
{
 struct adv7183 *VAR_4 = FUNC_0(VAR_1);

 if (VAR_3->pad)
  return -VAR_0;

 VAR_3->format = VAR_4->fmt;
 return 0;
}
