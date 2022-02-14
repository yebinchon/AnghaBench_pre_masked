
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniphier_pinctrl_priv {int regmap; TYPE_1__* socdata; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct uniphier_pinctrl_priv* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (int ,unsigned int,unsigned int,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct pinctrl_dev*,unsigned int,int) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_3, unsigned VAR_4,
        int VAR_5)
{
 struct uniphier_pinctrl_priv *VAR_6 = FUNC_0(VAR_3);
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 bool VAR_13;
 int VAR_14;


 VAR_14 = FUNC_3(VAR_3, VAR_4, 1);
 if (VAR_14)
  return VAR_14;

 if (VAR_5 < 0)
  return 0;

 if (VAR_6->socdata->caps & VAR_0) {





  VAR_7 = 4;
  VAR_8 = 8;
  VAR_13 = 1;
 } else {





  VAR_7 = 8;
  VAR_8 = 4;
  VAR_13 = 0;
 }

 VAR_9 = VAR_2 + VAR_4 * VAR_7 / 32 * VAR_8;
 VAR_10 = VAR_9 + VAR_8;
 VAR_11 = VAR_4 * VAR_7 % 32;
 VAR_12 = (1U << VAR_7) - 1;





 for (; VAR_9 < VAR_10; VAR_9 += 4) {
  VAR_14 = FUNC_1(VAR_6->regmap, VAR_9,
      VAR_12 << VAR_11, VAR_5 << VAR_11);
  if (VAR_14)
   return VAR_14;
  VAR_5 >>= VAR_7;
 }

 if (VAR_13) {
  VAR_14 = FUNC_2(VAR_6->regmap,
       VAR_1, 1);
  if (VAR_14)
   return VAR_14;
 }

 return 0;
}
