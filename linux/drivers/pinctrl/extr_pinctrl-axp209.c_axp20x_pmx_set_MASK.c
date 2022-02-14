
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pinctrl_dev {int dummy; } ;
struct axp20x_pctl {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 struct axp20x_pctl* FUNC_1 (struct pinctrl_dev*) ;
 int FUNC_2 (int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_1, unsigned int VAR_2,
     u8 VAR_3)
{
 struct axp20x_pctl *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_2(VAR_4->regmap, VAR_5, VAR_0,
      VAR_3);
}
