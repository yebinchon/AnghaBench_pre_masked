
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entity; } ;
struct ov2640_priv {int clk; TYPE_1__ subdev; int lock; int hdl; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ov2640_priv* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_0)
{
 struct ov2640_priv *VAR_1 = FUNC_3(VAR_0);

 FUNC_4(&VAR_1->subdev);
 FUNC_5(&VAR_1->hdl);
 FUNC_2(&VAR_1->lock);
 FUNC_1(&VAR_1->subdev.entity);
 FUNC_6(&VAR_1->subdev);
 FUNC_0(VAR_1->clk);
 return 0;
}
