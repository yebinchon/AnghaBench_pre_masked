
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int base; unsigned int npwm; int of_pwm_n_cells; int of_xlate; int * ops; struct device* dev; } ;
struct TYPE_4__ {int output_mask; } ;
struct samsung_pwm_chip {int inverter_mask; void* tclk1; void* tclk0; void* base_clk; TYPE_1__ chip; TYPE_2__ variant; void* base; } ;
struct resource {int dummy; } ;
struct device {int platform_data; scalar_t__ of_node; } ;
struct platform_device {struct device dev; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 unsigned int VAR_5 ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (struct device*,char*,int ,int ,int ) ;
 int FUNC_8 (struct device*,char*) ;
 void* FUNC_9 (struct device*,char*) ;
 void* FUNC_10 (struct device*,struct resource*) ;
 struct samsung_pwm_chip* FUNC_11 (struct device*,int,int ) ;
 int FUNC_12 (TYPE_2__*,int ,int) ;
 int VAR_6 ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct samsung_pwm_chip*) ;
 int VAR_7 ;
 int FUNC_15 (struct samsung_pwm_chip*) ;
 int FUNC_16 (struct samsung_pwm_chip*,unsigned int,int) ;
 int FUNC_17 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct samsung_pwm_chip *VAR_10;
 struct resource *VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 VAR_10 = FUNC_11(&VAR_8->dev, sizeof(*VAR_10), VAR_3);
 if (VAR_10 == ((void*)0))
  return -VAR_2;

 VAR_10->chip.dev = &VAR_8->dev;
 VAR_10->chip.ops = &VAR_7;
 VAR_10->chip.base = -1;
 VAR_10->chip.npwm = VAR_5;
 VAR_10->inverter_mask = FUNC_0(VAR_5) - 1;

 if (FUNC_1(VAR_0) && VAR_8->dev.of_node) {
  VAR_13 = FUNC_15(VAR_10);
  if (VAR_13)
   return VAR_13;

  VAR_10->chip.of_xlate = VAR_6;
  VAR_10->chip.of_pwm_n_cells = 3;
 } else {
  if (!VAR_8->dev.platform_data) {
   FUNC_8(&VAR_8->dev, "no platform data specified\n");
   return -VAR_1;
  }

  FUNC_12(&VAR_10->variant, VAR_8->dev.platform_data,
       sizeof(VAR_10->variant));
 }

 VAR_11 = FUNC_13(VAR_8, VAR_4, 0);
 VAR_10->base = FUNC_10(&VAR_8->dev, VAR_11);
 if (FUNC_2(VAR_10->base))
  return FUNC_3(VAR_10->base);

 VAR_10->base_clk = FUNC_9(&VAR_8->dev, "timers");
 if (FUNC_2(VAR_10->base_clk)) {
  FUNC_8(VAR_9, "failed to get timer base clk\n");
  return FUNC_3(VAR_10->base_clk);
 }

 VAR_13 = FUNC_6(VAR_10->base_clk);
 if (VAR_13 < 0) {
  FUNC_8(VAR_9, "failed to enable base clock\n");
  return VAR_13;
 }

 for (VAR_12 = 0; VAR_12 < VAR_5; ++VAR_12)
  if (VAR_10->variant.output_mask & FUNC_0(VAR_12))
   FUNC_16(VAR_10, VAR_12, 1);


 VAR_10->tclk0 = FUNC_9(&VAR_8->dev, "pwm-tclk0");
 VAR_10->tclk1 = FUNC_9(&VAR_8->dev, "pwm-tclk1");

 FUNC_14(VAR_8, VAR_10);

 VAR_13 = FUNC_17(&VAR_10->chip);
 if (VAR_13 < 0) {
  FUNC_8(VAR_9, "failed to register PWM chip\n");
  FUNC_4(VAR_10->base_clk);
  return VAR_13;
 }

 FUNC_7(VAR_9, "base_clk at %lu, tclk0 at %lu, tclk1 at %lu\n",
  FUNC_5(VAR_10->base_clk),
  !FUNC_2(VAR_10->tclk0) ? FUNC_5(VAR_10->tclk0) : 0,
  !FUNC_2(VAR_10->tclk1) ? FUNC_5(VAR_10->tclk1) : 0);

 return 0;
}
