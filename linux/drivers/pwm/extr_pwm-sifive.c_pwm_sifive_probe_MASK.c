
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_3__ {int notifier_call; } ;
struct pwm_chip {int of_pwm_n_cells; int base; int npwm; int of_xlate; int * ops; struct device* dev; } ;
struct pwm_sifive_ddata {int clk; TYPE_1__ notifier; int regs; struct pwm_chip chip; int lock; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct device*,char*,int) ;
 int FUNC_7 (struct device*,char*,...) ;
 int FUNC_8 (struct device*,int *) ;
 int FUNC_9 (struct device*,struct resource*) ;
 struct pwm_sifive_ddata* FUNC_10 (struct device*,int,int ) ;
 int FUNC_11 (int *) ;
 int VAR_4 ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct pwm_sifive_ddata*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_14 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct pwm_sifive_ddata *VAR_9;
 struct pwm_chip *VAR_10;
 struct resource *VAR_11;
 int VAR_12;

 VAR_9 = FUNC_10(VAR_8, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_0;

 FUNC_11(&VAR_9->lock);
 VAR_10 = &VAR_9->chip;
 VAR_10->dev = VAR_8;
 VAR_10->ops = &VAR_6;
 VAR_10->of_xlate = VAR_4;
 VAR_10->of_pwm_n_cells = 3;
 VAR_10->base = -1;
 VAR_10->npwm = 4;

 VAR_11 = FUNC_12(VAR_7, VAR_3, 0);
 VAR_9->regs = FUNC_9(VAR_8, VAR_11);
 if (FUNC_0(VAR_9->regs))
  return FUNC_1(VAR_9->regs);

 VAR_9->clk = FUNC_8(VAR_8, ((void*)0));
 if (FUNC_0(VAR_9->clk)) {
  if (FUNC_1(VAR_9->clk) != -VAR_1)
   FUNC_7(VAR_8, "Unable to find controller clock\n");
  return FUNC_1(VAR_9->clk);
 }

 VAR_12 = FUNC_5(VAR_9->clk);
 if (VAR_12) {
  FUNC_7(VAR_8, "failed to enable clock for pwm: %d\n", VAR_12);
  return VAR_12;
 }


 VAR_9->notifier.notifier_call = VAR_5;
 VAR_12 = FUNC_3(VAR_9->clk, &VAR_9->notifier);
 if (VAR_12) {
  FUNC_7(VAR_8, "failed to register clock notifier: %d\n", VAR_12);
  goto disable_clk;
 }

 VAR_12 = FUNC_14(VAR_10);
 if (VAR_12 < 0) {
  FUNC_7(VAR_8, "cannot register PWM: %d\n", VAR_12);
  goto unregister_clk;
 }

 FUNC_13(VAR_7, VAR_9);
 FUNC_6(VAR_8, "SiFive PWM chip registered %d PWMs\n", VAR_10->npwm);

 return 0;

unregister_clk:
 FUNC_4(VAR_9->clk, &VAR_9->notifier);
disable_clk:
 FUNC_2(VAR_9->clk);

 return VAR_12;
}
