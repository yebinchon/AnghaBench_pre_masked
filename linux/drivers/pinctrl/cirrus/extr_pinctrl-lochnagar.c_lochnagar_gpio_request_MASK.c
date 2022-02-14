
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct lochnagar_pin_priv {int dev; TYPE_1__* pins; struct lochnagar* lochnagar; } ;
struct lochnagar_pin {scalar_t__ type; int name; } ;
struct lochnagar {scalar_t__ type; } ;
struct TYPE_2__ {struct lochnagar_pin* drv_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct lochnagar_pin_priv*,int) ;
 struct lochnagar_pin_priv* FUNC_3 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_3,
      struct pinctrl_gpio_range *VAR_4,
      unsigned int VAR_5)
{
 struct lochnagar_pin_priv *VAR_6 = FUNC_3(VAR_3);
 struct lochnagar *VAR_7 = VAR_6->lochnagar;
 const struct lochnagar_pin *VAR_8 = VAR_6->pins[VAR_5].drv_data;
 int VAR_9;

 FUNC_0(VAR_6->dev, "Requesting GPIO %s\n", VAR_8->name);

 if (VAR_7->type == VAR_2 || VAR_8->type != VAR_1)
  return 0;

 VAR_9 = FUNC_2(VAR_6, VAR_0);
 if (VAR_9 < 0) {
  FUNC_1(VAR_6->dev, "Failed to get low channel: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_2(VAR_6, VAR_0 | 0x1);
 if (VAR_9 < 0) {
  FUNC_1(VAR_6->dev, "Failed to get high channel: %d\n", VAR_9);
  return VAR_9;
 }

 return 0;
}
