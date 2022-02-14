
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sti_pwm_compat_data {int max_prescale; int max_pwm_cnt; unsigned int cpt_num_devs; scalar_t__ pwm_num_devs; int reg_fields; } ;
struct TYPE_2__ {int base; int * pwms; scalar_t__ npwm; int * ops; struct device* dev; } ;
struct sti_pwm_chip {TYPE_1__ chip; void* cpt_clk; void* pwm_clk; struct sti_pwm_compat_data* cdata; int sti_pwm_lock; scalar_t__ en_count; struct device* dev; void* regmap; void* mmio; } ;
struct sti_cpt_ddata {int lock; int wait; } ;
struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct device*,char*) ;
 void* FUNC_5 (struct device*,struct resource*) ;
 void* FUNC_6 (struct device*,int,int ) ;
 void* FUNC_7 (struct device*,void*,int *) ;
 int FUNC_8 (struct device*,int,int ,int ,int ,struct sti_pwm_chip*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 void* FUNC_11 (int ,char*) ;
 int FUNC_12 (struct platform_device*,int ) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct sti_pwm_chip*) ;
 int FUNC_15 (int *,struct sti_cpt_ddata*) ;
 int FUNC_16 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_17 (struct sti_pwm_chip*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct sti_pwm_compat_data *VAR_9;
 struct sti_pwm_chip *VAR_10;
 struct resource *VAR_11;
 unsigned int VAR_12;
 int VAR_13, VAR_14;

 VAR_10 = FUNC_6(VAR_8, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_9 = FUNC_6(VAR_8, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_11 = FUNC_13(VAR_7, VAR_2, 0);

 VAR_10->mmio = FUNC_5(VAR_8, VAR_11);
 if (FUNC_0(VAR_10->mmio))
  return FUNC_1(VAR_10->mmio);

 VAR_10->regmap = FUNC_7(VAR_8, VAR_10->mmio,
        &VAR_6);
 if (FUNC_0(VAR_10->regmap))
  return FUNC_1(VAR_10->regmap);

 VAR_13 = FUNC_12(VAR_7, 0);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_14 = FUNC_8(&VAR_7->dev, VAR_13, VAR_3, 0,
          VAR_7->name, VAR_10);
 if (VAR_14 < 0) {
  FUNC_4(&VAR_7->dev, "Failed to request IRQ\n");
  return VAR_14;
 }





 VAR_9->reg_fields = VAR_5;
 VAR_9->max_prescale = 0xff;
 VAR_9->max_pwm_cnt = 255;
 VAR_9->pwm_num_devs = 0;
 VAR_9->cpt_num_devs = 0;

 VAR_10->cdata = VAR_9;
 VAR_10->dev = VAR_8;
 VAR_10->en_count = 0;
 FUNC_10(&VAR_10->sti_pwm_lock);

 VAR_14 = FUNC_17(VAR_10);
 if (VAR_14)
  return VAR_14;

 if (!VAR_9->pwm_num_devs)
  goto skip_pwm;

 VAR_10->pwm_clk = FUNC_11(VAR_8->of_node, "pwm");
 if (FUNC_0(VAR_10->pwm_clk)) {
  FUNC_4(VAR_8, "failed to get PWM clock\n");
  return FUNC_1(VAR_10->pwm_clk);
 }

 VAR_14 = FUNC_2(VAR_10->pwm_clk);
 if (VAR_14) {
  FUNC_4(VAR_8, "failed to prepare clock\n");
  return VAR_14;
 }

skip_pwm:
 if (!VAR_9->cpt_num_devs)
  goto skip_cpt;

 VAR_10->cpt_clk = FUNC_11(VAR_8->of_node, "capture");
 if (FUNC_0(VAR_10->cpt_clk)) {
  FUNC_4(VAR_8, "failed to get PWM capture clock\n");
  return FUNC_1(VAR_10->cpt_clk);
 }

 VAR_14 = FUNC_2(VAR_10->cpt_clk);
 if (VAR_14) {
  FUNC_4(VAR_8, "failed to prepare clock\n");
  return VAR_14;
 }

skip_cpt:
 VAR_10->chip.dev = VAR_8;
 VAR_10->chip.ops = &VAR_4;
 VAR_10->chip.base = -1;
 VAR_10->chip.npwm = VAR_10->cdata->pwm_num_devs;

 VAR_14 = FUNC_16(&VAR_10->chip);
 if (VAR_14 < 0) {
  FUNC_3(VAR_10->pwm_clk);
  FUNC_3(VAR_10->cpt_clk);
  return VAR_14;
 }

 for (VAR_12 = 0; VAR_12 < VAR_9->cpt_num_devs; VAR_12++) {
  struct sti_cpt_ddata *VAR_15;

  VAR_15 = FUNC_6(VAR_8, sizeof(*VAR_15), VAR_1);
  if (!VAR_15)
   return -VAR_0;

  FUNC_9(&VAR_15->wait);
  FUNC_10(&VAR_15->lock);

  FUNC_15(&VAR_10->chip.pwms[VAR_12], VAR_15);
 }

 FUNC_14(VAR_7, VAR_10);

 return 0;
}
