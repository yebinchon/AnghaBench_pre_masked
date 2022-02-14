
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniphier_pinctrl_priv {int regmap; TYPE_1__* socdata; } ;
struct pinctrl_dev {int dummy; } ;
struct pin_desc {int drv_data; } ;
struct TYPE_2__ {int caps; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct pin_desc* FUNC_1 (struct pinctrl_dev*,unsigned int) ;
 struct uniphier_pinctrl_priv* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (int ,unsigned int,unsigned int*) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_4,
           unsigned int VAR_5)
{
 struct uniphier_pinctrl_priv *VAR_6 = FUNC_2(VAR_4);
 const struct pin_desc *VAR_7 = FUNC_1(VAR_4, VAR_5);
 unsigned int VAR_8 = FUNC_4(VAR_7->drv_data);
 unsigned int VAR_9, VAR_10, VAR_11;
 int VAR_12;

 if (VAR_8 == VAR_3)

  return 0;

 if (VAR_6->socdata->caps & VAR_1)
  VAR_8 = VAR_5;

 VAR_9 = VAR_2 + VAR_8 / 32 * 4;
 VAR_10 = FUNC_0(VAR_8 % 32);

 VAR_12 = FUNC_3(VAR_6->regmap, VAR_9, &VAR_11);
 if (VAR_12)
  return VAR_12;

 return VAR_11 & VAR_10 ? 0 : -VAR_0;
}
