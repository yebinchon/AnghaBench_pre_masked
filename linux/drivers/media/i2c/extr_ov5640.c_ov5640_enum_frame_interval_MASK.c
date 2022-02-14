
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_fract {int numerator; int denominator; } ;
struct v4l2_subdev_frame_interval_enum {scalar_t__ pad; size_t index; struct v4l2_fract interval; int height; int width; } ;
struct v4l2_subdev {int dummy; } ;
struct ov5640_dev {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (struct ov5640_dev*,struct v4l2_fract*,int ,int ) ;
 struct ov5640_dev* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(
 struct v4l2_subdev *VAR_3,
 struct v4l2_subdev_pad_config *VAR_4,
 struct v4l2_subdev_frame_interval_enum *VAR_5)
{
 struct ov5640_dev *VAR_6 = FUNC_1(VAR_3);
 struct v4l2_fract VAR_7;
 int VAR_8;

 if (VAR_5->pad != 0)
  return -VAR_0;
 if (VAR_5->index >= VAR_1)
  return -VAR_0;

 VAR_7.numerator = 1;
 VAR_7.denominator = VAR_2[VAR_5->index];

 VAR_8 = FUNC_0(VAR_6, &VAR_7,
     VAR_5->width, VAR_5->height);
 if (VAR_8 < 0)
  return -VAR_0;

 VAR_5->interval = VAR_7;
 return 0;
}
