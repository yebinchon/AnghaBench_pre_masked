
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9m111 {int clk; int regulator; int subdev; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct mt9m111*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct i2c_client* FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct mt9m111 *VAR_0)
{
 struct i2c_client *VAR_1 = FUNC_6(&VAR_0->subdev);
 int VAR_2;

 VAR_2 = FUNC_5(VAR_0->clk);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_3(VAR_0->regulator);
 if (VAR_2 < 0)
  goto out_clk_disable;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 < 0)
  goto out_regulator_disable;

 return 0;

out_regulator_disable:
 FUNC_2(VAR_0->regulator);

out_clk_disable:
 FUNC_4(VAR_0->clk);

 FUNC_0(&VAR_1->dev, "Failed to resume the sensor: %d\n", VAR_2);

 return VAR_2;
}
