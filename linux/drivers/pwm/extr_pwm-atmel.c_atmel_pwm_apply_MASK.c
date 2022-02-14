
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pwm_state {scalar_t__ polarity; scalar_t__ period; scalar_t__ enabled; } ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dev; } ;
struct atmel_pwm_chip {int updated_pwms; int isr_lock; int clk; TYPE_2__* data; } ;
struct TYPE_3__ {int period; } ;
struct TYPE_4__ {TYPE_1__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct pwm_state const*,unsigned long,unsigned long*) ;
 int FUNC_1 (struct pwm_chip*,struct pwm_state const*,unsigned long*,int*) ;
 void* FUNC_2 (struct atmel_pwm_chip*,int,int ) ;
 int FUNC_3 (struct atmel_pwm_chip*,int,int ,int) ;
 int FUNC_4 (struct pwm_chip*,struct pwm_device*,int) ;
 int FUNC_5 (struct atmel_pwm_chip*,int ) ;
 int FUNC_6 (struct pwm_chip*,struct pwm_device*,unsigned long,unsigned long) ;
 int FUNC_7 (struct pwm_chip*,struct pwm_device*,unsigned long) ;
 int FUNC_8 (struct atmel_pwm_chip*,int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct pwm_device*,struct pwm_state*) ;
 struct atmel_pwm_chip* FUNC_14 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_15(struct pwm_chip *VAR_6, struct pwm_device *VAR_7,
      const struct pwm_state *VAR_8)
{
 struct atmel_pwm_chip *VAR_9 = FUNC_14(VAR_6);
 struct pwm_state VAR_10;
 unsigned long VAR_11, VAR_12;
 u32 VAR_13, VAR_14;
 int VAR_15;

 FUNC_13(VAR_7, &VAR_10);

 if (VAR_8->enabled) {
  if (VAR_10.enabled &&
      VAR_10.polarity == VAR_8->polarity &&
      VAR_10.period == VAR_8->period) {
   VAR_11 = FUNC_2(VAR_9, VAR_7->hwpwm,
        VAR_9->data->regs.period);
   FUNC_0(VAR_8, VAR_11, &VAR_12);
   FUNC_7(VAR_6, VAR_7, VAR_12);
   return 0;
  }

  VAR_15 = FUNC_1(VAR_6, VAR_8, &VAR_11,
       &VAR_13);
  if (VAR_15) {
   FUNC_10(VAR_6->dev,
    "failed to calculate cprd and prescaler\n");
   return VAR_15;
  }

  FUNC_0(VAR_8, VAR_11, &VAR_12);

  if (VAR_10.enabled) {
   FUNC_4(VAR_6, VAR_7, 0);
  } else {
   VAR_15 = FUNC_9(VAR_9->clk);
   if (VAR_15) {
    FUNC_10(VAR_6->dev, "failed to enable clock\n");
    return VAR_15;
   }
  }


  VAR_14 = FUNC_2(VAR_9, VAR_7->hwpwm, VAR_0);
  VAR_14 = (VAR_14 & ~VAR_2) | (VAR_13 & VAR_2);
  if (VAR_8->polarity == VAR_5)
   VAR_14 &= ~VAR_1;
  else
   VAR_14 |= VAR_1;
  FUNC_3(VAR_9, VAR_7->hwpwm, VAR_0, VAR_14);
  FUNC_6(VAR_6, VAR_7, VAR_11, VAR_12);
  FUNC_11(&VAR_9->isr_lock);
  VAR_9->updated_pwms |= FUNC_5(VAR_9, VAR_4);
  VAR_9->updated_pwms &= ~(1 << VAR_7->hwpwm);
  FUNC_12(&VAR_9->isr_lock);
  FUNC_8(VAR_9, VAR_3, 1 << VAR_7->hwpwm);
 } else if (VAR_10.enabled) {
  FUNC_4(VAR_6, VAR_7, 1);
 }

 return 0;
}
