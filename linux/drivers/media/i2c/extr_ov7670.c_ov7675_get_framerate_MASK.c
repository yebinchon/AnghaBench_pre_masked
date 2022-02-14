
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_fract {int numerator; int denominator; } ;
struct ov7670_info {int clkrc; int clock_speed; TYPE_1__* fmt; scalar_t__ pll_bypass; } ;
struct TYPE_2__ {scalar_t__ mbus_code; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct ov7670_info* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_1(struct v4l2_subdev *VAR_2,
     struct v4l2_fract *VAR_3)
{
 struct ov7670_info *VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5 = VAR_4->clkrc;
 int VAR_6;

 if (VAR_4->pll_bypass)
  VAR_6 = 1;
 else
  VAR_6 = VAR_1;

 VAR_5++;
 if (VAR_4->fmt->mbus_code == VAR_0)
  VAR_5 = (VAR_5 >> 1);

 VAR_3->numerator = 1;
 VAR_3->denominator = (5 * VAR_6 * VAR_4->clock_speed) /
   (4 * VAR_5);
}
