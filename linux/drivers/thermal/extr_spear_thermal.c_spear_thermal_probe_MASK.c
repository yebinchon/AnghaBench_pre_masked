
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct thermal_zone_device {int device; } ;
struct spear_thermal_dev {int flags; struct thermal_zone_device* clk; struct thermal_zone_device* thermal_base; } ;
struct resource {int dummy; } ;
struct TYPE_5__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct thermal_zone_device*) ;
 int FUNC_1 (struct thermal_zone_device*) ;
 int FUNC_2 (struct thermal_zone_device*) ;
 int FUNC_3 (struct thermal_zone_device*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (int *,char*,struct thermal_zone_device*) ;
 struct thermal_zone_device* FUNC_6 (TYPE_1__*,int *) ;
 struct thermal_zone_device* FUNC_7 (TYPE_1__*,struct resource*) ;
 struct spear_thermal_dev* FUNC_8 (TYPE_1__*,int,int ) ;
 int FUNC_9 (struct device_node*,char*,int*) ;
 int VAR_4 ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct thermal_zone_device*) ;
 struct thermal_zone_device* FUNC_12 (char*,int ,int ,struct spear_thermal_dev*,int *,int *,int ,int ) ;
 int FUNC_13 (int,struct thermal_zone_device*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_5)
{
 struct thermal_zone_device *VAR_6 = ((void*)0);
 struct spear_thermal_dev *VAR_7;
 struct device_node *VAR_8 = VAR_5->dev.of_node;
 struct resource *VAR_9;
 int VAR_10 = 0, VAR_11;

 if (!VAR_8 || !FUNC_9(VAR_8, "st,thermal-flags", &VAR_11)) {
  FUNC_4(&VAR_5->dev, "Failed: DT Pdata not passed\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_8(&VAR_5->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;


 VAR_9 = FUNC_10(VAR_5, VAR_3, 0);
 VAR_7->thermal_base = FUNC_7(&VAR_5->dev, VAR_9);
 if (FUNC_0(VAR_7->thermal_base))
  return FUNC_1(VAR_7->thermal_base);

 VAR_7->clk = FUNC_6(&VAR_5->dev, ((void*)0));
 if (FUNC_0(VAR_7->clk)) {
  FUNC_4(&VAR_5->dev, "Can't get clock\n");
  return FUNC_1(VAR_7->clk);
 }

 VAR_10 = FUNC_3(VAR_7->clk);
 if (VAR_10) {
  FUNC_4(&VAR_5->dev, "Can't enable clock\n");
  return VAR_10;
 }

 VAR_7->flags = VAR_11;
 FUNC_13(VAR_7->flags, VAR_7->thermal_base);

 VAR_6 = FUNC_12("spear_thermal", 0, 0,
    VAR_7, &VAR_4, ((void*)0), 0, 0);
 if (FUNC_0(VAR_6)) {
  FUNC_4(&VAR_5->dev, "thermal zone device is NULL\n");
  VAR_10 = FUNC_1(VAR_6);
  goto disable_clk;
 }

 FUNC_11(VAR_5, VAR_6);

 FUNC_5(&VAR_6->device, "Thermal Sensor Loaded at: 0x%p.\n",
   VAR_7->thermal_base);

 return 0;

disable_clk:
 FUNC_2(VAR_7->clk);

 return VAR_10;
}
