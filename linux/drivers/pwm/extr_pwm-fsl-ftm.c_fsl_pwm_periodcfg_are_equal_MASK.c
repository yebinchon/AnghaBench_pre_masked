
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_pwm_periodcfg {scalar_t__ clk_select; scalar_t__ clk_ps; scalar_t__ mod_period; } ;



__attribute__((used)) static bool FUNC_0(const struct fsl_pwm_periodcfg *VAR_0,
     const struct fsl_pwm_periodcfg *VAR_1)
{
 if (VAR_0->clk_select != VAR_1->clk_select)
  return 0;
 if (VAR_0->clk_ps != VAR_1->clk_ps)
  return 0;
 if (VAR_0->mod_period != VAR_1->mod_period)
  return 0;
 return 1;
}
