
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov772x_priv {scalar_t__ rstb_gpio; scalar_t__ clk; scalar_t__ pwdn_gpio; int subdev; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (int,int) ;
 struct i2c_client* FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct ov772x_priv *VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_9(&VAR_1->subdev);
 int VAR_3;

 if (VAR_1->clk) {
  VAR_3 = FUNC_3(VAR_1->clk);
  if (VAR_3)
   return VAR_3;
 }

 if (VAR_1->pwdn_gpio) {
  FUNC_7(VAR_1->pwdn_gpio, 1);
  FUNC_8(500, 1000);
 }







 VAR_1->rstb_gpio = FUNC_5(&VAR_2->dev, "reset",
          VAR_0);
 if (FUNC_0(VAR_1->rstb_gpio)) {
  FUNC_4(&VAR_2->dev, "Unable to get GPIO \"reset\"");
  FUNC_2(VAR_1->clk);
  return FUNC_1(VAR_1->rstb_gpio);
 }

 if (VAR_1->rstb_gpio) {
  FUNC_7(VAR_1->rstb_gpio, 1);
  FUNC_8(500, 1000);
  FUNC_7(VAR_1->rstb_gpio, 0);
  FUNC_8(500, 1000);

  FUNC_6(VAR_1->rstb_gpio);
 }

 return 0;
}
