
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct pmic_gpio_state {int dummy; } ;
struct pmic_gpio_pad {int out_value; int function; char const* const power_source; size_t pullup; size_t buffer_type; size_t strength; char const* const atest; char const* const dtest_buffer; scalar_t__ output_enabled; scalar_t__ analog_pass; int lv_mv_type; scalar_t__ input_enabled; } ;
struct pinctrl_dev {TYPE_2__* desc; } ;
struct TYPE_4__ {TYPE_1__* pins; } ;
struct TYPE_3__ {struct pmic_gpio_pad* drv_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 char const* const VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct pmic_gpio_state* FUNC_0 (struct pinctrl_dev*) ;
 char const* const* VAR_7 ;
 int FUNC_1 (struct pmic_gpio_state*,struct pmic_gpio_pad*,int ) ;
 int FUNC_2 (struct seq_file*,char*,char const* const) ;
 int FUNC_3 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_4(struct pinctrl_dev *VAR_8,
          struct seq_file *VAR_9, unsigned VAR_10)
{
 struct pmic_gpio_state *VAR_11 = FUNC_0(VAR_8);
 struct pmic_gpio_pad *VAR_12;
 int VAR_13, VAR_14, VAR_15;

 static const char *const VAR_16[] = {
  "pull-up 30uA", "pull-up 1.5uA", "pull-up 31.5uA",
  "pull-up 1.5uA + 30uA boost", "pull-down 10uA", "no pull"
 };
 static const char *const VAR_17[] = {
  "push-pull", "open-drain", "open-source"
 };
 static const char *const VAR_18[] = {
  "no", "high", "medium", "low"
 };

 VAR_12 = VAR_8->desc->pins[VAR_10].drv_data;

 FUNC_2(VAR_9, " gpio%-2d:", VAR_10 + VAR_2);

 VAR_14 = FUNC_1(VAR_11, VAR_12, VAR_3);

 if (VAR_14 < 0 || !(VAR_14 >> VAR_4)) {
  FUNC_3(VAR_9, " ---");
 } else {
  if (VAR_12->input_enabled) {
   VAR_13 = FUNC_1(VAR_11, VAR_12, VAR_5);
   if (VAR_13 < 0)
    return;

   VAR_13 &= VAR_6;
   VAR_12->out_value = VAR_13;
  }




  VAR_15 = VAR_12->function;
  if (!VAR_12->lv_mv_type &&
    VAR_12->function >= VAR_1)
   VAR_15 += VAR_0 -
    VAR_1;

  if (VAR_12->analog_pass)
   FUNC_3(VAR_9, " analog-pass");
  else
   FUNC_2(VAR_9, " %-4s",
     VAR_12->output_enabled ? "out" : "in");
  FUNC_2(VAR_9, " %-4s", VAR_12->out_value ? "high" : "low");
  FUNC_2(VAR_9, " %-7s", VAR_7[VAR_15]);
  FUNC_2(VAR_9, " vin-%d", VAR_12->power_source);
  FUNC_2(VAR_9, " %-27s", VAR_16[VAR_12->pullup]);
  FUNC_2(VAR_9, " %-10s", VAR_17[VAR_12->buffer_type]);
  FUNC_2(VAR_9, " %-7s", VAR_18[VAR_12->strength]);
  FUNC_2(VAR_9, " atest-%d", VAR_12->atest);
  FUNC_2(VAR_9, " dtest-%d", VAR_12->dtest_buffer);
 }
}
