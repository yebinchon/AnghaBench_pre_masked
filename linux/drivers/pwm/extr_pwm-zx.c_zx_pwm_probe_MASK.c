
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int base; int npwm; int of_pwm_n_cells; int of_xlate; int * ops; int * dev; } ;
struct zx_pwm_chip {TYPE_1__ chip; void* pclk; void* wclk; void* base; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int *,char*,int) ;
 void* FUNC_4 (int *,char*) ;
 void* FUNC_5 (int *,struct resource*) ;
 struct zx_pwm_chip* FUNC_6 (int *,int,int ) ;
 int VAR_5 ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct zx_pwm_chip*) ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_10 (struct zx_pwm_chip*,unsigned int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_7)
{
 struct zx_pwm_chip *VAR_8;
 struct resource *VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 VAR_8 = FUNC_6(&VAR_7->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_7(VAR_7, VAR_2, 0);
 VAR_8->base = FUNC_5(&VAR_7->dev, VAR_9);
 if (FUNC_0(VAR_8->base))
  return FUNC_1(VAR_8->base);

 VAR_8->pclk = FUNC_4(&VAR_7->dev, "pclk");
 if (FUNC_0(VAR_8->pclk))
  return FUNC_1(VAR_8->pclk);

 VAR_8->wclk = FUNC_4(&VAR_7->dev, "wclk");
 if (FUNC_0(VAR_8->wclk))
  return FUNC_1(VAR_8->wclk);

 VAR_11 = FUNC_2(VAR_8->pclk);
 if (VAR_11)
  return VAR_11;

 VAR_8->chip.dev = &VAR_7->dev;
 VAR_8->chip.ops = &VAR_6;
 VAR_8->chip.base = -1;
 VAR_8->chip.npwm = 4;
 VAR_8->chip.of_xlate = VAR_5;
 VAR_8->chip.of_pwm_n_cells = 3;





 for (VAR_10 = 0; VAR_10 < VAR_8->chip.npwm; VAR_10++)
  FUNC_10(VAR_8, VAR_10, VAR_4, VAR_3, 0);

 VAR_11 = FUNC_9(&VAR_8->chip);
 if (VAR_11 < 0) {
  FUNC_3(&VAR_7->dev, "failed to add PWM chip: %d\n", VAR_11);
  return VAR_11;
 }

 FUNC_8(VAR_7, VAR_8);

 return 0;
}
