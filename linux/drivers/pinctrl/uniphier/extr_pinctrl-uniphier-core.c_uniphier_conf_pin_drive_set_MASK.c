
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int const u32 ;
struct uniphier_pinctrl_priv {int regmap; } ;
struct pinctrl_dev {int dev; } ;
struct pin_desc {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int const,...) ;
 struct pin_desc* FUNC_1 (struct pinctrl_dev*,unsigned int) ;
 struct uniphier_pinctrl_priv* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (int ,unsigned int,unsigned int,unsigned int) ;
 int FUNC_4 (struct pinctrl_dev*,unsigned int,unsigned int*,unsigned int*,unsigned int*,unsigned int const**) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_1,
           unsigned int VAR_2, u32 VAR_3)
{
 struct uniphier_pinctrl_priv *VAR_4 = FUNC_2(VAR_1);
 const struct pin_desc *VAR_5 = FUNC_1(VAR_1, VAR_2);
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9;
 const unsigned int *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_4(VAR_1, VAR_2, &VAR_6, &VAR_7,
          &VAR_8, &VAR_10);
 if (VAR_11) {
  FUNC_0(VAR_1->dev, "cannot set drive strength for pin %s\n",
   VAR_5->name);
  return VAR_11;
 }

 for (VAR_9 = 0; VAR_9 <= VAR_8; VAR_9++) {
  if (VAR_10[VAR_9] > VAR_3)
   break;
 }

 if (VAR_9 == 0) {
  FUNC_0(VAR_1->dev,
   "unsupported drive strength %u mA for pin %s\n",
   VAR_3, VAR_5->name);
  return -VAR_0;
 }

 if (!VAR_8)
  return 0;

 VAR_9--;

 return FUNC_3(VAR_4->regmap, VAR_6,
      VAR_8 << VAR_7, VAR_9 << VAR_7);
}
