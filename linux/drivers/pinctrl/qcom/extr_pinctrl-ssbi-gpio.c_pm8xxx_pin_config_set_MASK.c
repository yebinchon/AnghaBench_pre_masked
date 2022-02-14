
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct pm8xxx_pin_data {int bias; int disable; unsigned int pull_up_strength; int mode; int output_value; unsigned int power_source; unsigned int output_strength; int open_drain; int function; int inverted; } ;
struct TYPE_4__ {TYPE_1__* pins; } ;
struct pm8xxx_gpio {int dev; TYPE_2__ desc; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_3__ {struct pm8xxx_pin_data* drv_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 unsigned int VAR_7 ;
 int FUNC_1 (int ,char*,...) ;
 unsigned int FUNC_2 (unsigned long) ;
 unsigned int FUNC_3 (unsigned long) ;
 struct pm8xxx_gpio* FUNC_4 (struct pinctrl_dev*) ;
 int FUNC_5 (struct pm8xxx_gpio*,struct pm8xxx_pin_data*,int,int) ;

__attribute__((used)) static int FUNC_6(struct pinctrl_dev *VAR_8,
     unsigned int VAR_9,
     unsigned long *VAR_10,
     unsigned VAR_11)
{
 struct pm8xxx_gpio *VAR_12 = FUNC_4(VAR_8);
 struct pm8xxx_pin_data *VAR_13 = VAR_12->desc.pins[VAR_9].drv_data;
 unsigned VAR_14;
 unsigned VAR_15;
 unsigned VAR_16;
 u8 VAR_17 = 0;
 u8 VAR_18;

 for (VAR_16 = 0; VAR_16 < VAR_11; VAR_16++) {
  VAR_14 = FUNC_3(VAR_10[VAR_16]);
  VAR_15 = FUNC_2(VAR_10[VAR_16]);

  switch (VAR_14) {
  case 138:
   VAR_13->bias = VAR_1;
   VAR_17 |= FUNC_0(2);
   VAR_13->disable = 0;
   VAR_17 |= FUNC_0(3);
   break;
  case 136:
   VAR_13->bias = VAR_2;
   VAR_17 |= FUNC_0(2);
   VAR_13->disable = 0;
   VAR_17 |= FUNC_0(3);
   break;
  case 128:
   if (VAR_15 > VAR_3) {
    FUNC_1(VAR_12->dev, "invalid pull-up strength\n");
    return -VAR_0;
   }
   VAR_13->pull_up_strength = VAR_15;

  case 135:
   VAR_13->bias = VAR_13->pull_up_strength;
   VAR_17 |= FUNC_0(2);
   VAR_13->disable = 0;
   VAR_17 |= FUNC_0(3);
   break;
  case 137:
   VAR_13->disable = 1;
   VAR_17 |= FUNC_0(3);
   break;
  case 132:
   VAR_13->mode = VAR_5;
   VAR_17 |= FUNC_0(0) | FUNC_0(1);
   break;
  case 131:
   VAR_13->mode = VAR_6;
   VAR_13->output_value = !!VAR_15;
   VAR_17 |= FUNC_0(0) | FUNC_0(1);
   break;
  case 130:
   VAR_13->power_source = VAR_15;
   VAR_17 |= FUNC_0(0);
   break;
  case 129:
   if (VAR_15 > VAR_7) {
    FUNC_1(VAR_12->dev, "invalid drive strength\n");
    return -VAR_0;
   }
   VAR_13->output_strength = VAR_15;
   VAR_17 |= FUNC_0(3);
   break;
  case 133:
   VAR_13->open_drain = 0;
   VAR_17 |= FUNC_0(1);
   break;
  case 134:
   VAR_13->open_drain = 1;
   VAR_17 |= FUNC_0(1);
   break;
  default:
   FUNC_1(VAR_12->dev,
    "unsupported config parameter: %x\n",
    VAR_14);
   return -VAR_0;
  }
 }

 if (VAR_17 & FUNC_0(0)) {
  VAR_18 = VAR_13->power_source << 1;
  VAR_18 |= VAR_4;
  FUNC_5(VAR_12, VAR_13, 0, VAR_18);
 }

 if (VAR_17 & FUNC_0(1)) {
  VAR_18 = VAR_13->mode << 2;
  VAR_18 |= VAR_13->open_drain << 1;
  VAR_18 |= VAR_13->output_value;
  FUNC_5(VAR_12, VAR_13, 1, VAR_18);
 }

 if (VAR_17 & FUNC_0(2)) {
  VAR_18 = VAR_13->bias << 1;
  FUNC_5(VAR_12, VAR_13, 2, VAR_18);
 }

 if (VAR_17 & FUNC_0(3)) {
  VAR_18 = VAR_13->output_strength << 2;
  VAR_18 |= VAR_13->disable;
  FUNC_5(VAR_12, VAR_13, 3, VAR_18);
 }

 if (VAR_17 & FUNC_0(4)) {
  VAR_18 = VAR_13->function << 1;
  FUNC_5(VAR_12, VAR_13, 4, VAR_18);
 }

 if (VAR_17 & FUNC_0(5)) {
  VAR_18 = 0;
  if (!VAR_13->inverted)
   VAR_18 |= FUNC_0(3);
  FUNC_5(VAR_12, VAR_13, 5, VAR_18);
 }

 return 0;
}
