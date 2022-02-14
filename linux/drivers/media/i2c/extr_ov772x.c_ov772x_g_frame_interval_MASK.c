
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fract {int numerator; int denominator; } ;
struct v4l2_subdev_frame_interval {struct v4l2_fract interval; } ;
struct v4l2_subdev {int dummy; } ;
struct ov772x_priv {int fps; } ;


 struct ov772x_priv* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_0,
       struct v4l2_subdev_frame_interval *VAR_1)
{
 struct ov772x_priv *VAR_2 = FUNC_0(VAR_0);
 struct v4l2_fract *VAR_3 = &VAR_1->interval;

 VAR_3->numerator = 1;
 VAR_3->denominator = VAR_2->fps;

 return 0;
}
