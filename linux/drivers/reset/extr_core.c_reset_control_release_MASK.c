
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_control {int acquired; } ;


 int FUNC_0 (struct reset_control*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct reset_control*) ;
 int FUNC_4 (struct reset_control*) ;

void FUNC_5(struct reset_control *VAR_0)
{
 if (!VAR_0 || FUNC_1(FUNC_0(VAR_0)))
  return;

 if (FUNC_3(VAR_0))
  FUNC_2(FUNC_4(VAR_0));
 else
  VAR_0->acquired = 0;
}
