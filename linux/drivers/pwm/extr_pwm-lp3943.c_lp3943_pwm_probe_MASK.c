
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_4__ {int npwm; int * ops; TYPE_2__* dev; } ;
struct lp3943_pwm {TYPE_1__ chip; struct lp3943* lp3943; int pdata; } ;
struct lp3943 {int pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 struct lp3943* FUNC_1 (int ) ;
 struct lp3943_pwm* FUNC_2 (TYPE_2__*,int,int ) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_2__*,struct lp3943_pwm*) ;
 int FUNC_4 (struct platform_device*,struct lp3943_pwm*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_6)
{
 struct lp3943 *VAR_7 = FUNC_1(VAR_6->dev.parent);
 struct lp3943_pwm *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(&VAR_6->dev, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_2;

 VAR_8->pdata = VAR_7->pdata;
 if (!VAR_8->pdata) {
  if (FUNC_0(VAR_0))
   VAR_9 = FUNC_3(&VAR_6->dev, VAR_8);
  else
   VAR_9 = -VAR_1;

  if (VAR_9)
   return VAR_9;
 }

 VAR_8->lp3943 = VAR_7;
 VAR_8->chip.dev = &VAR_6->dev;
 VAR_8->chip.ops = &VAR_5;
 VAR_8->chip.npwm = VAR_4;

 FUNC_4(VAR_6, VAR_8);

 return FUNC_5(&VAR_8->chip);
}
