
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct uniphier_pinctrl_priv {int regmap; } ;
struct pinctrl_dev {int dummy; } ;


 struct uniphier_pinctrl_priv* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (int ,unsigned int,unsigned int*) ;
 int FUNC_2 (struct pinctrl_dev*,unsigned int,unsigned int*,unsigned int*,unsigned int*,unsigned int const**) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_0,
           unsigned int VAR_1, u32 *VAR_2)
{
 struct uniphier_pinctrl_priv *VAR_3 = FUNC_0(VAR_0);
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7;
 const unsigned int *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_0, VAR_1, &VAR_4, &VAR_5,
          &VAR_6, &VAR_8);
 if (VAR_9)
  return VAR_9;

 if (VAR_6) {
  VAR_9 = FUNC_1(VAR_3->regmap, VAR_4, &VAR_7);
  if (VAR_9)
   return VAR_9;
 } else {
  VAR_7 = 0;
 }

 *VAR_2 = VAR_8[(VAR_7 >> VAR_5) & VAR_6];

 return 0;
}
