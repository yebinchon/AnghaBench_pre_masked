
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rvu {TYPE_1__* hw; } ;
struct TYPE_5__ {int bmap; } ;
struct npc_pkind {TYPE_2__ rsrc; } ;
struct TYPE_6__ {int bmap; } ;
struct npc_mcam {int lock; TYPE_3__ counters; } ;
struct TYPE_4__ {struct npc_mcam mcam; struct npc_pkind pkind; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct rvu *VAR_0)
{
 struct npc_pkind *VAR_1 = &VAR_0->hw->pkind;
 struct npc_mcam *VAR_2 = &VAR_0->hw->mcam;

 FUNC_0(VAR_1->rsrc.bmap);
 FUNC_0(VAR_2->counters.bmap);
 FUNC_1(&VAR_2->lock);
}
