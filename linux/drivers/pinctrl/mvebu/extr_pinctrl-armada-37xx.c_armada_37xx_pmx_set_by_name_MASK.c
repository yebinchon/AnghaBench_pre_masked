
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct armada_37xx_pinctrl {int regmap; int dev; } ;
struct armada_37xx_pin_group {unsigned int reg_mask; int* val; int funcs; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,char*,char const*,int ) ;
 int FUNC_1 (int ,int ,char const*) ;
 struct armada_37xx_pinctrl* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (int ,unsigned int,unsigned int,int) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_3,
           const char *VAR_4,
           struct armada_37xx_pin_group *VAR_5)
{
 struct armada_37xx_pinctrl *VAR_6 = FUNC_2(VAR_3);
 unsigned int VAR_7 = VAR_2;
 unsigned int VAR_8 = VAR_5->reg_mask;
 int VAR_9, VAR_10;

 FUNC_0(VAR_6->dev, "enable function %s group %s\n",
  VAR_4, VAR_5->name);

 VAR_9 = FUNC_1(VAR_5->funcs, VAR_1, VAR_4);
 if (VAR_9 < 0)
  return -VAR_0;

 VAR_10 = VAR_5->val[VAR_9];

 FUNC_3(VAR_6->regmap, VAR_7, VAR_8, VAR_10);

 return 0;
}
