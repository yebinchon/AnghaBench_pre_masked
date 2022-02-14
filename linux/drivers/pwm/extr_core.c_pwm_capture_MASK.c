
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pwm_device {TYPE_2__* chip; } ;
struct pwm_capture {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* capture ) (TYPE_2__*,struct pwm_device*,struct pwm_capture*,unsigned long) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,struct pwm_device*,struct pwm_capture*,unsigned long) ;

int FUNC_3(struct pwm_device *VAR_3, struct pwm_capture *VAR_4,
  unsigned long VAR_5)
{
 int VAR_6;

 if (!VAR_3 || !VAR_3->chip->ops)
  return -VAR_0;

 if (!VAR_3->chip->ops->capture)
  return -VAR_1;

 FUNC_0(&VAR_2);
 VAR_6 = VAR_3->chip->ops->capture(VAR_3->chip, VAR_3, VAR_4, VAR_5);
 FUNC_1(&VAR_2);

 return VAR_6;
}
