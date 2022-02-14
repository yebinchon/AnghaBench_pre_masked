
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u16 ;
struct rvu_pfvf {int rxvlan; int rxvlan_index; } ;
struct rvu {TYPE_3__* hw; } ;
struct TYPE_8__ {void* pcifunc; } ;
struct npc_mcam_free_entry_req {int entry; TYPE_4__ hdr; } ;
struct npc_mcam_alloc_entry_rsp {int * entry_list; } ;
struct TYPE_6__ {void* pcifunc; } ;
struct npc_mcam_alloc_entry_req {int count; TYPE_2__ hdr; } ;
struct msg_rsp {int dummy; } ;
struct TYPE_5__ {void* pcifunc; } ;
struct msg_req {TYPE_1__ hdr; } ;
struct TYPE_7__ {int * block; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (struct rvu*,int ,void*) ;
 int FUNC_2 (struct rvu*,int *,void*,int ) ;
 struct rvu_pfvf* FUNC_3 (struct rvu*,void*) ;
 int FUNC_4 (struct rvu*,struct npc_mcam_alloc_entry_req*,struct npc_mcam_alloc_entry_rsp*) ;
 int FUNC_5 (struct rvu*,struct npc_mcam_free_entry_req*,struct msg_rsp*) ;
 int FUNC_6 (struct rvu*,void*,int) ;

int FUNC_7(struct rvu *VAR_2, struct msg_req *VAR_3,
          struct msg_rsp *VAR_4)
{
 struct npc_mcam_alloc_entry_req VAR_5 = { };
 struct npc_mcam_alloc_entry_rsp VAR_6 = { };
 struct npc_mcam_free_entry_req VAR_7 = { };
 u16 VAR_8 = VAR_3->hdr.pcifunc;
 int VAR_9, VAR_10, VAR_11;
 struct rvu_pfvf *VAR_12;




 if (FUNC_0(VAR_8))
  return 0;

 VAR_12 = FUNC_3(VAR_2, VAR_8);
 if (VAR_12->rxvlan)
  return 0;


 VAR_5.hdr.pcifunc = VAR_8;
 VAR_5.count = 1;

 VAR_11 = FUNC_4(VAR_2, &VAR_5,
          &VAR_6);
 if (VAR_11)
  return VAR_11;


 VAR_9 = FUNC_1(VAR_2, VAR_0, VAR_8);
 if (VAR_9 < 0) {
  VAR_11 = VAR_1;
  goto free_entry;
 }

 VAR_10 = FUNC_2(VAR_2, &VAR_2->hw->block[VAR_9], VAR_8, 0);
 if (VAR_10 < 0) {
  VAR_11 = VAR_1;
  goto free_entry;
 }

 VAR_12->rxvlan_index = VAR_6.entry_list[0];

 VAR_12->rxvlan = 1;

 VAR_11 = FUNC_6(VAR_2, VAR_8, VAR_10);
 if (VAR_11)
  goto free_entry;

 return 0;
free_entry:
 VAR_7.hdr.pcifunc = VAR_8;
 VAR_7.entry = VAR_6.entry_list[0];
 FUNC_5(VAR_2, &VAR_7, VAR_4);
 VAR_12->rxvlan = 0;
 return VAR_11;
}
