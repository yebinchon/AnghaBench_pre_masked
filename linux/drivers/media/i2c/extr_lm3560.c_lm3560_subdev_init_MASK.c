
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lm3560_flash {int * ctrls_led; TYPE_1__* subdev_led; int dev; } ;
struct i2c_client {int dummy; } ;
typedef enum lm3560_led_id { ____Placeholder_lm3560_led_id } lm3560_led_id ;
struct TYPE_4__ {int function; } ;
struct TYPE_3__ {TYPE_2__ entity; int name; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lm3560_flash*,int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,int *) ;
 int FUNC_2 (int ,char*,int) ;
 struct i2c_client* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_6(struct lm3560_flash *VAR_3,
         enum lm3560_led_id VAR_4, char *VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_3(VAR_3->dev);
 int VAR_7;

 FUNC_5(&VAR_3->subdev_led[VAR_4], VAR_6, &VAR_2);
 VAR_3->subdev_led[VAR_4].flags |= VAR_1;
 FUNC_2(VAR_3->subdev_led[VAR_4].name, VAR_5,
  sizeof(VAR_3->subdev_led[VAR_4].name));
 VAR_7 = FUNC_0(VAR_3, VAR_4);
 if (VAR_7)
  goto err_out;
 VAR_7 = FUNC_1(&VAR_3->subdev_led[VAR_4].entity, 0, ((void*)0));
 if (VAR_7 < 0)
  goto err_out;
 VAR_3->subdev_led[VAR_4].entity.function = VAR_0;

 return VAR_7;

err_out:
 FUNC_4(&VAR_3->ctrls_led[VAR_4]);
 return VAR_7;
}
