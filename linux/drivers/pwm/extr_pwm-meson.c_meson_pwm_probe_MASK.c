
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int base; int of_pwm_n_cells; int of_xlate; int npwm; int * ops; int * dev; } ;
struct meson_pwm {TYPE_1__ chip; int data; int lock; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,struct resource*) ;
 struct meson_pwm* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct meson_pwm*) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int VAR_5 ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct meson_pwm*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_6)
{
 struct meson_pwm *VAR_7;
 struct resource *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_4(&VAR_6->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_7(VAR_6, VAR_2, 0);
 VAR_7->base = FUNC_3(&VAR_6->dev, VAR_8);
 if (FUNC_0(VAR_7->base))
  return FUNC_1(VAR_7->base);

 FUNC_10(&VAR_7->lock);
 VAR_7->chip.dev = &VAR_6->dev;
 VAR_7->chip.ops = &VAR_4;
 VAR_7->chip.base = -1;
 VAR_7->chip.npwm = VAR_3;
 VAR_7->chip.of_xlate = VAR_5;
 VAR_7->chip.of_pwm_n_cells = 3;

 VAR_7->data = FUNC_6(&VAR_6->dev);

 VAR_9 = FUNC_5(VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_9(&VAR_7->chip);
 if (VAR_9 < 0) {
  FUNC_2(&VAR_6->dev, "failed to register PWM chip: %d\n", VAR_9);
  return VAR_9;
 }

 FUNC_8(VAR_6, VAR_7);

 return 0;
}
