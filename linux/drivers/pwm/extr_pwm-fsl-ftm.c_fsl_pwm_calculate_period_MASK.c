
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_pwm_periodcfg {int dummy; } ;
struct fsl_pwm_chip {int * clk; } ;
typedef enum fsl_pwm_clk { ____Placeholder_fsl_pwm_clk } fsl_pwm_clk ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct fsl_pwm_chip*,unsigned int,int,struct fsl_pwm_periodcfg*) ;

__attribute__((used)) static bool FUNC_2(struct fsl_pwm_chip *VAR_3,
         unsigned int VAR_4,
         struct fsl_pwm_periodcfg *VAR_5)
{
 enum fsl_pwm_clk VAR_6, VAR_7;
 unsigned long VAR_8, VAR_9;
 bool VAR_10;

 VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_2,
        VAR_5);
 if (VAR_10)
  return 1;

 VAR_8 = FUNC_0(VAR_3->clk[VAR_1]);
 VAR_9 = FUNC_0(VAR_3->clk[VAR_0]);

 if (VAR_8 > VAR_9) {
  VAR_6 = VAR_1;
  VAR_7 = VAR_0;
 } else {
  VAR_6 = VAR_0;
  VAR_7 = VAR_1;
 }

 VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_6, VAR_5);
 if (VAR_10)
  return 1;

 return FUNC_1(VAR_3, VAR_4, VAR_7, VAR_5);
}
