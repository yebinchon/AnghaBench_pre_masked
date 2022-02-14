
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rts51x_chip {int status; scalar_t__ timer_expires; int rts51x_suspend_timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
 struct rts51x_chip *VAR_2 = VAR_1;

 if (!VAR_2)
  return;







 FUNC_1(VAR_2->status);
}
