
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct hibvt_pwm_soc {int num_pwms; } ;
struct TYPE_2__ {int base; int npwm; int of_pwm_n_cells; int of_xlate; int * dev; int * ops; } ;
struct hibvt_pwm_chip {int base; TYPE_1__ chip; int clk; int rstc; struct hibvt_pwm_soc const* soc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,struct resource*) ;
 struct hibvt_pwm_chip* FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *,int *) ;
 int VAR_5 ;
 int FUNC_10 (int ,int ,int ,int) ;
 int FUNC_11 (int) ;
 struct hibvt_pwm_soc* FUNC_12 (int *) ;
 int VAR_6 ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct hibvt_pwm_chip*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_7)
{
 const struct hibvt_pwm_soc *VAR_8 =
    FUNC_12(&VAR_7->dev);
 struct hibvt_pwm_chip *VAR_9;
 struct resource *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_9 = FUNC_8(&VAR_7->dev, sizeof(*VAR_9), VAR_1);
 if (VAR_9 == ((void*)0))
  return -VAR_0;

 VAR_9->clk = FUNC_6(&VAR_7->dev, ((void*)0));
 if (FUNC_0(VAR_9->clk)) {
  FUNC_5(&VAR_7->dev, "getting clock failed with %ld\n",
    FUNC_1(VAR_9->clk));
  return FUNC_1(VAR_9->clk);
 }

 VAR_9->chip.ops = &VAR_5;
 VAR_9->chip.dev = &VAR_7->dev;
 VAR_9->chip.base = -1;
 VAR_9->chip.npwm = VAR_8->num_pwms;
 VAR_9->chip.of_xlate = VAR_6;
 VAR_9->chip.of_pwm_n_cells = 3;
 VAR_9->soc = VAR_8;

 VAR_10 = FUNC_13(VAR_7, VAR_2, 0);
 VAR_9->base = FUNC_7(&VAR_7->dev, VAR_10);
 if (FUNC_0(VAR_9->base))
  return FUNC_1(VAR_9->base);

 VAR_11 = FUNC_4(VAR_9->clk);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_9->rstc = FUNC_9(&VAR_7->dev, ((void*)0));
 if (FUNC_0(VAR_9->rstc)) {
  FUNC_3(VAR_9->clk);
  return FUNC_1(VAR_9->rstc);
 }

 FUNC_16(VAR_9->rstc);
 FUNC_11(30);
 FUNC_17(VAR_9->rstc);

 VAR_11 = FUNC_15(&VAR_9->chip);
 if (VAR_11 < 0) {
  FUNC_3(VAR_9->clk);
  return VAR_11;
 }

 for (VAR_12 = 0; VAR_12 < VAR_9->chip.npwm; VAR_12++) {
  FUNC_10(VAR_9->base, FUNC_2(VAR_12),
    VAR_3, (0x1 << VAR_4));
 }

 FUNC_14(VAR_7, VAR_9);

 return 0;
}
