
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t clk_select; unsigned long clk_ps; } ;
struct fsl_pwm_chip {TYPE_1__ period; int * clk; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long long,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_2(struct fsl_pwm_chip *VAR_0,
       unsigned int VAR_1)
{
 unsigned long VAR_2;
 unsigned long long VAR_3;

 VAR_2 = FUNC_0(VAR_0->clk[VAR_0->period.clk_select]);
 VAR_3 = VAR_1;
 VAR_3 *= 1000000000UL;
 FUNC_1(VAR_3, VAR_2 >> VAR_0->period.clk_ps);
 return VAR_3;
}
