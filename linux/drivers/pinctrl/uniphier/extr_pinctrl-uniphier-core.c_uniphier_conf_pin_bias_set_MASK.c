
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uniphier_pinctrl_priv {int regmap; } ;
struct pinctrl_dev {int dev; } ;
struct pin_desc {int drv_data; int name; } ;
typedef enum uniphier_pin_pull_dir { ____Placeholder_uniphier_pin_pull_dir } uniphier_pin_pull_dir ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int FUNC_0 () ;
 int VAR_0 ;




 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,...) ;
 struct pin_desc* FUNC_2 (struct pinctrl_dev*,unsigned int) ;
 struct uniphier_pinctrl_priv* FUNC_3 (struct pinctrl_dev*) ;
 int FUNC_4 (int ,unsigned int,int,unsigned int) ;
 int FUNC_5 (int ) ;
 unsigned int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct pinctrl_dev *VAR_7,
          unsigned int VAR_8,
          enum pin_config_param VAR_9, u32 VAR_10)
{
 struct uniphier_pinctrl_priv *VAR_11 = FUNC_3(VAR_7);
 const struct pin_desc *VAR_12 = FUNC_2(VAR_7, VAR_8);
 enum uniphier_pin_pull_dir VAR_13 =
    FUNC_5(VAR_12->drv_data);
 unsigned int VAR_14, VAR_15, VAR_16;
 unsigned int VAR_17 = 1;

 switch (VAR_9) {
 case 131:
  if (VAR_13 == VAR_4)
   return 0;
  if (VAR_13 == VAR_6 ||
      VAR_13 == VAR_3) {
   FUNC_1(VAR_7->dev,
    "can not disable pull register for pin %s\n",
    VAR_12->name);
   return -VAR_0;
  }
  VAR_17 = 0;
  break;
 case 128:
  if (VAR_13 == VAR_6 && VAR_10 != 0)
   return 0;
  if (VAR_13 != VAR_5) {
   FUNC_1(VAR_7->dev,
    "pull-up is unsupported for pin %s\n",
    VAR_12->name);
   return -VAR_0;
  }
  if (VAR_10 == 0) {
   FUNC_1(VAR_7->dev, "pull-up can not be total\n");
   return -VAR_0;
  }
  break;
 case 130:
  if (VAR_13 == VAR_3 && VAR_10 != 0)
   return 0;
  if (VAR_13 != VAR_2) {
   FUNC_1(VAR_7->dev,
    "pull-down is unsupported for pin %s\n",
    VAR_12->name);
   return -VAR_0;
  }
  if (VAR_10 == 0) {
   FUNC_1(VAR_7->dev, "pull-down can not be total\n");
   return -VAR_0;
  }
  break;
 case 129:
  if (VAR_13 == VAR_4) {
   FUNC_1(VAR_7->dev,
    "pull-up/down is unsupported for pin %s\n",
    VAR_12->name);
   return -VAR_0;
  }

  if (VAR_10 == 0)
   return 0;
  break;
 default:
  FUNC_0();
 }

 VAR_14 = FUNC_6(VAR_12->drv_data);

 VAR_15 = VAR_1 + VAR_14 / 32 * 4;
 VAR_16 = VAR_14 % 32;

 return FUNC_4(VAR_11->regmap, VAR_15, 1 << VAR_16, VAR_17 << VAR_16);
}
