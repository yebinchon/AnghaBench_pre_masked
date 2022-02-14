
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int of_node; int parent; } ;
struct platform_device {struct device dev; } ;
struct pinctrl_dev {int dummy; } ;
struct pinctrl_desc {void* npins; void* pins; } ;
struct TYPE_2__ {int can_sleep; int base; int ngpio; int of_node; struct device* parent; int set; int direction_output; int free; int request; int label; } ;
struct lochnagar_pin_priv {TYPE_1__ gpio_chip; struct device* dev; void* npins; void* pins; void* ngroups; void* groups; void* nfuncs; void* funcs; struct lochnagar* lochnagar; } ;
struct lochnagar {int type; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct pinctrl_dev*) ;

 int VAR_3 ;

 int VAR_4 ;
 int FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (struct device*,char*,int) ;
 struct lochnagar* FUNC_4 (int ) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,TYPE_1__*,struct lochnagar_pin_priv*) ;
 void* FUNC_7 (struct device*,int,int ) ;
 struct pinctrl_dev* FUNC_8 (struct device*,struct pinctrl_desc*,struct lochnagar_pin_priv*) ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int FUNC_9 (struct lochnagar_pin_priv*) ;
 int VAR_13 ;
 int VAR_14 ;
 struct pinctrl_desc VAR_15 ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_16)
{
 struct lochnagar *VAR_17 = FUNC_4(VAR_16->dev.parent);
 struct lochnagar_pin_priv *VAR_18;
 struct pinctrl_desc *VAR_19;
 struct pinctrl_dev *VAR_20;
 struct device *VAR_21 = &VAR_16->dev;
 int VAR_22;

 VAR_18 = FUNC_7(VAR_21, sizeof(*VAR_18), VAR_2);
 if (!VAR_18)
  return -VAR_1;

 VAR_18->dev = VAR_21;
 VAR_18->lochnagar = VAR_17;

 VAR_19 = FUNC_7(VAR_21, sizeof(*VAR_19), VAR_2);
 if (!VAR_19)
  return -VAR_1;

 *VAR_19 = VAR_15;

 VAR_18->gpio_chip.label = FUNC_5(VAR_21);
 VAR_18->gpio_chip.request = VAR_6;
 VAR_18->gpio_chip.free = VAR_5;
 VAR_18->gpio_chip.direction_output = VAR_13;
 VAR_18->gpio_chip.set = VAR_14;
 VAR_18->gpio_chip.can_sleep = 1;
 VAR_18->gpio_chip.parent = VAR_21;
 VAR_18->gpio_chip.base = -1;




 switch (VAR_17->type) {
 case 129:
  VAR_18->funcs = VAR_7;
  VAR_18->nfuncs = FUNC_0(VAR_7);
  VAR_18->pins = VAR_9;
  VAR_18->npins = FUNC_0(VAR_9);
  VAR_18->groups = VAR_8;
  VAR_18->ngroups = FUNC_0(VAR_8);

  VAR_18->gpio_chip.ngpio = VAR_3;
  break;
 case 128:
  VAR_18->funcs = VAR_10;
  VAR_18->nfuncs = FUNC_0(VAR_10);
  VAR_18->pins = VAR_12;
  VAR_18->npins = FUNC_0(VAR_12);
  VAR_18->groups = VAR_11;
  VAR_18->ngroups = FUNC_0(VAR_11);

  VAR_18->gpio_chip.ngpio = VAR_4;
  break;
 default:
  FUNC_3(VAR_21, "Unknown Lochnagar type: %d\n", VAR_17->type);
  return -VAR_0;
 }

 VAR_22 = FUNC_9(VAR_18);
 if (VAR_22 < 0)
  return VAR_22;

 VAR_19->pins = VAR_18->pins;
 VAR_19->npins = VAR_18->npins;

 VAR_20 = FUNC_8(VAR_21, VAR_19, VAR_18);
 if (FUNC_1(VAR_20)) {
  VAR_22 = FUNC_2(VAR_20);
  FUNC_3(VAR_18->dev, "Failed to register pinctrl: %d\n", VAR_22);
  return VAR_22;
 }

 VAR_22 = FUNC_6(VAR_21, &VAR_18->gpio_chip, VAR_18);
 if (VAR_22 < 0) {
  FUNC_3(&VAR_16->dev, "Failed to register gpiochip: %d\n", VAR_22);
  return VAR_22;
 }

 return 0;
}
