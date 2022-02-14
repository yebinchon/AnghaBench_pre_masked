
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_fract {int numerator; int denominator; } ;



__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_0,
          struct v4l2_fract *VAR_1)
{
 VAR_1->numerator = 1;
 VAR_1->denominator = 1;

 return 0;
}
