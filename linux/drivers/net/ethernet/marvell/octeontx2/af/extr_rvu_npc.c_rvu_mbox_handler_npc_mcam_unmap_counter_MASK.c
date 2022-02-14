
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct rvu {TYPE_1__* hw; } ;
struct TYPE_4__ {int pcifunc; } ;
struct npc_mcam_unmap_counter_req {size_t cntr; size_t entry; TYPE_2__ hdr; int all; } ;
struct npc_mcam {size_t bmap_entries; size_t* entry2cntr_map; int lock; int bmap; int * cntr_refcnt; } ;
struct msg_rsp {int dummy; } ;
struct TYPE_3__ {struct npc_mcam mcam; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ,size_t,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct npc_mcam*,int ,size_t) ;
 int FUNC_4 (struct npc_mcam*,int ,size_t) ;
 int FUNC_5 (struct rvu*,struct npc_mcam*,int,size_t,size_t) ;
 int FUNC_6 (struct rvu*,int ,int ) ;

int FUNC_7(struct rvu *VAR_2,
  struct npc_mcam_unmap_counter_req *VAR_3, struct msg_rsp *VAR_4)
{
 struct npc_mcam *VAR_5 = &VAR_2->hw->mcam;
 u16 VAR_6, VAR_7 = 0;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_6(VAR_2, VAR_0, 0);
 if (VAR_8 < 0)
  return VAR_1;

 FUNC_1(&VAR_5->lock);
 VAR_9 = FUNC_3(VAR_5, VAR_3->hdr.pcifunc, VAR_3->cntr);
 if (VAR_9)
  goto exit;


 if (!VAR_3->all) {
  VAR_9 = FUNC_4(VAR_5, VAR_3->hdr.pcifunc, VAR_3->entry);
  if (VAR_9)
   goto exit;
  FUNC_5(VAR_2, VAR_5, VAR_8,
           VAR_3->entry, VAR_3->cntr);
  goto exit;
 }


 while (VAR_7 < VAR_5->bmap_entries) {
  if (!VAR_5->cntr_refcnt[VAR_3->cntr])
   break;

  VAR_6 = FUNC_0(VAR_5->bmap, VAR_5->bmap_entries, VAR_7);
  if (VAR_6 >= VAR_5->bmap_entries)
   break;
  if (VAR_5->entry2cntr_map[VAR_6] != VAR_3->cntr)
   continue;

  VAR_7 = VAR_6 + 1;
  FUNC_5(VAR_2, VAR_5, VAR_8,
           VAR_6, VAR_3->cntr);
 }
exit:
 FUNC_2(&VAR_5->lock);
 return VAR_9;
}
