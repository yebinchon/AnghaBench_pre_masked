
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct device_node {int dummy; } ;
struct adp1653_platform_data {int max_flash_timeout; int max_flash_intensity; int max_torch_intensity; int max_indicator_intensity; int enable_gpio; } ;
struct adp1653_flash {struct adp1653_platform_data* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ) ;
 struct adp1653_platform_data* FUNC_4 (int *,int,int ) ;
 struct device_node* FUNC_5 (struct device_node*,char*) ;
 int FUNC_6 (struct device_node*) ;
 scalar_t__ FUNC_7 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_4,
      struct adp1653_flash *VAR_5,
      struct device_node *VAR_6)
{
 struct adp1653_platform_data *VAR_7;
 struct device_node *VAR_8;

 VAR_7 = FUNC_4(&VAR_4->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;
 VAR_5->platform_data = VAR_7;

 VAR_8 = FUNC_5(VAR_6, "flash");
 if (!VAR_8)
  return -VAR_0;

 if (FUNC_7(VAR_8, "flash-timeout-us",
     &VAR_7->max_flash_timeout))
  goto err;

 if (FUNC_7(VAR_8, "flash-max-microamp",
     &VAR_7->max_flash_intensity))
  goto err;

 VAR_7->max_flash_intensity /= 1000;

 if (FUNC_7(VAR_8, "led-max-microamp",
     &VAR_7->max_torch_intensity))
  goto err;

 VAR_7->max_torch_intensity /= 1000;
 FUNC_6(VAR_8);

 VAR_8 = FUNC_5(VAR_6, "indicator");
 if (!VAR_8)
  return -VAR_0;

 if (FUNC_7(VAR_8, "led-max-microamp",
     &VAR_7->max_indicator_intensity))
  goto err;

 FUNC_6(VAR_8);

 VAR_7->enable_gpio = FUNC_3(&VAR_4->dev, "enable", VAR_3);
 if (FUNC_0(VAR_7->enable_gpio)) {
  FUNC_2(&VAR_4->dev, "Error getting GPIO\n");
  return FUNC_1(VAR_7->enable_gpio);
 }

 return 0;
err:
 FUNC_2(&VAR_4->dev, "Required property not found\n");
 FUNC_6(VAR_8);
 return -VAR_0;
}
