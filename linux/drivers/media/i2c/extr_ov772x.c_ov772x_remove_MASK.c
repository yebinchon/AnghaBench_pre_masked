
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entity; } ;
struct ov772x_priv {int lock; int hdl; TYPE_1__ subdev; scalar_t__ pwdn_gpio; int clk; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ov772x_priv* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_0)
{
 struct ov772x_priv *VAR_1 = FUNC_5(FUNC_2(VAR_0));

 FUNC_3(&VAR_1->subdev.entity);
 FUNC_0(VAR_1->clk);
 if (VAR_1->pwdn_gpio)
  FUNC_1(VAR_1->pwdn_gpio);
 FUNC_6(&VAR_1->subdev);
 FUNC_7(&VAR_1->hdl);
 FUNC_4(&VAR_1->lock);

 return 0;
}
