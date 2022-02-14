
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int function; } ;
struct TYPE_3__ {TYPE_2__ entity; int name; int flags; } ;
struct lm3646_flash {int ctrls_led; TYPE_1__ subdev_led; int dev; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lm3646_flash*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,int *) ;
 int FUNC_2 (int ,int ,int) ;
 struct i2c_client* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_6(struct lm3646_flash *VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_3(VAR_4->dev);
 int VAR_6;

 FUNC_5(&VAR_4->subdev_led, VAR_5, &VAR_3);
 VAR_4->subdev_led.flags |= VAR_2;
 FUNC_2(VAR_4->subdev_led.name, VAR_0,
  sizeof(VAR_4->subdev_led.name));
 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6)
  goto err_out;
 VAR_6 = FUNC_1(&VAR_4->subdev_led.entity, 0, ((void*)0));
 if (VAR_6 < 0)
  goto err_out;
 VAR_4->subdev_led.entity.function = VAR_1;
 return VAR_6;

err_out:
 FUNC_4(&VAR_4->ctrls_led);
 return VAR_6;
}
