
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct rvu {TYPE_1__* hw; } ;
struct TYPE_4__ {int max; } ;
struct npc_pkind {int* pfchan_map; TYPE_2__ rsrc; } ;
struct TYPE_3__ {struct npc_pkind pkind; } ;



int FUNC_0(struct rvu *VAR_0, u16 VAR_1)
{
 struct npc_pkind *VAR_2 = &VAR_0->hw->pkind;
 u32 VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->rsrc.max; VAR_4++) {
  VAR_3 = VAR_2->pfchan_map[VAR_4];
  if (((VAR_3 >> 16) & 0x3F) == VAR_1)
   return VAR_4;
 }
 return -1;
}
