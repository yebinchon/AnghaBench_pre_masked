
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3fwrn5_i2c_phy {void* gpio_fw_wake; void* gpio_en; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 struct s3fwrn5_i2c_phy* FUNC_1 (struct i2c_client*) ;
 void* FUNC_2 (struct device_node*,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1)
{
 struct s3fwrn5_i2c_phy *VAR_2 = FUNC_1(VAR_1);
 struct device_node *VAR_3 = VAR_1->dev.of_node;

 if (!VAR_3)
  return -VAR_0;

 VAR_2->gpio_en = FUNC_2(VAR_3, "s3fwrn5,en-gpios", 0);
 if (!FUNC_0(VAR_2->gpio_en))
  return -VAR_0;

 VAR_2->gpio_fw_wake = FUNC_2(VAR_3, "s3fwrn5,fw-gpios", 0);
 if (!FUNC_0(VAR_2->gpio_fw_wake))
  return -VAR_0;

 return 0;
}
