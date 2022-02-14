
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct rvu {int dummy; } ;
struct TYPE_2__ {size_t max; } ;
struct npc_mcam {size_t* cntr2pfvf_map; TYPE_1__ counters; scalar_t__* cntr_refcnt; } ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*,size_t) ;

__attribute__((used)) static void FUNC_1(struct rvu *VAR_1, struct npc_mcam *VAR_2,
           u16 VAR_3)
{
 u16 VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_2->counters.max; VAR_4++) {
  if (VAR_2->cntr2pfvf_map[VAR_4] == VAR_3) {
   VAR_2->cntr2pfvf_map[VAR_4] = VAR_0;
   VAR_2->cntr_refcnt[VAR_4] = 0;
   FUNC_0(&VAR_2->counters, VAR_4);





  }
 }
}
