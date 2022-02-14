
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
typedef int u32 ;
struct pwm_state {scalar_t__ polarity; int enabled; unsigned int duty_cycle; scalar_t__ period; } ;
struct TYPE_2__ {int dev; } ;
struct pwm_sifive_ddata {scalar_t__ approx_period; int user_count; int lock; int clk; scalar_t__ regs; TYPE_1__ chip; } ;
struct pwm_device {int hwpwm; struct pwm_state state; } ;
struct pwm_chip {int dummy; } ;


 int FUNC_0 (unsigned long long,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct pwm_sifive_ddata* FUNC_8 (struct pwm_chip*) ;
 int FUNC_9 (struct pwm_chip*,int) ;
 int FUNC_10 (struct pwm_sifive_ddata*,int ) ;
 int FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct pwm_chip *VAR_6, struct pwm_device *VAR_7,
       const struct pwm_state *VAR_8)
{
 struct pwm_sifive_ddata *VAR_9 = FUNC_8(VAR_6);
 struct pwm_state VAR_10;
 unsigned int VAR_11;
 unsigned long long VAR_12;
 bool VAR_13;
 int VAR_14 = 0;
 u32 VAR_15;

 if (VAR_8->polarity != VAR_2)
  return -VAR_1;

 VAR_14 = FUNC_2(VAR_9->clk);
 if (VAR_14) {
  FUNC_4(VAR_9->chip.dev, "Enable clk failed\n");
  return VAR_14;
 }

 FUNC_6(&VAR_9->lock);
 VAR_10 = VAR_7->state;
 VAR_13 = VAR_10.enabled;

 VAR_11 = VAR_8->duty_cycle;
 if (!VAR_8->enabled)
  VAR_11 = 0;







 VAR_12 = (u64)VAR_11 * (1U << VAR_3);
 VAR_15 = FUNC_0(VAR_12, VAR_8->period);

 VAR_15 = FUNC_5(VAR_15, (1U << VAR_3) - 1);

 if (VAR_8->period != VAR_9->approx_period) {
  if (VAR_9->user_count != 1) {
   VAR_14 = -VAR_0;
   goto exit;
  }
  VAR_9->approx_period = VAR_8->period;
  FUNC_10(VAR_9, FUNC_3(VAR_9->clk));
 }

 FUNC_11(VAR_15, VAR_9->regs + VAR_4 +
        VAR_7->hwpwm * VAR_5);

 if (VAR_8->enabled != VAR_13)
  FUNC_9(VAR_6, VAR_8->enabled);

exit:
 FUNC_1(VAR_9->clk);
 FUNC_7(&VAR_9->lock);
 return VAR_14;
}
