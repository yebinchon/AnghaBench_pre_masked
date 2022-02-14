
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
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
 int FUNC_3 (int ,unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_4,
       unsigned int VAR_5, u32 VAR_6)
{
 struct uniphier_pinctrl_priv *VAR_7 = FUNC_2(VAR_4);
 const struct pin_desc *VAR_8 = FUNC_1(VAR_4, VAR_5);
 unsigned int VAR_9 = FUNC_4(VAR_8->drv_data);
 unsigned int VAR_10, VAR_11;





 if (!(VAR_7->socdata->caps & VAR_1) &&
     !VAR_6)
  return -VAR_0;


 if (VAR_9 == VAR_3)
  return VAR_6 ? 0 : -VAR_0;

 if (VAR_7->socdata->caps & VAR_1)
  VAR_9 = VAR_5;

 VAR_10 = VAR_2 + VAR_9 / 32 * 4;
 VAR_11 = FUNC_0(VAR_9 % 32);

 return FUNC_3(VAR_7->regmap, VAR_10, VAR_11, VAR_6 ? VAR_11 : 0);
}
