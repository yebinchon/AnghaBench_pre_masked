
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw9910_priv {int subdev; int clk; scalar_t__ pdn_gpio; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct tw9910_priv* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct tw9910_priv *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->pdn_gpio)
  FUNC_1(VAR_1->pdn_gpio);
 FUNC_0(VAR_1->clk);
 FUNC_3(&VAR_1->subdev);

 return 0;
}
