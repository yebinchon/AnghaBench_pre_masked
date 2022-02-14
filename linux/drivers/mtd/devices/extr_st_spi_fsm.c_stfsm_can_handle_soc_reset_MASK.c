
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stfsm {scalar_t__ reset_por; TYPE_1__* info; scalar_t__ reset_signal; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct stfsm *VAR_1)
{

 if (VAR_1->reset_signal && VAR_1->info->flags & VAR_0)
  return 1;


 if (VAR_1->reset_por)
  return 1;


 return 0;
}
