
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct ov7670_info {int on; scalar_t__ clk; scalar_t__ resetb_gpio; scalar_t__ pwdn_gpio; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 struct ov7670_info* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct v4l2_subdev *VAR_0)
{
 struct ov7670_info *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->on)
  return;

 FUNC_0(VAR_1->clk);

 if (VAR_1->pwdn_gpio)
  FUNC_1(VAR_1->pwdn_gpio, 0);
 if (VAR_1->resetb_gpio) {
  FUNC_1(VAR_1->resetb_gpio, 1);
  FUNC_3(500, 1000);
  FUNC_1(VAR_1->resetb_gpio, 0);
 }
 if (VAR_1->pwdn_gpio || VAR_1->resetb_gpio || VAR_1->clk)
  FUNC_3(3000, 5000);

 VAR_1->on = 1;
}
