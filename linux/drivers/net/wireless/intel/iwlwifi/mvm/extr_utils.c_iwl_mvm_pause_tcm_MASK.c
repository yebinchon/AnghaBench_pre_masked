
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int paused; int work; int lock; } ;
struct iwl_mvm {TYPE_1__ tcm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct iwl_mvm *VAR_0, bool VAR_1)
{
 FUNC_1(&VAR_0->tcm.lock);
 VAR_0->tcm.paused = 1;
 FUNC_2(&VAR_0->tcm.lock);
 if (VAR_1)
  FUNC_0(&VAR_0->tcm.work);
}
