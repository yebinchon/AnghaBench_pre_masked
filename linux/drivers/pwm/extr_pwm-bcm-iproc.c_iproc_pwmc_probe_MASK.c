
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int base; int npwm; int of_pwm_n_cells; int of_xlate; int * ops; int * dev; } ;
struct iproc_pwmc {scalar_t__ clk; TYPE_1__ chip; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,char*,int) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *,struct resource*) ;
 struct iproc_pwmc* FUNC_9 (int *,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct iproc_pwmc*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_6)
{
 struct iproc_pwmc *VAR_7;
 struct resource *VAR_8;
 unsigned int VAR_9;
 u32 VAR_10;
 int VAR_11;

 VAR_7 = FUNC_9(&VAR_6->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_11(VAR_6, VAR_7);

 VAR_7->chip.dev = &VAR_6->dev;
 VAR_7->chip.ops = &VAR_4;
 VAR_7->chip.base = -1;
 VAR_7->chip.npwm = 4;
 VAR_7->chip.of_xlate = VAR_5;
 VAR_7->chip.of_pwm_n_cells = 3;

 VAR_8 = FUNC_10(VAR_6, VAR_2, 0);
 VAR_7->base = FUNC_8(&VAR_6->dev, VAR_8);
 if (FUNC_2(VAR_7->base))
  return FUNC_3(VAR_7->base);

 VAR_7->clk = FUNC_7(&VAR_6->dev, ((void*)0));
 if (FUNC_2(VAR_7->clk)) {
  FUNC_6(&VAR_6->dev, "failed to get clock: %ld\n",
   FUNC_3(VAR_7->clk));
  return FUNC_3(VAR_7->clk);
 }

 VAR_11 = FUNC_5(VAR_7->clk);
 if (VAR_11 < 0) {
  FUNC_6(&VAR_6->dev, "failed to enable clock: %d\n", VAR_11);
  return VAR_11;
 }


 VAR_10 = FUNC_13(VAR_7->base + VAR_3);

 for (VAR_9 = 0; VAR_9 < VAR_7->chip.npwm; VAR_9++) {
  VAR_10 &= ~(1 << FUNC_1(VAR_9));
  VAR_10 |= 1 << FUNC_0(VAR_9);
 }

 FUNC_14(VAR_10, VAR_7->base + VAR_3);

 VAR_11 = FUNC_12(&VAR_7->chip);
 if (VAR_11 < 0) {
  FUNC_6(&VAR_6->dev, "failed to add PWM chip: %d\n", VAR_11);
  FUNC_4(VAR_7->clk);
 }

 return VAR_11;
}
