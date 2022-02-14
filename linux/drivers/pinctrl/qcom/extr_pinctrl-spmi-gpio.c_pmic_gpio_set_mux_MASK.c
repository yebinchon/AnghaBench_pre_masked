
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmic_gpio_state {int dummy; } ;
struct pmic_gpio_pad {unsigned int function; int atest; unsigned int out_value; unsigned int is_enabled; scalar_t__ lv_mv_type; scalar_t__ output_enabled; scalar_t__ input_enabled; scalar_t__ analog_pass; } ;
struct pinctrl_dev {TYPE_2__* desc; } ;
struct TYPE_4__ {TYPE_1__* pins; } ;
struct TYPE_3__ {struct pmic_gpio_pad* drv_data; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 struct pmic_gpio_state* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (struct pmic_gpio_state*,struct pmic_gpio_pad*,int ,unsigned int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_19, unsigned VAR_20,
    unsigned VAR_21)
{
 struct pmic_gpio_state *VAR_22 = FUNC_0(VAR_19);
 struct pmic_gpio_pad *VAR_23;
 unsigned int VAR_24;
 int VAR_25;

 if (VAR_20 > VAR_2) {
  FUNC_2("function: %d is not defined\n", VAR_20);
  return -VAR_0;
 }

 VAR_23 = VAR_19->desc->pins[VAR_21].drv_data;




 if (!VAR_23->lv_mv_type) {
  if (VAR_20 == VAR_3 ||
    VAR_20 == VAR_4) {
   FUNC_2("LV/MV subtype doesn't have func3/func4\n");
   return -VAR_0;
  }
  if (VAR_20 >= VAR_1)
   VAR_20 -= (VAR_1 -
     VAR_3);
 }

 VAR_23->function = VAR_20;

 if (VAR_23->analog_pass)
  VAR_24 = VAR_7;
 else if (VAR_23->output_enabled && VAR_23->input_enabled)
  VAR_24 = VAR_9;
 else if (VAR_23->output_enabled)
  VAR_24 = VAR_10;
 else
  VAR_24 = VAR_8;

 if (VAR_23->lv_mv_type) {
  VAR_25 = FUNC_1(VAR_22, VAR_23,
    VAR_15, VAR_24);
  if (VAR_25 < 0)
   return VAR_25;

  VAR_24 = VAR_23->atest - 1;
  VAR_25 = FUNC_1(VAR_22, VAR_23,
    VAR_12, VAR_24);
  if (VAR_25 < 0)
   return VAR_25;

  VAR_24 = VAR_23->out_value
   << VAR_5;
  VAR_24 |= VAR_23->function
   & VAR_6;
  VAR_25 = FUNC_1(VAR_22, VAR_23,
   VAR_13, VAR_24);
  if (VAR_25 < 0)
   return VAR_25;
 } else {
  VAR_24 = VAR_24 << VAR_16;
  VAR_24 |= VAR_23->function << VAR_17;
  VAR_24 |= VAR_23->out_value & VAR_18;

  VAR_25 = FUNC_1(VAR_22, VAR_23, VAR_15, VAR_24);
  if (VAR_25 < 0)
   return VAR_25;
 }

 VAR_24 = VAR_23->is_enabled << VAR_14;

 return FUNC_1(VAR_22, VAR_23, VAR_11, VAR_24);
}
