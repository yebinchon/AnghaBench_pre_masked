
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmic_gpio_state {int dummy; } ;
struct pmic_gpio_pad {int is_enabled; unsigned int buffer_type; unsigned int pullup; unsigned int num_sources; unsigned int power_source; int input_enabled; int output_enabled; unsigned int out_value; unsigned int strength; unsigned int atest; int analog_pass; unsigned int dtest_buffer; unsigned int function; scalar_t__ lv_mv_type; int have_buffer; } ;
struct pinctrl_dev {TYPE_2__* desc; } ;
struct TYPE_4__ {TYPE_1__* pins; } ;
struct TYPE_3__ {struct pmic_gpio_pad* drv_data; } ;


 unsigned int FUNC_0 (int) ;
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
 void* VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 unsigned int VAR_22 ;
 int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 unsigned int FUNC_1 (unsigned long) ;
 unsigned int FUNC_2 (unsigned long) ;
 struct pmic_gpio_state* FUNC_3 (struct pinctrl_dev*) ;
 int FUNC_4 (struct pmic_gpio_state*,struct pmic_gpio_pad*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_32, unsigned int VAR_33,
    unsigned long *VAR_34, unsigned VAR_35)
{
 struct pmic_gpio_state *VAR_36 = FUNC_3(VAR_32);
 struct pmic_gpio_pad *VAR_37;
 unsigned VAR_38, VAR_39;
 unsigned int VAR_40;
 int VAR_41, VAR_42;

 VAR_37 = VAR_32->desc->pins[VAR_33].drv_data;

 VAR_37->is_enabled = 1;
 for (VAR_41 = 0; VAR_41 < VAR_35; VAR_41++) {
  VAR_38 = FUNC_2(VAR_34[VAR_41]);
  VAR_39 = FUNC_1(VAR_34[VAR_41]);

  switch (VAR_38) {
  case 136:
   VAR_37->buffer_type = VAR_8;
   break;
  case 138:
   if (!VAR_37->have_buffer)
    return -VAR_0;
   VAR_37->buffer_type = VAR_9;
   break;
  case 137:
   if (!VAR_37->have_buffer)
    return -VAR_0;
   VAR_37->buffer_type = VAR_10;
   break;
  case 142:
   VAR_37->pullup = VAR_11;
   break;
  case 139:
   VAR_37->pullup = VAR_14;
   break;
  case 140:
   if (VAR_39)
    VAR_37->pullup = VAR_12;
   else
    VAR_37->pullup = VAR_11;
   break;
  case 141:
   VAR_37->is_enabled = 0;
   break;
  case 133:
   if (VAR_39 >= VAR_37->num_sources)
    return -VAR_0;
   VAR_37->power_source = VAR_39;
   break;
  case 135:
   VAR_37->input_enabled = VAR_39 ? 1 : 0;
   break;
  case 134:
   VAR_37->output_enabled = 1;
   VAR_37->out_value = VAR_39;
   break;
  case 129:
   if (VAR_39 > VAR_13)
    return -VAR_0;
   VAR_37->pullup = VAR_39;
   break;
  case 128:
   if (VAR_39 > VAR_31)
    return -VAR_0;
   VAR_37->strength = VAR_39;
   break;
  case 131:
   if (!VAR_37->lv_mv_type || VAR_39 > 4)
    return -VAR_0;
   VAR_37->atest = VAR_39;
   break;
  case 132:
   if (!VAR_37->lv_mv_type)
    return -VAR_0;
   VAR_37->analog_pass = 1;
   break;
  case 130:
   if (VAR_39 > 4)
    return -VAR_0;
   VAR_37->dtest_buffer = VAR_39;
   break;
  default:
   return -VAR_0;
  }
 }

 VAR_40 = VAR_37->power_source << VAR_30;

 VAR_42 = FUNC_4(VAR_36, VAR_37, VAR_18, VAR_40);
 if (VAR_42 < 0)
  return VAR_42;

 VAR_40 = VAR_37->pullup << VAR_29;

 VAR_42 = FUNC_4(VAR_36, VAR_37, VAR_17, VAR_40);
 if (VAR_42 < 0)
  return VAR_42;

 VAR_40 = VAR_37->buffer_type << VAR_28;
 VAR_40 |= VAR_37->strength << VAR_27;

 VAR_42 = FUNC_4(VAR_36, VAR_37, VAR_16, VAR_40);
 if (VAR_42 < 0)
  return VAR_42;

 if (VAR_37->dtest_buffer == 0) {
  VAR_40 = 0;
 } else {
  if (VAR_37->lv_mv_type) {
   VAR_40 = VAR_37->dtest_buffer - 1;
   VAR_40 |= VAR_1;
  } else {
   VAR_40 = FUNC_0(VAR_37->dtest_buffer - 1);
  }
 }
 VAR_42 = FUNC_4(VAR_36, VAR_37, VAR_15, VAR_40);
 if (VAR_42 < 0)
  return VAR_42;

 if (VAR_37->analog_pass)
  VAR_40 = VAR_4;
 else if (VAR_37->output_enabled && VAR_37->input_enabled)
  VAR_40 = VAR_6;
 else if (VAR_37->output_enabled)
  VAR_40 = VAR_7;
 else
  VAR_40 = VAR_5;

 if (VAR_37->lv_mv_type) {
  VAR_42 = FUNC_4(VAR_36, VAR_37,
    VAR_23, VAR_40);
  if (VAR_42 < 0)
   return VAR_42;

  VAR_40 = VAR_37->atest - 1;
  VAR_42 = FUNC_4(VAR_36, VAR_37,
    VAR_20, VAR_40);
  if (VAR_42 < 0)
   return VAR_42;

  VAR_40 = VAR_37->out_value
   << VAR_2;
  VAR_40 |= VAR_37->function
   & VAR_3;
  VAR_42 = FUNC_4(VAR_36, VAR_37,
   VAR_21, VAR_40);
  if (VAR_42 < 0)
   return VAR_42;
 } else {
  VAR_40 = VAR_40 << VAR_24;
  VAR_40 |= VAR_37->function << VAR_25;
  VAR_40 |= VAR_37->out_value & VAR_26;

  VAR_42 = FUNC_4(VAR_36, VAR_37, VAR_23, VAR_40);
  if (VAR_42 < 0)
   return VAR_42;
 }

 VAR_40 = VAR_37->is_enabled << VAR_22;

 VAR_42 = FUNC_4(VAR_36, VAR_37, VAR_19, VAR_40);

 return VAR_42;
}
