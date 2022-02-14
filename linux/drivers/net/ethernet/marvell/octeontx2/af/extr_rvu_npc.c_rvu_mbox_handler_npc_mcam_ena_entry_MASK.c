
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct rvu {TYPE_1__* hw; } ;
struct TYPE_4__ {int pcifunc; } ;
struct npc_mcam_ena_dis_entry_req {int entry; TYPE_2__ hdr; } ;
struct npc_mcam {int lock; } ;
struct msg_rsp {int dummy; } ;
struct TYPE_3__ {struct npc_mcam mcam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rvu*,struct npc_mcam*,int,int ,int) ;
 int FUNC_3 (struct npc_mcam*,int ,int ) ;
 int FUNC_4 (struct rvu*,int ,int ) ;

int FUNC_5(struct rvu *VAR_2,
     struct npc_mcam_ena_dis_entry_req *VAR_3,
     struct msg_rsp *VAR_4)
{
 struct npc_mcam *VAR_5 = &VAR_2->hw->mcam;
 u16 VAR_6 = VAR_3->hdr.pcifunc;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_4(VAR_2, VAR_0, 0);
 if (VAR_7 < 0)
  return VAR_1;

 FUNC_0(&VAR_5->lock);
 VAR_8 = FUNC_3(VAR_5, VAR_6, VAR_3->entry);
 FUNC_1(&VAR_5->lock);
 if (VAR_8)
  return VAR_8;

 FUNC_2(VAR_2, VAR_5, VAR_7, VAR_3->entry, 1);

 return 0;
}
