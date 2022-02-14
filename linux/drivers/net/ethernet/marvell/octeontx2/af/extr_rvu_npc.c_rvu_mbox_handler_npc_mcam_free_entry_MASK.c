
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct rvu {TYPE_1__* hw; } ;
struct TYPE_4__ {scalar_t__ pcifunc; } ;
struct npc_mcam_free_entry_req {size_t entry; scalar_t__ all; TYPE_2__ hdr; } ;
struct npc_mcam {scalar_t__* entry2cntr_map; int lock; scalar_t__* entry2pfvf_map; } ;
struct msg_rsp {int dummy; } ;
struct TYPE_3__ {struct npc_mcam mcam; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rvu*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rvu*,struct npc_mcam*,int,size_t,int) ;
 int FUNC_4 (struct npc_mcam*,size_t) ;
 int FUNC_5 (struct rvu*,struct npc_mcam*,int,scalar_t__) ;
 int FUNC_6 (struct npc_mcam*,scalar_t__,size_t) ;
 int FUNC_7 (struct rvu*,struct npc_mcam*,int,size_t,scalar_t__) ;
 int FUNC_8 (struct rvu*,int ,int ) ;

int FUNC_9(struct rvu *VAR_3,
      struct npc_mcam_free_entry_req *VAR_4,
      struct msg_rsp *VAR_5)
{
 struct npc_mcam *VAR_6 = &VAR_3->hw->mcam;
 u16 VAR_7 = VAR_4->hdr.pcifunc;
 int VAR_8, VAR_9 = 0;
 u16 VAR_10;

 VAR_8 = FUNC_8(VAR_3, VAR_0, 0);
 if (VAR_8 < 0)
  return VAR_2;


 if (!FUNC_0(VAR_3, VAR_7))
  return VAR_2;

 FUNC_1(&VAR_6->lock);

 if (VAR_4->all)
  goto free_all;

 VAR_9 = FUNC_6(VAR_6, VAR_7, VAR_4->entry);
 if (VAR_9)
  goto exit;

 VAR_6->entry2pfvf_map[VAR_4->entry] = 0;
 FUNC_4(VAR_6, VAR_4->entry);
 FUNC_3(VAR_3, VAR_6, VAR_8, VAR_4->entry, 0);


 VAR_10 = VAR_6->entry2cntr_map[VAR_4->entry];
 if (VAR_10 != VAR_1)
  FUNC_7(VAR_3, VAR_6, VAR_8,
           VAR_4->entry, VAR_10);

 goto exit;

free_all:

 FUNC_5(VAR_3, VAR_6, VAR_8, VAR_7);
exit:
 FUNC_2(&VAR_6->lock);
 return VAR_9;
}
