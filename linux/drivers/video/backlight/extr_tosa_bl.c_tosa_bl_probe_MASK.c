
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tosa_bl_data {int comadj; TYPE_3__* bl; struct i2c_client* i2c; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct backlight_properties {int max_brightness; int type; } ;
struct TYPE_7__ {int brightness; int power; } ;
struct TYPE_9__ {TYPE_1__ props; int dev; } ;
struct TYPE_8__ {int comadj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_7 ;
 int FUNC_3 (int *,char*) ;
 TYPE_3__* FUNC_4 (int *,char*,int *,struct tosa_bl_data*,int *,struct backlight_properties*) ;
 int FUNC_5 (int *,int ,int ,char*) ;
 struct tosa_bl_data* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (struct i2c_client*,struct tosa_bl_data*) ;
 int FUNC_8 (struct backlight_properties*,int ,int) ;
 TYPE_2__ VAR_8 ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_9,
  const struct i2c_device_id *VAR_10)
{
 struct backlight_properties VAR_11;
 struct tosa_bl_data *VAR_12;
 int VAR_13 = 0;

 VAR_12 = FUNC_6(&VAR_9->dev, sizeof(struct tosa_bl_data),
    VAR_4);
 if (!VAR_12)
  return -VAR_2;

 VAR_12->comadj = VAR_8.comadj == -1 ? VAR_1 : VAR_8.comadj;

 VAR_13 = FUNC_5(&VAR_9->dev, VAR_6,
    VAR_5, "backlight");
 if (VAR_13) {
  FUNC_3(&VAR_12->bl->dev, "Unable to request gpio!\n");
  return VAR_13;
 }

 FUNC_7(VAR_9, VAR_12);
 VAR_12->i2c = VAR_9;

 FUNC_8(&VAR_11, 0, sizeof(struct backlight_properties));
 VAR_11.type = VAR_0;
 VAR_11.max_brightness = 512 - 1;
 VAR_12->bl = FUNC_4(&VAR_9->dev, "tosa-bl",
      &VAR_9->dev, VAR_12, &VAR_7,
      &VAR_11);
 if (FUNC_0(VAR_12->bl)) {
  VAR_13 = FUNC_1(VAR_12->bl);
  goto err_reg;
 }

 VAR_12->bl->props.brightness = 69;
 VAR_12->bl->props.power = VAR_3;

 FUNC_2(VAR_12->bl);

 return 0;

err_reg:
 VAR_12->bl = ((void*)0);
 return VAR_13;
}
