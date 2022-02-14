
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xgbe_prv_data {unsigned int* prio2q_map; TYPE_2__* pfc; TYPE_1__* ets; } ;
struct TYPE_4__ {int pfc_en; } ;
struct TYPE_3__ {unsigned int* prio_tc; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct xgbe_prv_data *VAR_1,
         unsigned int VAR_2)
{
 unsigned int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {

  if (VAR_1->prio2q_map[VAR_3] != VAR_2)
   continue;


  VAR_4 = VAR_1->ets->prio_tc[VAR_3];


  if (VAR_1->pfc->pfc_en & (1 << VAR_4))
   return 1;
 }

 return 0;
}
