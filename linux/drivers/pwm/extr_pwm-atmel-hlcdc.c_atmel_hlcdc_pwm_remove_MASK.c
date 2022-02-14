
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct atmel_hlcdc_pwm {TYPE_1__* hlcdc; int chip; } ;
struct TYPE_2__ {int periph_clk; } ;


 int FUNC_0 (int ) ;
 struct atmel_hlcdc_pwm* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct atmel_hlcdc_pwm *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(&VAR_1->chip);
 if (VAR_2)
  return VAR_2;

 FUNC_0(VAR_1->hlcdc->periph_clk);

 return 0;
}
