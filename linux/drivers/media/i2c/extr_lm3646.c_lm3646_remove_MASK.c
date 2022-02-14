
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entity; } ;
struct lm3646_flash {TYPE_1__ subdev_led; int ctrls_led; } ;
struct i2c_client {int dummy; } ;


 struct lm3646_flash* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct lm3646_flash *VAR_1 = FUNC_0(VAR_0);

 FUNC_3(&VAR_1->subdev_led);
 FUNC_2(&VAR_1->ctrls_led);
 FUNC_1(&VAR_1->subdev_led.entity);

 return 0;
}
