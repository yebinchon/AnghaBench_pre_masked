
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_fract {int numerator; int denominator; } ;
struct ov7670_info {int clock_speed; int clkrc; scalar_t__ on; TYPE_1__* fmt; scalar_t__ pll_bypass; } ;
struct TYPE_2__ {scalar_t__ mbus_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,struct v4l2_fract*) ;
 struct ov7670_info* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_4,
     struct v4l2_fract *VAR_5)
{
 struct ov7670_info *VAR_6 = FUNC_2(VAR_4);
 u32 VAR_7;
 int VAR_8;
 if (VAR_5->numerator == 0 || VAR_5->denominator == 0) {
  VAR_7 = 0;
 } else {
  VAR_8 = VAR_6->pll_bypass ? 1 : VAR_3;
  VAR_7 = (5 * VAR_8 * VAR_6->clock_speed * VAR_5->numerator) /
   (4 * VAR_5->denominator);
  if (VAR_6->fmt->mbus_code == VAR_2)
   VAR_7 = (VAR_7 << 1);
  VAR_7--;
 }






 if (VAR_7 <= 0)
  VAR_7 = VAR_0;
 else if (VAR_7 > VAR_1)
  VAR_7 = VAR_1;
 VAR_6->clkrc = VAR_7;


 FUNC_1(VAR_4, VAR_5);






 if (VAR_6->on)
  return FUNC_0(VAR_4);

 return 0;
}
