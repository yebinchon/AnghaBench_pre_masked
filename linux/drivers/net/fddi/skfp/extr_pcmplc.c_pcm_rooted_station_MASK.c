
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s_smc {TYPE_2__* y; } ;
struct TYPE_4__ {TYPE_1__* mib; } ;
struct TYPE_3__ {scalar_t__ fddiPORTPCMState; scalar_t__ fddiPORTNeighborType; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_0(struct s_smc *VAR_3)
{
 int VAR_4 ;

 for (VAR_4 = 0 ; VAR_4 < VAR_0 ; VAR_4++) {
  if (VAR_3->y[VAR_4].mib->fddiPORTPCMState == VAR_1 &&
      VAR_3->y[VAR_4].mib->fddiPORTNeighborType == VAR_2)
   return 0;
 }
 return 1;
}
