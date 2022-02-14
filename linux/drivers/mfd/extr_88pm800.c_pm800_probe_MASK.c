
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm80x_subchip {scalar_t__ gpadc_page_addr; scalar_t__ power_page_addr; } ;
struct pm80x_platform_data {int (* plat_config ) (struct pm80x_chip*,struct pm80x_platform_data*) ;} ;
struct pm80x_chip {int * dev; struct pm80x_subchip* subchip; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct pm80x_platform_data* FUNC_1 (int *) ;
 int FUNC_2 (struct pm80x_chip*,struct pm80x_platform_data*) ;
 struct pm80x_subchip* FUNC_3 (int *,int,int ) ;
 struct pm80x_chip* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct pm80x_chip*) ;
 int FUNC_6 (struct pm80x_chip*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct i2c_client*) ;
 int FUNC_9 (struct pm80x_chip*,struct pm80x_platform_data*) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_2,
     const struct i2c_device_id *VAR_3)
{
 int VAR_4 = 0;
 struct pm80x_chip *VAR_5;
 struct pm80x_platform_data *VAR_6 = FUNC_1(&VAR_2->dev);
 struct pm80x_subchip *VAR_7;

 VAR_4 = FUNC_8(VAR_2);
 if (VAR_4) {
  FUNC_0(&VAR_2->dev, "pm800_init fail\n");
  goto out_init;
 }

 VAR_5 = FUNC_4(VAR_2);


 VAR_7 =
     FUNC_3(&VAR_2->dev, sizeof(struct pm80x_subchip),
    VAR_1);
 if (!VAR_7) {
  VAR_4 = -VAR_0;
  goto err_subchip_alloc;
 }


 VAR_7->power_page_addr = VAR_2->addr + 1;
 VAR_7->gpadc_page_addr = VAR_2->addr + 2;
 VAR_5->subchip = VAR_7;

 VAR_4 = FUNC_6(VAR_5);
 if (VAR_4) {
  FUNC_0(&VAR_2->dev, "pm800_pages_init failed!\n");
  goto err_device_init;
 }

 VAR_4 = FUNC_2(VAR_5, VAR_6);
 if (VAR_4) {
  FUNC_0(VAR_5->dev, "Failed to initialize 88pm800 devices\n");
  goto err_device_init;
 }

 if (VAR_6 && VAR_6->plat_config)
  VAR_6->plat_config(VAR_5, VAR_6);

 return 0;

err_device_init:
 FUNC_5(VAR_5);
err_subchip_alloc:
 FUNC_7();
out_init:
 return VAR_4;
}
