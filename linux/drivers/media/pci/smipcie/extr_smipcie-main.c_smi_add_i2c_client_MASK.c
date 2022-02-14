
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* driver; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_3__ {int owner; } ;


 struct i2c_client* FUNC_0 (struct i2c_adapter*,struct i2c_board_info*) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct i2c_client *FUNC_4(struct i2c_adapter *VAR_0,
   struct i2c_board_info *VAR_1)
{
 struct i2c_client *VAR_2;

 FUNC_2(VAR_1->type);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0) || VAR_2->dev.driver == ((void*)0))
  goto err_add_i2c_client;

 if (!FUNC_3(VAR_2->dev.driver->owner)) {
  FUNC_1(VAR_2);
  goto err_add_i2c_client;
 }
 return VAR_2;

err_add_i2c_client:
 VAR_2 = ((void*)0);
 return VAR_2;
}
