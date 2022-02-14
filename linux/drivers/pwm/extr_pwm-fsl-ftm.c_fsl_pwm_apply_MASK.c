
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwm_state {scalar_t__ enabled; } ;
struct pwm_device {int hwpwm; struct pwm_state state; } ;
struct pwm_chip {int dummy; } ;
struct TYPE_2__ {size_t clk_select; } ;
struct fsl_pwm_chip {int lock; int regmap; TYPE_1__ period; int * clk; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct fsl_pwm_chip*,struct pwm_device*,struct pwm_state const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 struct fsl_pwm_chip* FUNC_7 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_8(struct pwm_chip *VAR_2, struct pwm_device *VAR_3,
    const struct pwm_state *VAR_4)
{
 struct fsl_pwm_chip *VAR_5 = FUNC_7(VAR_2);
 struct pwm_state *VAR_6 = &VAR_3->state;
 int VAR_7 = 0;
 FUNC_4(&VAR_5->lock);

 if (!VAR_4->enabled) {
  if (VAR_6->enabled) {
   FUNC_6(VAR_5->regmap, VAR_1,
        FUNC_0(VAR_3->hwpwm), FUNC_0(VAR_3->hwpwm));
   FUNC_1(VAR_5->clk[VAR_0]);
   FUNC_1(VAR_5->clk[VAR_5->period.clk_select]);
  }

  goto end_mutex;
 }

 VAR_7 = FUNC_3(VAR_5, VAR_3, VAR_4);
 if (VAR_7)
  goto end_mutex;


 if (!VAR_6->enabled) {
  VAR_7 = FUNC_2(VAR_5->clk[VAR_5->period.clk_select]);
  if (VAR_7)
   goto end_mutex;

  VAR_7 = FUNC_2(VAR_5->clk[VAR_0]);
  if (VAR_7) {
   FUNC_1(VAR_5->clk[VAR_5->period.clk_select]);
   goto end_mutex;
  }

  FUNC_6(VAR_5->regmap, VAR_1, FUNC_0(VAR_3->hwpwm),
       0);
 }

end_mutex:
 FUNC_5(&VAR_5->lock);
 return VAR_7;
}
