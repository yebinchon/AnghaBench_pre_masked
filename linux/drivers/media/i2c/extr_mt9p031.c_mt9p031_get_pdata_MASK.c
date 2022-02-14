
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt9p031_platform_data {int target_freq; int ext_freq; } ;
struct TYPE_2__ {int of_node; struct mt9p031_platform_data* platform_data; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct mt9p031_platform_data* FUNC_1 (TYPE_1__*,int,int ) ;
 struct device_node* FUNC_2 (int ,int *) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct device_node*,char*,int *) ;

__attribute__((used)) static struct mt9p031_platform_data *
FUNC_5(struct i2c_client *VAR_2)
{
 struct mt9p031_platform_data *VAR_3;
 struct device_node *VAR_4;

 if (!FUNC_0(VAR_0) || !VAR_2->dev.of_node)
  return VAR_2->dev.platform_data;

 VAR_4 = FUNC_2(VAR_2->dev.of_node, ((void*)0));
 if (!VAR_4)
  return ((void*)0);

 VAR_3 = FUNC_1(&VAR_2->dev, sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  goto done;

 FUNC_4(VAR_4, "input-clock-frequency", &VAR_3->ext_freq);
 FUNC_4(VAR_4, "pixel-clock-frequency", &VAR_3->target_freq);

done:
 FUNC_3(VAR_4);
 return VAR_3;
}
