
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwm_device {int dummy; } ;
struct lp855x {struct pwm_device* pwm; int chipname; int dev; TYPE_1__* pdata; } ;
struct TYPE_2__ {unsigned int period_ns; } ;


 scalar_t__ FUNC_0 (struct pwm_device*) ;
 struct pwm_device* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct pwm_device*) ;
 int FUNC_3 (struct pwm_device*,unsigned int,unsigned int) ;
 int FUNC_4 (struct pwm_device*) ;
 int FUNC_5 (struct pwm_device*) ;

__attribute__((used)) static void FUNC_6(struct lp855x *VAR_0, int VAR_1, int VAR_2)
{
 unsigned int VAR_3 = VAR_0->pdata->period_ns;
 unsigned int VAR_4 = VAR_1 * VAR_3 / VAR_2;
 struct pwm_device *VAR_5;


 if (!VAR_0->pwm) {
  VAR_5 = FUNC_1(VAR_0->dev, VAR_0->chipname);
  if (FUNC_0(VAR_5))
   return;

  VAR_0->pwm = VAR_5;





  FUNC_2(VAR_5);
 }

 FUNC_3(VAR_0->pwm, VAR_4, VAR_3);
 if (VAR_4)
  FUNC_5(VAR_0->pwm);
 else
  FUNC_4(VAR_0->pwm);
}
