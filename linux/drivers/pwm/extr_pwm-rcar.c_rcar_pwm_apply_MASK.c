
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_pwm_chip {int dummy; } ;
struct pwm_state {scalar_t__ polarity; int period; int duty_cycle; int enabled; } ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pwm_device*,struct pwm_state*) ;
 int FUNC_1 (struct rcar_pwm_chip*) ;
 int FUNC_2 (struct rcar_pwm_chip*) ;
 int FUNC_3 (struct rcar_pwm_chip*,int ) ;
 int FUNC_4 (struct rcar_pwm_chip*,int) ;
 int FUNC_5 (struct rcar_pwm_chip*,int,int ,int ) ;
 int FUNC_6 (struct rcar_pwm_chip*,int ,int ,int ) ;
 struct rcar_pwm_chip* FUNC_7 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_8(struct pwm_chip *VAR_4, struct pwm_device *VAR_5,
     const struct pwm_state *VAR_6)
{
 struct rcar_pwm_chip *VAR_7 = FUNC_7(VAR_4);
 struct pwm_state VAR_8;
 int VAR_9, VAR_10;


 FUNC_0(VAR_5, &VAR_8);
 if (VAR_6->polarity != VAR_1)
  return -VAR_0;

 if (!VAR_6->enabled) {
  FUNC_1(VAR_7);
  return 0;
 }

 VAR_9 = FUNC_3(VAR_7, VAR_6->period);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_6(VAR_7, VAR_3, VAR_3, VAR_2);

 VAR_10 = FUNC_5(VAR_7, VAR_9, VAR_6->duty_cycle, VAR_6->period);
 if (!VAR_10)
  FUNC_4(VAR_7, VAR_9);


 FUNC_6(VAR_7, VAR_3, 0, VAR_2);

 if (!VAR_10)
  VAR_10 = FUNC_2(VAR_7);

 return VAR_10;
}
