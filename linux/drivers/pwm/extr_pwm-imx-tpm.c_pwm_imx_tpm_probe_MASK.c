
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int base; int of_pwm_n_cells; int npwm; int of_xlate; int * ops; int * dev; } ;
struct imx_tpm_pwm_chip {scalar_t__ clk; TYPE_1__ chip; int lock; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,char*,int) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 struct imx_tpm_pwm_chip* FUNC_7 (int *,int,int ) ;
 scalar_t__ FUNC_8 (struct platform_device*,int ) ;
 int VAR_5 ;
 int FUNC_9 (int *) ;
 int VAR_6 ;
 int FUNC_10 (struct platform_device*,struct imx_tpm_pwm_chip*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_7)
{
 struct imx_tpm_pwm_chip *VAR_8;
 int VAR_9;
 u32 VAR_10;

 VAR_8 = FUNC_7(&VAR_7->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_0;

 FUNC_10(VAR_7, VAR_8);

 VAR_8->base = FUNC_8(VAR_7, 0);
 if (FUNC_1(VAR_8->base))
  return FUNC_2(VAR_8->base);

 VAR_8->clk = FUNC_6(&VAR_7->dev, ((void*)0));
 if (FUNC_1(VAR_8->clk)) {
  VAR_9 = FUNC_2(VAR_8->clk);
  if (VAR_9 != -VAR_1)
   FUNC_5(&VAR_7->dev,
    "failed to get PWM clock: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_4(VAR_8->clk);
 if (VAR_9) {
  FUNC_5(&VAR_7->dev,
   "failed to prepare or enable clock: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_8->chip.dev = &VAR_7->dev;
 VAR_8->chip.ops = &VAR_5;
 VAR_8->chip.base = -1;
 VAR_8->chip.of_xlate = VAR_6;
 VAR_8->chip.of_pwm_n_cells = 3;


 VAR_10 = FUNC_12(VAR_8->base + VAR_3);
 VAR_8->chip.npwm = FUNC_0(VAR_4, VAR_10);

 FUNC_9(&VAR_8->lock);

 VAR_9 = FUNC_11(&VAR_8->chip);
 if (VAR_9) {
  FUNC_5(&VAR_7->dev, "failed to add PWM chip: %d\n", VAR_9);
  FUNC_3(VAR_8->clk);
 }

 return VAR_9;
}
