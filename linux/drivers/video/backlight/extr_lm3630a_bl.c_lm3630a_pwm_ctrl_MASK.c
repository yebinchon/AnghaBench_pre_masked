
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm3630a_chip {int pwmd; TYPE_1__* pdata; } ;
struct TYPE_2__ {unsigned int pwm_period; } ;


 int FUNC_0 (int ,unsigned int,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct lm3630a_chip *VAR_0, int VAR_1, int VAR_2)
{
 unsigned int VAR_3 = VAR_0->pdata->pwm_period;
 unsigned int VAR_4 = VAR_1 * VAR_3 / VAR_2;

 FUNC_0(VAR_0->pwmd, VAR_4, VAR_3);
 if (VAR_4)
  FUNC_2(VAR_0->pwmd);
 else
  FUNC_1(VAR_0->pwmd);
}
