
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct madera_pin_private {int dev; struct madera* madera; } ;
struct madera {int regmap; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int,int) ;
 struct madera_pin_private* FUNC_1 (struct pinctrl_dev*) ;
 int FUNC_2 (int ,unsigned int,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_3,
         struct pinctrl_gpio_range *VAR_4,
         unsigned int VAR_5,
         bool VAR_6)
{
 struct madera_pin_private *VAR_7 = FUNC_1(VAR_3);
 struct madera *VAR_8 = VAR_7->madera;
 unsigned int VAR_9 = VAR_2 + (2 * VAR_5);
 unsigned int VAR_10;
 int VAR_11;

 if (VAR_6)
  VAR_10 = VAR_0;
 else
  VAR_10 = 0;

 VAR_11 = FUNC_2(VAR_8->regmap, VAR_9, VAR_1, VAR_10);
 if (VAR_11)
  FUNC_0(VAR_7->dev, "Failed to write to 0x%x (%d)\n", VAR_9, VAR_11);

 return VAR_11;
}
