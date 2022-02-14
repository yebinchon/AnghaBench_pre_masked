
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at86rf230_state_change {struct at86rf230_local* lp; } ;
struct at86rf230_local {int state_complete; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 struct at86rf230_state_change *VAR_1 = VAR_0;
 struct at86rf230_local *VAR_2 = VAR_1->lp;

 FUNC_0(&VAR_2->state_complete);
}
