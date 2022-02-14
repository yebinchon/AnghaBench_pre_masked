
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fract {int numerator; int denominator; } ;
struct v4l2_subdev_frame_interval {struct v4l2_fract interval; } ;
struct v4l2_subdev {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_0,
       struct v4l2_subdev_frame_interval *VAR_1)
{
 struct v4l2_fract *VAR_2 = &VAR_1->interval;


 VAR_2->numerator = 1;
 VAR_2->denominator = 60;

 return 0;
}
