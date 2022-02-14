
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct resource {int dummy; } ;
struct pwm_device {int dummy; } ;
struct platform_device {int dev; } ;
struct lpc18xx_pwm_data {int dummy; } ;
struct TYPE_3__ {int base; int npwm; int of_pwm_n_cells; struct pwm_device* pwms; int of_xlate; int * ops; int * dev; } ;
struct lpc18xx_pwm_chip {int max_period_ns; int pwm_clk; TYPE_1__ chip; int * dev; int period_event; int event_map; int clk_rate; int min_period_ns; int period_lock; int res_lock; int base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 int VAR_10 ;
 int FUNC_5 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,char*,...) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *,struct resource*) ;
 void* FUNC_14 (int *,int,int ) ;
 int FUNC_15 (int,int ) ;
 int VAR_16 ;
 int FUNC_16 (struct lpc18xx_pwm_chip*,int ) ;
 int FUNC_17 (struct lpc18xx_pwm_chip*,int ,int) ;
 int FUNC_18 (int *) ;
 int VAR_17 ;
 struct resource* FUNC_19 (struct platform_device*,int ,int ) ;
 int FUNC_20 (struct platform_device*,struct lpc18xx_pwm_chip*) ;
 int FUNC_21 (struct pwm_device*,struct lpc18xx_pwm_data*) ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (TYPE_1__*) ;
 int FUNC_24 (int ,int *) ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_18)
{
 struct lpc18xx_pwm_chip *VAR_19;
 struct pwm_device *VAR_20;
 struct resource *VAR_21;
 int VAR_22, VAR_23;
 u64 VAR_24;

 VAR_19 = FUNC_14(&VAR_18->dev, sizeof(*VAR_19),
       VAR_2);
 if (!VAR_19)
  return -VAR_1;

 VAR_19->dev = &VAR_18->dev;

 VAR_21 = FUNC_19(VAR_18, VAR_3, 0);
 VAR_19->base = FUNC_13(&VAR_18->dev, VAR_21);
 if (FUNC_2(VAR_19->base))
  return FUNC_7(VAR_19->base);

 VAR_19->pwm_clk = FUNC_12(&VAR_18->dev, "pwm");
 if (FUNC_2(VAR_19->pwm_clk)) {
  FUNC_11(&VAR_18->dev, "failed to get pwm clock\n");
  return FUNC_7(VAR_19->pwm_clk);
 }

 VAR_22 = FUNC_10(VAR_19->pwm_clk);
 if (VAR_22 < 0) {
  FUNC_11(&VAR_18->dev, "could not prepare or enable pwm clock\n");
  return VAR_22;
 }

 VAR_19->clk_rate = FUNC_9(VAR_19->pwm_clk);
 if (!VAR_19->clk_rate) {
  FUNC_11(&VAR_18->dev, "pwm clock has no frequency\n");
  VAR_22 = -VAR_0;
  goto disable_pwmclk;
 }

 FUNC_18(&VAR_19->res_lock);
 FUNC_18(&VAR_19->period_lock);

 VAR_24 = (u64)VAR_15 * VAR_14;
 FUNC_15(VAR_24, VAR_19->clk_rate);
 VAR_19->max_period_ns = VAR_24;

 VAR_19->min_period_ns = FUNC_1(VAR_15,
        VAR_19->clk_rate);

 VAR_19->chip.dev = &VAR_18->dev;
 VAR_19->chip.ops = &VAR_16;
 VAR_19->chip.base = -1;
 VAR_19->chip.npwm = 16;
 VAR_19->chip.of_xlate = VAR_17;
 VAR_19->chip.of_pwm_n_cells = 3;


 FUNC_17(VAR_19, VAR_5,
      VAR_6);





 FUNC_24(VAR_10, &VAR_19->event_map);
 VAR_19->period_event = VAR_10;

 FUNC_17(VAR_19,
      FUNC_5(VAR_19->period_event),
      VAR_11);

 VAR_24 = FUNC_4(VAR_19->period_event) |
       VAR_9;
 FUNC_17(VAR_19,
      FUNC_3(VAR_19->period_event), VAR_24);

 FUNC_17(VAR_19, VAR_12,
      FUNC_0(VAR_19->period_event));

 VAR_22 = FUNC_22(&VAR_19->chip);
 if (VAR_22 < 0) {
  FUNC_11(&VAR_18->dev, "pwmchip_add failed: %d\n", VAR_22);
  goto disable_pwmclk;
 }

 for (VAR_23 = 0; VAR_23 < VAR_19->chip.npwm; VAR_23++) {
  struct lpc18xx_pwm_data *VAR_25;

  VAR_20 = &VAR_19->chip.pwms[VAR_23];

  VAR_25 = FUNC_14(VAR_19->dev, sizeof(*VAR_25),
        VAR_2);
  if (!VAR_25) {
   VAR_22 = -VAR_1;
   goto remove_pwmchip;
  }

  FUNC_21(VAR_20, VAR_25);
 }

 FUNC_20(VAR_18, VAR_19);

 VAR_24 = FUNC_16(VAR_19, VAR_7);
 VAR_24 &= ~VAR_4;
 VAR_24 &= ~VAR_8;
 VAR_24 &= ~VAR_13;
 VAR_24 |= FUNC_6(0);
 FUNC_17(VAR_19, VAR_7, VAR_24);

 return 0;

remove_pwmchip:
 FUNC_23(&VAR_19->chip);
disable_pwmclk:
 FUNC_8(VAR_19->pwm_clk);
 return VAR_22;
}
