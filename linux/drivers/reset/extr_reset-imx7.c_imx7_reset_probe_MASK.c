
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap_config {char* name; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct imx7_src_variant {int ops; int signals_num; int signals; } ;
struct TYPE_2__ {int of_node; int * ops; int nr_resets; int owner; } ;
struct imx7_src {TYPE_1__ rcdev; int regmap; int signals; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,char*) ;
 struct imx7_src* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,TYPE_1__*) ;
 struct imx7_src_variant* FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,int ,struct regmap_config*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_3)
{
 struct imx7_src *VAR_4;
 struct device *VAR_5 = &VAR_3->dev;
 struct regmap_config VAR_6 = { .name = "src" };
 const struct imx7_src_variant *VAR_7 = FUNC_5(VAR_5);

 VAR_4 = FUNC_3(VAR_5, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->signals = VAR_7->signals;
 VAR_4->regmap = FUNC_7(VAR_5->of_node);
 if (FUNC_0(VAR_4->regmap)) {
  FUNC_2(VAR_5, "Unable to get imx7-src regmap");
  return FUNC_1(VAR_4->regmap);
 }
 FUNC_6(VAR_5, VAR_4->regmap, &VAR_6);

 VAR_4->rcdev.owner = VAR_2;
 VAR_4->rcdev.nr_resets = VAR_7->signals_num;
 VAR_4->rcdev.ops = &VAR_7->ops;
 VAR_4->rcdev.of_node = VAR_5->of_node;

 return FUNC_4(VAR_5, &VAR_4->rcdev);
}
