
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rvu {TYPE_2__* hw; } ;
struct TYPE_3__ {int pcifunc; } ;
struct npc_mcam_oper_counter_req {int cntr; TYPE_1__ hdr; } ;
struct npc_mcam {int lock; } ;
struct msg_rsp {int dummy; } ;
struct TYPE_4__ {struct npc_mcam mcam; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct npc_mcam*,int ,int ) ;
 int FUNC_4 (struct rvu*,int ,int ) ;
 int FUNC_5 (struct rvu*,int,int ,int) ;

int FUNC_6(struct rvu *VAR_2,
  struct npc_mcam_oper_counter_req *VAR_3, struct msg_rsp *VAR_4)
{
 struct npc_mcam *VAR_5 = &VAR_2->hw->mcam;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_4(VAR_2, VAR_0, 0);
 if (VAR_6 < 0)
  return VAR_1;

 FUNC_1(&VAR_5->lock);
 VAR_7 = FUNC_3(VAR_5, VAR_3->hdr.pcifunc, VAR_3->cntr);
 FUNC_2(&VAR_5->lock);
 if (VAR_7)
  return VAR_7;

 FUNC_5(VAR_2, VAR_6, FUNC_0(VAR_3->cntr), 0x00);

 return 0;
}
