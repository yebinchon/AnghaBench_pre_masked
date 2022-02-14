
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int of_node; struct adv7343_platform_data* platform_data; } ;
struct i2c_client {TYPE_3__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_5__ {int sd_dac_out; } ;
struct TYPE_4__ {int dac; void* pll_control; void* sleep_mode; } ;
struct adv7343_platform_data {TYPE_2__ sd_config; TYPE_1__ mode_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct adv7343_platform_data* FUNC_1 (TYPE_3__*,int,int ) ;
 struct device_node* FUNC_2 (int ,int *) ;
 int FUNC_3 (struct device_node*) ;
 void* FUNC_4 (struct device_node*,char*) ;
 int FUNC_5 (struct device_node*,char*,int ,int) ;

__attribute__((used)) static struct adv7343_platform_data *
FUNC_6(struct i2c_client *VAR_2)
{
 struct adv7343_platform_data *VAR_3;
 struct device_node *VAR_4;

 if (!FUNC_0(VAR_0) || !VAR_2->dev.of_node)
  return VAR_2->dev.platform_data;

 VAR_4 = FUNC_2(VAR_2->dev.of_node, ((void*)0));
 if (!VAR_4)
  return ((void*)0);

 VAR_3 = FUNC_1(&VAR_2->dev, sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  goto done;

 VAR_3->mode_config.sleep_mode =
   FUNC_4(VAR_4, "adi,power-mode-sleep-mode");

 VAR_3->mode_config.pll_control =
   FUNC_4(VAR_4, "adi,power-mode-pll-ctrl");

 FUNC_5(VAR_4, "adi,dac-enable",
       VAR_3->mode_config.dac, 6);

 FUNC_5(VAR_4, "adi,sd-dac-enable",
       VAR_3->sd_config.sd_dac_out, 2);

done:
 FUNC_3(VAR_4);
 return VAR_3;
}
