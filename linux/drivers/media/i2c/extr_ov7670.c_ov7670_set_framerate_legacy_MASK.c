
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_fract {int numerator; int denominator; } ;
struct ov7670_info {int clock_speed; int clkrc; scalar_t__ on; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int) ;
 struct ov7670_info* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_2,
     struct v4l2_fract *VAR_3)
{
 struct ov7670_info *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 if (VAR_3->numerator == 0 || VAR_3->denominator == 0)
  VAR_5 = 1;
 else
  VAR_5 = (VAR_3->numerator * VAR_4->clock_speed) / VAR_3->denominator;
 if (VAR_5 == 0)
  VAR_5 = 1;
 else if (VAR_5 > VAR_0)
  VAR_5 = VAR_0;
 VAR_4->clkrc = (VAR_4->clkrc & 0x80) | VAR_5;
 VAR_3->numerator = 1;
 VAR_3->denominator = VAR_4->clock_speed / VAR_5;






 if (VAR_4->on)
  return FUNC_0(VAR_2, VAR_1, VAR_4->clkrc);

 return 0;
}
