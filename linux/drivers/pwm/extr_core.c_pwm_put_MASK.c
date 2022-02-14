
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pwm_device {TYPE_2__* chip; int * label; int flags; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int owner; int (* free ) (TYPE_2__*,struct pwm_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (struct pwm_device*,int *) ;
 int FUNC_5 (TYPE_2__*,struct pwm_device*) ;
 int FUNC_6 (int ,int *) ;

void FUNC_7(struct pwm_device *VAR_2)
{
 if (!VAR_2)
  return;

 FUNC_1(&VAR_1);

 if (!FUNC_6(VAR_0, &VAR_2->flags)) {
  FUNC_3("PWM device already freed\n");
  goto out;
 }

 if (VAR_2->chip->ops->free)
  VAR_2->chip->ops->free(VAR_2->chip, VAR_2);

 FUNC_4(VAR_2, ((void*)0));
 VAR_2->label = ((void*)0);

 FUNC_0(VAR_2->chip->ops->owner);
out:
 FUNC_2(&VAR_1);
}
