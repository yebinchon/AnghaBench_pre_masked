
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_fract {int numerator; int denominator; } ;
struct ov7670_info {int clock_speed; int clkrc; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ov7670_info* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_1(struct v4l2_subdev *VAR_2,
     struct v4l2_fract *VAR_3)
{
 struct ov7670_info *VAR_4 = FUNC_0(VAR_2);

 VAR_3->numerator = 1;
 VAR_3->denominator = VAR_4->clock_speed;
 if ((VAR_4->clkrc & VAR_0) == 0 && (VAR_4->clkrc & VAR_1) > 1)
  VAR_3->denominator /= (VAR_4->clkrc & VAR_1);
}
