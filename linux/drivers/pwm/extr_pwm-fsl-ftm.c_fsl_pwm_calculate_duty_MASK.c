
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mod_period; } ;
struct fsl_pwm_chip {TYPE_1__ period; } ;


 int FUNC_0 (unsigned long long,unsigned int) ;
 unsigned int FUNC_1 (struct fsl_pwm_chip*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(struct fsl_pwm_chip *VAR_0,
        unsigned int VAR_1)
{
 unsigned long long VAR_2;

 unsigned int VAR_3 = VAR_0->period.mod_period + 1;
 unsigned int VAR_4 = FUNC_1(VAR_0, VAR_3);

 VAR_2 = (unsigned long long)VAR_1 * VAR_3;
 FUNC_0(VAR_2, VAR_4);

 return (unsigned int)VAR_2;
}
