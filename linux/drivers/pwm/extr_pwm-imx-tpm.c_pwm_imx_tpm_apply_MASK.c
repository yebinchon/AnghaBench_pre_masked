
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_state {int dummy; } ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;
struct imx_tpm_pwm_param {int dummy; } ;
struct imx_tpm_pwm_chip {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pwm_chip*,struct imx_tpm_pwm_param*,struct pwm_state*,struct pwm_device*) ;
 int FUNC_3 (struct pwm_chip*,struct imx_tpm_pwm_param*,struct pwm_state*,struct pwm_state const*) ;
 struct imx_tpm_pwm_chip* FUNC_4 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_5(struct pwm_chip *VAR_0,
        struct pwm_device *VAR_1,
        const struct pwm_state *VAR_2)
{
 struct imx_tpm_pwm_chip *VAR_3 = FUNC_4(VAR_0);
 struct imx_tpm_pwm_param VAR_4;
 struct pwm_state VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_0, &VAR_4, &VAR_5, VAR_2);
 if (VAR_6)
  return VAR_6;

 FUNC_0(&VAR_3->lock);
 VAR_6 = FUNC_2(VAR_0, &VAR_4, &VAR_5, VAR_1);
 FUNC_1(&VAR_3->lock);

 return VAR_6;
}
