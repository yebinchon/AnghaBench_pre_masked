
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm80x_platform_data {int (* plat_config ) (struct pm80x_chip*,struct pm80x_platform_data*) ;} ;
struct pm80x_chip {int * dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*) ;
 struct pm80x_platform_data* FUNC_1 (int *) ;
 int FUNC_2 (struct pm80x_chip*) ;
 struct pm80x_chip* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (struct pm80x_chip*,struct pm80x_platform_data*) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_0,
     const struct i2c_device_id *VAR_1)
{
 int VAR_2 = 0;
 struct pm80x_chip *VAR_3;
 struct pm80x_platform_data *VAR_4 = FUNC_1(&VAR_0->dev);

 VAR_2 = FUNC_5(VAR_0);
 if (VAR_2) {
  FUNC_0(&VAR_0->dev, "pm805_init fail!\n");
  goto out_init;
 }

 VAR_3 = FUNC_3(VAR_0);

 VAR_2 = FUNC_2(VAR_3);
 if (VAR_2) {
  FUNC_0(VAR_3->dev, "Failed to initialize 88pm805 devices\n");
  goto err_805_init;
 }

 if (VAR_4 && VAR_4->plat_config)
  VAR_4->plat_config(VAR_3, VAR_4);

err_805_init:
 FUNC_4();
out_init:
 return VAR_2;
}
