
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int base; int npwm; int of_pwm_n_cells; int of_xlate; int * ops; int * dev; } ;
struct kona_pwmc {TYPE_1__ chip; scalar_t__ clk; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (unsigned int) ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,char*,int) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,struct resource*) ;
 struct kona_pwmc* FUNC_8 (int *,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct kona_pwmc*) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_7)
{
 struct kona_pwmc *VAR_8;
 struct resource *VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11 = 0;
 int VAR_12 = 0;

 VAR_8 = FUNC_8(&VAR_7->dev, sizeof(*VAR_8), VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 FUNC_10(VAR_7, VAR_8);

 VAR_8->chip.dev = &VAR_7->dev;
 VAR_8->chip.ops = &VAR_5;
 VAR_8->chip.base = -1;
 VAR_8->chip.npwm = 6;
 VAR_8->chip.of_xlate = VAR_6;
 VAR_8->chip.of_pwm_n_cells = 3;

 VAR_9 = FUNC_9(VAR_7, VAR_2, 0);
 VAR_8->base = FUNC_7(&VAR_7->dev, VAR_9);
 if (FUNC_0(VAR_8->base))
  return FUNC_1(VAR_8->base);

 VAR_8->clk = FUNC_6(&VAR_7->dev, ((void*)0));
 if (FUNC_0(VAR_8->clk)) {
  FUNC_5(&VAR_7->dev, "failed to get clock: %ld\n",
   FUNC_1(VAR_8->clk));
  return FUNC_1(VAR_8->clk);
 }

 VAR_12 = FUNC_4(VAR_8->clk);
 if (VAR_12 < 0) {
  FUNC_5(&VAR_7->dev, "failed to enable clock: %d\n", VAR_12);
  return VAR_12;
 }


 for (VAR_10 = 0; VAR_10 < VAR_8->chip.npwm; VAR_10++)
  VAR_11 |= (1 << FUNC_2(VAR_10));

 FUNC_12(VAR_11, VAR_8->base + VAR_3);

 FUNC_3(VAR_8->clk);

 VAR_12 = FUNC_11(&VAR_8->chip, VAR_4);
 if (VAR_12 < 0)
  FUNC_5(&VAR_7->dev, "failed to add PWM chip: %d\n", VAR_12);

 return VAR_12;
}
