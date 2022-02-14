
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct ov7670_info {int on; scalar_t__ pwdn_gpio; int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int) ;
 struct ov7670_info* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_3(struct v4l2_subdev *VAR_0)
{
 struct ov7670_info *VAR_1 = FUNC_2(VAR_0);

 if (!VAR_1->on)
  return;

 FUNC_0(VAR_1->clk);

 if (VAR_1->pwdn_gpio)
  FUNC_1(VAR_1->pwdn_gpio, 1);

 VAR_1->on = 0;
}
