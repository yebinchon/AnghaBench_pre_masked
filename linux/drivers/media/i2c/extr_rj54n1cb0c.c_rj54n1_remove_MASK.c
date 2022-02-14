
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rj54n1 {int subdev; int hdl; int clk; scalar_t__ pwup_gpio; scalar_t__ enable_gpio; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct rj54n1* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct rj54n1 *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->enable_gpio)
  FUNC_1(VAR_1->enable_gpio);
 if (VAR_1->pwup_gpio)
  FUNC_1(VAR_1->pwup_gpio);

 FUNC_0(VAR_1->clk);
 FUNC_4(&VAR_1->hdl);
 FUNC_3(&VAR_1->subdev);

 return 0;
}
