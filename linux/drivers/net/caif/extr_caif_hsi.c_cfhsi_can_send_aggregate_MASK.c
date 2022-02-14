
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ aggregation_timeout; } ;
struct cfhsi {TYPE_2__* qhead; TYPE_1__ cfg; } ;
struct TYPE_4__ {scalar_t__ qlen; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct cfhsi *VAR_2)
{
 int VAR_3;

 if (VAR_2->cfg.aggregation_timeout == 0)
  return 1;

 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  if (VAR_2->qhead[VAR_3].qlen)
   return 1;
 }


 if (VAR_2->qhead[VAR_1].qlen >= VAR_0)
  return 1;

 return 0;
}
