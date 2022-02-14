
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct property {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct omap_dsi_pin_config {int num_pins; int* pins; } ;
struct dsi_data {int num_lanes_supported; int output; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int *,struct omap_dsi_pin_config*) ;
 struct dsi_data* FUNC_2 (struct platform_device*) ;
 struct property* FUNC_3 (struct device_node*,char*,int*) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct device_node*,char*,scalar_t__*,int) ;
 struct device_node* FUNC_6 (struct device_node*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct device_node *VAR_2 = VAR_1->dev.of_node;
 struct dsi_data *VAR_3 = FUNC_2(VAR_1);
 struct property *VAR_4;
 u32 VAR_5[10];
 int VAR_6, VAR_7;
 int VAR_8, VAR_9;
 struct device_node *VAR_10;
 struct omap_dsi_pin_config VAR_11;

 VAR_10 = FUNC_6(VAR_2);
 if (!VAR_10)
  return 0;

 VAR_4 = FUNC_3(VAR_10, "lanes", &VAR_6);
 if (VAR_4 == ((void*)0)) {
  FUNC_0(&VAR_1->dev, "failed to find lane data\n");
  VAR_8 = -VAR_0;
  goto err;
 }

 VAR_7 = VAR_6 / sizeof(u32);

 if (VAR_7 < 4 || VAR_7 % 2 != 0 ||
  VAR_7 > VAR_3->num_lanes_supported * 2) {
  FUNC_0(&VAR_1->dev, "bad number of lanes\n");
  VAR_8 = -VAR_0;
  goto err;
 }

 VAR_8 = FUNC_5(VAR_10, "lanes", VAR_5, VAR_7);
 if (VAR_8) {
  FUNC_0(&VAR_1->dev, "failed to read lane data\n");
  goto err;
 }

 VAR_11.num_pins = VAR_7;
 for (VAR_9 = 0; VAR_9 < VAR_7; ++VAR_9)
  VAR_11.pins[VAR_9] = (int)VAR_5[VAR_9];

 VAR_8 = FUNC_1(&VAR_3->output, &VAR_11);
 if (VAR_8) {
  FUNC_0(&VAR_1->dev, "failed to configure pins");
  goto err;
 }

 FUNC_4(VAR_10);

 return 0;

err:
 FUNC_4(VAR_10);
 return VAR_8;
}
