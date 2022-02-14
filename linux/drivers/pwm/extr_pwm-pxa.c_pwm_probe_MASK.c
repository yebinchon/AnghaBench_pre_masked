
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_2__ {int base; int npwm; int of_pwm_n_cells; int of_xlate; int * ops; int * dev; } ;
struct pxa_pwm_chip {TYPE_1__ chip; int mmio_base; int clk; } ;
struct platform_device_id {int driver_data; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,struct resource*) ;
 struct pxa_pwm_chip* FUNC_6 (int *,int,int ) ;
 struct platform_device_id* FUNC_7 (struct platform_device*) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct pxa_pwm_chip*) ;
 int FUNC_10 (TYPE_1__*) ;
 struct platform_device_id* FUNC_11 (int *) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_8)
{
 const struct platform_device_id *VAR_9 = FUNC_7(VAR_8);
 struct pxa_pwm_chip *VAR_10;
 struct resource *VAR_11;
 int VAR_12 = 0;

 if (FUNC_0(VAR_0) && VAR_9 == ((void*)0))
  VAR_9 = FUNC_11(&VAR_8->dev);

 if (VAR_9 == ((void*)0))
  return -VAR_1;

 VAR_10 = FUNC_6(&VAR_8->dev, sizeof(*VAR_10), VAR_3);
 if (VAR_10 == ((void*)0))
  return -VAR_2;

 VAR_10->clk = FUNC_4(&VAR_8->dev, ((void*)0));
 if (FUNC_1(VAR_10->clk))
  return FUNC_2(VAR_10->clk);

 VAR_10->chip.dev = &VAR_8->dev;
 VAR_10->chip.ops = &VAR_7;
 VAR_10->chip.base = -1;
 VAR_10->chip.npwm = (VAR_9->driver_data & VAR_4) ? 2 : 1;

 if (FUNC_0(VAR_0)) {
  VAR_10->chip.of_xlate = VAR_6;
  VAR_10->chip.of_pwm_n_cells = 1;
 }

 VAR_11 = FUNC_8(VAR_8, VAR_5, 0);
 VAR_10->mmio_base = FUNC_5(&VAR_8->dev, VAR_11);
 if (FUNC_1(VAR_10->mmio_base))
  return FUNC_2(VAR_10->mmio_base);

 VAR_12 = FUNC_10(&VAR_10->chip);
 if (VAR_12 < 0) {
  FUNC_3(&VAR_8->dev, "pwmchip_add() failed: %d\n", VAR_12);
  return VAR_12;
 }

 FUNC_9(VAR_8, VAR_10);
 return 0;
}
