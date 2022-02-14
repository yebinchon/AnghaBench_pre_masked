
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_thermal_sensor {int regmap; int mmio_base; struct device* dev; } ;
struct resource {int dummy; } ;
struct platform_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,struct resource*) ;
 int FUNC_4 (struct device*,int ,int *) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int VAR_2 ;
 struct platform_device* FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct st_thermal_sensor *VAR_3)
{
 struct device *VAR_4 = VAR_3->dev;
 struct platform_device *VAR_5 = FUNC_6(VAR_4);
 struct resource *VAR_6;

 VAR_6 = FUNC_5(VAR_5, VAR_1, 0);
 if (!VAR_6) {
  FUNC_2(VAR_4, "no memory resources defined\n");
  return -VAR_0;
 }

 VAR_3->mmio_base = FUNC_3(VAR_4, VAR_6);
 if (FUNC_0(VAR_3->mmio_base)) {
  FUNC_2(VAR_4, "failed to remap IO\n");
  return FUNC_1(VAR_3->mmio_base);
 }

 VAR_3->regmap = FUNC_4(VAR_4, VAR_3->mmio_base,
    &VAR_2);
 if (FUNC_0(VAR_3->regmap)) {
  FUNC_2(VAR_4, "failed to initialise regmap\n");
  return FUNC_1(VAR_3->regmap);
 }

 return 0;
}
