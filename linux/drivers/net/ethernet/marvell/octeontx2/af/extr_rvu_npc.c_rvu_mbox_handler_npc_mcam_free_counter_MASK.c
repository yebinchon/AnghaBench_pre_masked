
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct rvu {TYPE_1__* hw; } ;
struct TYPE_4__ {int pcifunc; } ;
struct npc_mcam_oper_counter_req {size_t cntr; TYPE_2__ hdr; } ;
struct npc_mcam {size_t bmap_entries; size_t* entry2cntr_map; int lock; int bmap; int * cntr_refcnt; int counters; int * cntr2pfvf_map; } ;
struct msg_rsp {int dummy; } ;
struct TYPE_3__ {struct npc_mcam mcam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ,size_t,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct npc_mcam*,int ,size_t) ;
 int FUNC_4 (struct rvu*,struct npc_mcam*,int,size_t,size_t) ;
 int FUNC_5 (int *,size_t) ;
 int FUNC_6 (struct rvu*,int ,int ) ;

int FUNC_7(struct rvu *VAR_3,
  struct npc_mcam_oper_counter_req *VAR_4, struct msg_rsp *VAR_5)
{
 struct npc_mcam *VAR_6 = &VAR_3->hw->mcam;
 u16 VAR_7, VAR_8 = 0;
 int VAR_9, VAR_10;

 VAR_9 = FUNC_6(VAR_3, VAR_0, 0);
 if (VAR_9 < 0)
  return VAR_2;

 FUNC_1(&VAR_6->lock);
 VAR_10 = FUNC_3(VAR_6, VAR_4->hdr.pcifunc, VAR_4->cntr);
 if (VAR_10) {
  FUNC_2(&VAR_6->lock);
  return VAR_10;
 }


 VAR_6->cntr2pfvf_map[VAR_4->cntr] = VAR_1;
 FUNC_5(&VAR_6->counters, VAR_4->cntr);


 while (VAR_8 < VAR_6->bmap_entries) {
  if (!VAR_6->cntr_refcnt[VAR_4->cntr])
   break;

  VAR_7 = FUNC_0(VAR_6->bmap, VAR_6->bmap_entries, VAR_8);
  if (VAR_7 >= VAR_6->bmap_entries)
   break;
  if (VAR_6->entry2cntr_map[VAR_7] != VAR_4->cntr)
   continue;

  VAR_8 = VAR_7 + 1;
  FUNC_4(VAR_3, VAR_6, VAR_9,
           VAR_7, VAR_4->cntr);
 }

 FUNC_2(&VAR_6->lock);
 return 0;
}
