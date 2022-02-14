
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcar_gen3_chan {TYPE_1__* rphys; } ;
struct TYPE_2__ {scalar_t__ otg_initialized; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct rcar_gen3_chan *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->rphys[VAR_2].otg_initialized)
   return 0;
 }

 return 1;
}
