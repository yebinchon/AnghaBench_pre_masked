
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_pwm_periodcfg {int clk_select; unsigned int clk_ps; unsigned long long mod_period; } ;
struct fsl_pwm_chip {int * clk; } ;
typedef enum fsl_pwm_clk { ____Placeholder_fsl_pwm_clk } fsl_pwm_clk ;


 unsigned long long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long long,unsigned long) ;

__attribute__((used)) static bool FUNC_2(struct fsl_pwm_chip *VAR_0,
      unsigned int VAR_1,
      enum fsl_pwm_clk VAR_2,
      struct fsl_pwm_periodcfg *VAR_3
      )
{
 unsigned long long VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_0(VAR_0->clk[VAR_2]);
 VAR_4 = VAR_4 * VAR_1;
 FUNC_1(VAR_4, 1000000000UL);

 if (VAR_4 == 0)
  return 0;

 for (VAR_5 = 0; VAR_5 < 8 ; ++VAR_5, VAR_4 >>= 1) {
  if (VAR_4 <= 0x10000) {
   VAR_3->clk_select = VAR_2;
   VAR_3->clk_ps = VAR_5;
   VAR_3->mod_period = VAR_4 - 1;
   return 1;
  }
 }
 return 0;
}
