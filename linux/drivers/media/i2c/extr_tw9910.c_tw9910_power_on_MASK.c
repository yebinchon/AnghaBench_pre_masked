
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw9910_priv {scalar_t__ rstb_gpio; scalar_t__ pdn_gpio; scalar_t__ clk; int subdev; } ;
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
 struct i2c_client* FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct tw9910_priv *VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_8(&VAR_1->subdev);
 int VAR_3;

 if (VAR_1->clk) {
  VAR_3 = FUNC_3(VAR_1->clk);
  if (VAR_3)
   return VAR_3;
 }

 FUNC_7(VAR_1->pdn_gpio, 0);







 VAR_1->rstb_gpio = FUNC_5(&VAR_2->dev, "rstb",
          VAR_0);
 if (FUNC_0(VAR_1->rstb_gpio)) {
  FUNC_4(&VAR_2->dev, "Unable to get GPIO \"rstb\"");
  FUNC_2(VAR_1->clk);
  FUNC_7(VAR_1->pdn_gpio, 1);
  return FUNC_1(VAR_1->rstb_gpio);
 }

 if (VAR_1->rstb_gpio) {
  FUNC_7(VAR_1->rstb_gpio, 1);
  FUNC_7(VAR_1->rstb_gpio, 0);

  FUNC_6(VAR_1->rstb_gpio);
 }

 return 0;
}
