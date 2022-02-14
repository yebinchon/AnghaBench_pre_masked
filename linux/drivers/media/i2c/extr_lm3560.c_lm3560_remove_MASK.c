
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm3560_flash {TYPE_1__* subdev_led; int * ctrls_led; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int entity; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct lm3560_flash* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_2)
{
 struct lm3560_flash *VAR_3 = FUNC_0(VAR_2);
 unsigned int VAR_4;

 for (VAR_4 = VAR_0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_3(&VAR_3->subdev_led[VAR_4]);
  FUNC_2(&VAR_3->ctrls_led[VAR_4]);
  FUNC_1(&VAR_3->subdev_led[VAR_4].entity);
 }

 return 0;
}
