
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_2__ {int base; scalar_t__ npwm; int * ops; struct device* dev; } ;
struct pwm_lpss_chip {TYPE_1__ chip; struct pwm_lpss_boardinfo const* info; int regs; } ;
struct pwm_lpss_boardinfo {scalar_t__ npwm; unsigned long clk_rate; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pwm_lpss_chip* FUNC_0 (int ) ;
 struct pwm_lpss_chip* FUNC_1 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct device*,char*,int) ;
 int FUNC_5 (struct device*,struct resource*) ;
 struct pwm_lpss_chip* FUNC_6 (struct device*,int,int ) ;
 int VAR_5 ;
 int FUNC_7 (TYPE_1__*) ;

struct pwm_lpss_chip *FUNC_8(struct device *VAR_6, struct resource *VAR_7,
         const struct pwm_lpss_boardinfo *VAR_8)
{
 struct pwm_lpss_chip *VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 if (FUNC_3(VAR_8->npwm > VAR_4))
  return FUNC_1(-VAR_1);

 VAR_9 = FUNC_6(VAR_6, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return FUNC_1(-VAR_2);

 VAR_9->regs = FUNC_5(VAR_6, VAR_7);
 if (FUNC_2(VAR_9->regs))
  return FUNC_0(VAR_9->regs);

 VAR_9->info = VAR_8;

 VAR_10 = VAR_9->info->clk_rate;
 if (!VAR_10)
  return FUNC_1(-VAR_0);

 VAR_9->chip.dev = VAR_6;
 VAR_9->chip.ops = &VAR_5;
 VAR_9->chip.base = -1;
 VAR_9->chip.npwm = VAR_8->npwm;

 VAR_11 = FUNC_7(&VAR_9->chip);
 if (VAR_11) {
  FUNC_4(VAR_6, "failed to add PWM chip: %d\n", VAR_11);
  return FUNC_1(VAR_11);
 }

 return VAR_9;
}
