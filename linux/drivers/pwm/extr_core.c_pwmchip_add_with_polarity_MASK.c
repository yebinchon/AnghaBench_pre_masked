
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int polarity; } ;
struct pwm_device {unsigned int pwm; unsigned int hwpwm; TYPE_1__ state; struct pwm_chip* chip; } ;
struct pwm_chip {unsigned int npwm; int base; int list; TYPE_2__* ops; struct pwm_device* pwms; int dev; } ;
typedef enum pwm_polarity { ____Placeholder_pwm_polarity } pwm_polarity ;
struct TYPE_4__ {int (* get_state ) (struct pwm_chip*,struct pwm_device*,TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,unsigned int) ;
 int VAR_4 ;
 int FUNC_3 (int ,unsigned int,unsigned int) ;
 struct pwm_device* FUNC_4 (unsigned int,int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct pwm_chip*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_7 ;
 int FUNC_10 (struct pwm_chip*) ;
 int FUNC_11 (int *,unsigned int,struct pwm_device*) ;
 int FUNC_12 (struct pwm_chip*,struct pwm_device*,TYPE_1__*) ;

int FUNC_13(struct pwm_chip *VAR_8,
         enum pwm_polarity VAR_9)
{
 struct pwm_device *VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 if (!VAR_8 || !VAR_8->dev || !VAR_8->ops || !VAR_8->npwm)
  return -VAR_1;

 if (!FUNC_9(VAR_8->ops))
  return -VAR_1;

 FUNC_6(&VAR_6);

 VAR_12 = FUNC_2(VAR_8->base, VAR_8->npwm);
 if (VAR_12 < 0)
  goto out;

 VAR_8->pwms = FUNC_4(VAR_8->npwm, sizeof(*VAR_10), VAR_3);
 if (!VAR_8->pwms) {
  VAR_12 = -VAR_2;
  goto out;
 }

 VAR_8->base = VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_8->npwm; VAR_11++) {
  VAR_10 = &VAR_8->pwms[VAR_11];

  VAR_10->chip = VAR_8;
  VAR_10->pwm = VAR_8->base + VAR_11;
  VAR_10->hwpwm = VAR_11;
  VAR_10->state.polarity = VAR_9;

  if (VAR_8->ops->get_state)
   VAR_8->ops->get_state(VAR_8, VAR_10, &VAR_10->state);

  FUNC_11(&VAR_7, VAR_10->pwm, VAR_10);
 }

 FUNC_3(VAR_4, VAR_8->base, VAR_8->npwm);

 FUNC_0(&VAR_8->list);
 FUNC_5(&VAR_8->list, &VAR_5);

 VAR_12 = 0;

 if (FUNC_1(VAR_0))
  FUNC_8(VAR_8);

out:
 FUNC_7(&VAR_6);

 if (!VAR_12)
  FUNC_10(VAR_8);

 return VAR_12;
}
