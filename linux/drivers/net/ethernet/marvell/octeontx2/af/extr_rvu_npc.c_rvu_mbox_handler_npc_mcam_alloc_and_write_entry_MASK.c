
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u16 ;
struct rvu {TYPE_1__* hw; } ;
struct npc_mcam_alloc_entry_rsp {size_t entry; int count; } ;
struct TYPE_6__ {int pcifunc; } ;
struct npc_mcam_alloc_entry_req {int contig; int count; int ref_entry; int priority; TYPE_2__ hdr; } ;
struct npc_mcam_alloc_counter_rsp {size_t cntr; } ;
struct TYPE_7__ {int pcifunc; } ;
struct npc_mcam_alloc_counter_req {int contig; int count; TYPE_3__ hdr; } ;
struct npc_mcam_alloc_and_write_entry_rsp {size_t entry; size_t cntr; } ;
struct TYPE_8__ {int pcifunc; } ;
struct npc_mcam_alloc_and_write_entry_req {scalar_t__ alloc_cntr; int enable_entry; int entry_data; int intf; TYPE_4__ hdr; int ref_entry; int priority; } ;
struct npc_mcam {int lock; scalar_t__* entry2pfvf_map; } ;
struct TYPE_5__ {struct npc_mcam mcam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rvu*,struct npc_mcam*,int,size_t,int ,int *,int ) ;
 int FUNC_3 (struct rvu*,struct npc_mcam*,int,size_t,size_t) ;
 int FUNC_4 (struct npc_mcam*,size_t) ;
 int FUNC_5 (struct rvu*,int ,int ) ;
 int FUNC_6 (struct rvu*,struct npc_mcam_alloc_counter_req*,struct npc_mcam_alloc_counter_rsp*) ;
 int FUNC_7 (struct rvu*,struct npc_mcam_alloc_entry_req*,struct npc_mcam_alloc_entry_rsp*) ;

int FUNC_8(struct rvu *VAR_6,
     struct npc_mcam_alloc_and_write_entry_req *VAR_7,
     struct npc_mcam_alloc_and_write_entry_rsp *VAR_8)
{
 struct npc_mcam_alloc_counter_req VAR_9;
 struct npc_mcam_alloc_counter_rsp VAR_10;
 struct npc_mcam_alloc_entry_req VAR_11;
 struct npc_mcam_alloc_entry_rsp VAR_12;
 struct npc_mcam *VAR_13 = &VAR_6->hw->mcam;
 u16 VAR_14 = VAR_4;
 u16 VAR_15 = VAR_4;
 int VAR_16, VAR_17;

 VAR_16 = FUNC_5(VAR_6, VAR_0, 0);
 if (VAR_16 < 0)
  return VAR_5;

 if (VAR_7->intf != VAR_1 && VAR_7->intf != VAR_2)
  return VAR_5;


 VAR_11.hdr.pcifunc = VAR_7->hdr.pcifunc;
 VAR_11.contig = 1;
 VAR_11.priority = VAR_7->priority;
 VAR_11.ref_entry = VAR_7->ref_entry;
 VAR_11.count = 1;

 VAR_17 = FUNC_7(VAR_6,
         &VAR_11, &VAR_12);
 if (VAR_17)
  return VAR_17;

 if (!VAR_12.count)
  return VAR_3;

 VAR_14 = VAR_12.entry;

 if (!VAR_7->alloc_cntr)
  goto write_entry;


 VAR_9.hdr.pcifunc = VAR_7->hdr.pcifunc;
 VAR_9.contig = 1;
 VAR_9.count = 1;

 VAR_17 = FUNC_6(VAR_6, &VAR_9, &VAR_10);
 if (VAR_17) {

  FUNC_0(&VAR_13->lock);
  VAR_13->entry2pfvf_map[VAR_14] = 0;
  FUNC_4(VAR_13, VAR_14);
  FUNC_1(&VAR_13->lock);
  return VAR_17;
 }

 VAR_15 = VAR_10.cntr;

write_entry:
 FUNC_0(&VAR_13->lock);
 FUNC_2(VAR_6, VAR_13, VAR_16, VAR_14, VAR_7->intf,
         &VAR_7->entry_data, VAR_7->enable_entry);

 if (VAR_7->alloc_cntr)
  FUNC_3(VAR_6, VAR_13, VAR_16, VAR_14, VAR_15);
 FUNC_1(&VAR_13->lock);

 VAR_8->entry = VAR_14;
 VAR_8->cntr = VAR_15;

 return 0;
}
