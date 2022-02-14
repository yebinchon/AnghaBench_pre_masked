
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int npwm; struct pwm_device* pwms; } ;
struct pwm_sifive_ddata {int notifier; int clk; TYPE_2__ chip; } ;
struct TYPE_3__ {scalar_t__ enabled; } ;
struct pwm_device {TYPE_1__ state; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 struct pwm_sifive_ddata* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct pwm_sifive_ddata *VAR_1 = FUNC_3(VAR_0);
 bool VAR_2 = 0;
 struct pwm_device *VAR_3;
 int VAR_4, VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1->chip.npwm; VAR_5++) {
  VAR_3 = &VAR_1->chip.pwms[VAR_5];
  if (VAR_3->state.enabled) {
   VAR_2 = 1;
   break;
  }
 }
 if (VAR_2)
  FUNC_0(VAR_1->clk);

 FUNC_1(VAR_1->clk);
 VAR_4 = FUNC_4(&VAR_1->chip);
 FUNC_2(VAR_1->clk, &VAR_1->notifier);

 return VAR_4;
}
