
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pwm_device {int dummy; } ;
struct lp8788_bl {struct pwm_device* pwm; TYPE_1__* lp; TYPE_2__* pdata; } ;
struct device {int dummy; } ;
struct TYPE_4__ {unsigned int period_ns; } ;
struct TYPE_3__ {struct device* dev; } ;


 scalar_t__ FUNC_0 (struct pwm_device*) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,char*) ;
 struct pwm_device* FUNC_2 (struct device*,int ) ;
 int FUNC_3 (struct pwm_device*) ;
 int FUNC_4 (struct pwm_device*,unsigned int,unsigned int) ;
 int FUNC_5 (struct pwm_device*) ;
 int FUNC_6 (struct pwm_device*) ;

__attribute__((used)) static void FUNC_7(struct lp8788_bl *VAR_1, int VAR_2, int VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;
 struct device *VAR_6;
 struct pwm_device *VAR_7;

 if (!VAR_1->pdata)
  return;

 VAR_4 = VAR_1->pdata->period_ns;
 VAR_5 = VAR_2 * VAR_4 / VAR_3;
 VAR_6 = VAR_1->lp->dev;


 if (!VAR_1->pwm) {
  VAR_7 = FUNC_2(VAR_6, VAR_0);
  if (FUNC_0(VAR_7)) {
   FUNC_1(VAR_6, "can not get PWM device\n");
   return;
  }

  VAR_1->pwm = VAR_7;





  FUNC_3(VAR_7);
 }

 FUNC_4(VAR_1->pwm, VAR_5, VAR_4);
 if (VAR_5)
  FUNC_6(VAR_1->pwm);
 else
  FUNC_5(VAR_1->pwm);
}
