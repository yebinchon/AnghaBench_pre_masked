
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct rj54n1 {scalar_t__ pwup_gpio; scalar_t__ enable_gpio; int clk; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int) ;
 struct rj54n1* FUNC_4 (struct i2c_client*) ;
 struct i2c_client* FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_5(VAR_0);
 struct rj54n1 *VAR_3 = FUNC_4(VAR_2);

 if (VAR_1) {
  if (VAR_3->pwup_gpio)
   FUNC_2(VAR_3->pwup_gpio, 1);
  if (VAR_3->enable_gpio)
   FUNC_2(VAR_3->enable_gpio, 1);

  FUNC_3(1);

  return FUNC_1(VAR_3->clk);
 }

 FUNC_0(VAR_3->clk);

 if (VAR_3->enable_gpio)
  FUNC_2(VAR_3->enable_gpio, 0);
 if (VAR_3->pwup_gpio)
  FUNC_2(VAR_3->pwup_gpio, 0);

 return 0;
}
