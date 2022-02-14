
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct madera_pin_private {int dev; struct madera* madera; } ;
struct madera {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int,int) ;
 struct madera_pin_private* FUNC_1 (struct pinctrl_dev*) ;
 int FUNC_2 (int ,unsigned int,int ,int) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_2,
          struct pinctrl_gpio_range *VAR_3,
          unsigned int VAR_4)
{
 struct madera_pin_private *VAR_5 = FUNC_1(VAR_2);
 struct madera *VAR_6 = VAR_5->madera;
 unsigned int VAR_7 = VAR_1 + (2 * VAR_4);
 int VAR_8;


 VAR_8 = FUNC_2(VAR_6->regmap, VAR_7, VAR_0, 1);
 if (VAR_8)
  FUNC_0(VAR_5->dev, "Failed to write to 0x%x (%d)\n", VAR_7, VAR_8);

 return VAR_8;
}
