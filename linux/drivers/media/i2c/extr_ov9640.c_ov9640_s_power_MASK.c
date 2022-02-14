
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct ov9640_priv {int gpio_power; int clk; int gpio_reset; } ;


 int FUNC_0 (int ,int) ;
 struct ov9640_priv* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct ov9640_priv *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = 0;

 if (VAR_1) {
  FUNC_0(VAR_2->gpio_power, 1);
  FUNC_2(1000, 2000);
  VAR_3 = FUNC_4(VAR_2->clk);
  FUNC_2(1000, 2000);
  FUNC_0(VAR_2->gpio_reset, 0);
 } else {
  FUNC_0(VAR_2->gpio_reset, 1);
  FUNC_2(1000, 2000);
  FUNC_3(VAR_2->clk);
  FUNC_2(1000, 2000);
  FUNC_0(VAR_2->gpio_power, 0);
 }

 return VAR_3;
}
