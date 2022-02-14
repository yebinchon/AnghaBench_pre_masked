
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct berlin_pinctrl_desc {int dummy; } ;
struct berlin_pinctrl {int pctrl_dev; struct berlin_pinctrl_desc const* desc; struct device* dev; struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct device*,char*,...) ;
 struct berlin_pinctrl* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int *,struct berlin_pinctrl*) ;
 int FUNC_6 (struct platform_device*,struct berlin_pinctrl*) ;

int FUNC_7(struct platform_device *VAR_3,
    const struct berlin_pinctrl_desc *VAR_4,
    struct regmap *VAR_5)
{
 struct device *VAR_6 = &VAR_3->dev;
 struct berlin_pinctrl *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(VAR_6, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_6(VAR_3, VAR_7);

 VAR_7->regmap = VAR_5;
 VAR_7->dev = &VAR_3->dev;
 VAR_7->desc = VAR_4;

 VAR_8 = FUNC_2(VAR_3);
 if (VAR_8) {
  FUNC_3(VAR_6, "cannot build driver state: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_7->pctrl_dev = FUNC_5(VAR_6, &VAR_2,
       VAR_7);
 if (FUNC_0(VAR_7->pctrl_dev)) {
  FUNC_3(VAR_6, "failed to register pinctrl driver\n");
  return FUNC_1(VAR_7->pctrl_dev);
 }

 return 0;
}
