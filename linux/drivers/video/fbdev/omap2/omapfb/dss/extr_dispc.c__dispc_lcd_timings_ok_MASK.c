
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* feat; } ;
struct TYPE_3__ {int sw_max; int hp_max; int vp_max; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(int VAR_1, int VAR_2, int VAR_3,
  int VAR_4, int VAR_5, int VAR_6)
{
 if (VAR_1 < 1 || VAR_1 > VAR_0.feat->sw_max ||
   VAR_2 < 1 || VAR_2 > VAR_0.feat->hp_max ||
   VAR_3 < 1 || VAR_3 > VAR_0.feat->hp_max ||
   VAR_4 < 1 || VAR_4 > VAR_0.feat->sw_max ||
   VAR_5 < 0 || VAR_5 > VAR_0.feat->vp_max ||
   VAR_6 < 0 || VAR_6 > VAR_0.feat->vp_max)
  return 0;
 return 1;
}
