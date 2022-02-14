
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct device* parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct intel_soc_pmic {int regmap; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int base; int npwm; int * ops; TYPE_2__* dev; } ;
struct crystalcove_pwm {TYPE_1__ chip; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct intel_soc_pmic* FUNC_0 (struct device*) ;
 struct crystalcove_pwm* FUNC_1 (TYPE_2__*,int,int ) ;
 int FUNC_2 (struct platform_device*,struct crystalcove_pwm*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct crystalcove_pwm *VAR_4;
 struct device *VAR_5 = VAR_3->dev.parent;
 struct intel_soc_pmic *VAR_6 = FUNC_0(VAR_5);

 VAR_4 = FUNC_1(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->chip.dev = &VAR_3->dev;
 VAR_4->chip.ops = &VAR_2;
 VAR_4->chip.base = -1;
 VAR_4->chip.npwm = 1;


 VAR_4->regmap = VAR_6->regmap;

 FUNC_2(VAR_3, VAR_4);

 return FUNC_3(&VAR_4->chip);
}
