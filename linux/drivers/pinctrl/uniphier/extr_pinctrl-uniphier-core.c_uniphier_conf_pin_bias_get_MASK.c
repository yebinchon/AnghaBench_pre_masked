
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_pinctrl_priv {int regmap; } ;
struct pinctrl_dev {int dummy; } ;
struct pin_desc {int drv_data; } ;
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
 struct pin_desc* FUNC_1 (struct pinctrl_dev*,unsigned int) ;
 struct uniphier_pinctrl_priv* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (int ,unsigned int,unsigned int*) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct pinctrl_dev *VAR_7,
          unsigned int VAR_8,
          enum pin_config_param VAR_9)
{
 struct uniphier_pinctrl_priv *VAR_10 = FUNC_2(VAR_7);
 const struct pin_desc *VAR_11 = FUNC_1(VAR_7, VAR_8);
 enum uniphier_pin_pull_dir VAR_12 =
    FUNC_4(VAR_11->drv_data);
 unsigned int VAR_13, VAR_14, VAR_15, VAR_16;
 unsigned int VAR_17 = 1;
 int VAR_18;

 switch (VAR_9) {
 case 130:
  if (VAR_12 == VAR_4)
   return 0;
  if (VAR_12 == VAR_6 ||
      VAR_12 == VAR_3)
   return -VAR_0;
  VAR_17 = 0;
  break;
 case 128:
  if (VAR_12 == VAR_6)
   return 0;
  if (VAR_12 != VAR_5)
   return -VAR_0;
  break;
 case 129:
  if (VAR_12 == VAR_3)
   return 0;
  if (VAR_12 != VAR_2)
   return -VAR_0;
  break;
 default:
  FUNC_0();
 }

 VAR_13 = FUNC_5(VAR_11->drv_data);

 VAR_14 = VAR_1 + VAR_13 / 32 * 4;
 VAR_15 = VAR_13 % 32;

 VAR_18 = FUNC_3(VAR_10->regmap, VAR_14, &VAR_16);
 if (VAR_18)
  return VAR_18;

 VAR_16 = (VAR_16 >> VAR_15) & 1;

 return (VAR_16 == VAR_17) ? 0 : -VAR_0;
}
