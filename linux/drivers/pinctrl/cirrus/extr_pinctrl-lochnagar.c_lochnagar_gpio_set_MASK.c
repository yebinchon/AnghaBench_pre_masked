
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lochnagar_pin_priv {int dev; TYPE_1__* pins; struct lochnagar* lochnagar; } ;
struct lochnagar_pin {int type; int shift; int name; int reg; int invert; } ;
struct lochnagar {int regmap; } ;
struct gpio_chip {int parent; } ;
struct TYPE_2__ {struct lochnagar_pin* drv_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_1 (int ,char*,int ,char*) ;
 int FUNC_2 (int ,char*,int ,int) ;
 struct lochnagar_pin_priv* FUNC_3 (struct gpio_chip*) ;
 int FUNC_4 (struct lochnagar_pin_priv*,struct lochnagar_pin const*,int) ;
 int FUNC_5 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct gpio_chip *VAR_2,
          unsigned int VAR_3, int VAR_4)
{
 struct lochnagar_pin_priv *VAR_5 = FUNC_3(VAR_2);
 struct lochnagar *VAR_6 = VAR_5->lochnagar;
 const struct lochnagar_pin *VAR_7 = VAR_5->pins[VAR_3].drv_data;
 int VAR_8;

 VAR_4 = !!VAR_4;

 FUNC_1(VAR_5->dev, "Set GPIO %s to %s\n",
  VAR_7->name, VAR_4 ? "high" : "low");

 switch (VAR_7->type) {
 case 128:
  VAR_4 |= VAR_1;

  VAR_8 = FUNC_4(VAR_5, VAR_7, VAR_4);
  break;
 case 129:
  if (VAR_7->invert)
   VAR_4 = !VAR_4;

  VAR_8 = FUNC_5(VAR_6->regmap, VAR_7->reg,
      FUNC_0(VAR_7->shift), VAR_4 << VAR_7->shift);
  break;
 default:
  VAR_8 = -VAR_0;
  break;
 }

 if (VAR_8 < 0)
  FUNC_2(VAR_2->parent, "Failed to set %s value: %d\n",
   VAR_7->name, VAR_8);
}
