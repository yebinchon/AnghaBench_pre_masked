
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct rvu {TYPE_1__* hw; } ;
struct TYPE_4__ {int pcifunc; } ;
struct npc_mcam_write_entry_req {int cntr; int entry; scalar_t__ set_cntr; int enable_entry; int entry_data; int intf; TYPE_2__ hdr; } ;
struct npc_mcam {int lock; } ;
struct msg_rsp {int dummy; } ;
struct TYPE_3__ {struct npc_mcam mcam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rvu*,struct npc_mcam*,int,int ,int ,int *,int ) ;
 int FUNC_3 (struct rvu*,struct npc_mcam*,int,int ,int ) ;
 scalar_t__ FUNC_4 (struct npc_mcam*,int ,int ) ;
 int FUNC_5 (struct npc_mcam*,int ,int ) ;
 int FUNC_6 (struct rvu*,int ,int ) ;

int FUNC_7(struct rvu *VAR_4,
       struct npc_mcam_write_entry_req *VAR_5,
       struct msg_rsp *VAR_6)
{
 struct npc_mcam *VAR_7 = &VAR_4->hw->mcam;
 u16 VAR_8 = VAR_5->hdr.pcifunc;
 int VAR_9, VAR_10;

 VAR_9 = FUNC_6(VAR_4, VAR_0, 0);
 if (VAR_9 < 0)
  return VAR_3;

 FUNC_0(&VAR_7->lock);
 VAR_10 = FUNC_5(VAR_7, VAR_8, VAR_5->entry);
 if (VAR_10)
  goto exit;

 if (VAR_5->set_cntr &&
     FUNC_4(VAR_7, VAR_8, VAR_5->cntr)) {
  VAR_10 = VAR_3;
  goto exit;
 }

 if (VAR_5->intf != VAR_1 && VAR_5->intf != VAR_2) {
  VAR_10 = VAR_3;
  goto exit;
 }

 FUNC_2(VAR_4, VAR_7, VAR_9, VAR_5->entry, VAR_5->intf,
         &VAR_5->entry_data, VAR_5->enable_entry);

 if (VAR_5->set_cntr)
  FUNC_3(VAR_4, VAR_7, VAR_9,
         VAR_5->entry, VAR_5->cntr);

 VAR_10 = 0;
exit:
 FUNC_1(&VAR_7->lock);
 return VAR_10;
}
