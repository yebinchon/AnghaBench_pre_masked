
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct rvu {TYPE_1__* hw; } ;
struct npc_mcam_alloc_entry_rsp {scalar_t__ free_count; int entry; } ;
struct TYPE_4__ {int pcifunc; } ;
struct npc_mcam_alloc_entry_req {scalar_t__ priority; int ref_entry; scalar_t__ count; int contig; TYPE_2__ hdr; } ;
struct npc_mcam {int bmap_entries; } ;
struct TYPE_3__ {struct npc_mcam mcam; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct rvu*,int ) ;
 int FUNC_1 (struct npc_mcam*,int ,struct npc_mcam_alloc_entry_req*,struct npc_mcam_alloc_entry_rsp*) ;
 int FUNC_2 (struct rvu*,int ,int ) ;

int FUNC_3(struct rvu *VAR_7,
       struct npc_mcam_alloc_entry_req *VAR_8,
       struct npc_mcam_alloc_entry_rsp *VAR_9)
{
 struct npc_mcam *VAR_10 = &VAR_7->hw->mcam;
 u16 VAR_11 = VAR_8->hdr.pcifunc;
 int VAR_12;

 VAR_12 = FUNC_2(VAR_7, VAR_0, 0);
 if (VAR_12 < 0)
  return VAR_5;

 VAR_9->entry = VAR_3;
 VAR_9->free_count = 0;


 if (VAR_8->priority && VAR_8->ref_entry >= VAR_10->bmap_entries)
  return VAR_5;




 if ((!VAR_8->ref_entry && VAR_8->priority == VAR_4) ||
     ((VAR_8->ref_entry == (VAR_10->bmap_entries - 1)) &&
      VAR_8->priority == VAR_6))
  return VAR_5;




 if (!VAR_8->contig && VAR_8->count > VAR_1)
  return VAR_5;


 if (!FUNC_0(VAR_7, VAR_11))
  return VAR_2;

 return FUNC_1(VAR_10, VAR_11, VAR_8, VAR_9);
}
