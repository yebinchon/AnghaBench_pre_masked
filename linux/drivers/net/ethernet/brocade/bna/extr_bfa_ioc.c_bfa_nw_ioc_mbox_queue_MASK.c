
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct bfa_mbox_cmd {int msg; int qe; void* cbarg; int cbfn; } ;
struct bfa_ioc_mbox_mod {int cmd_q; } ;
struct TYPE_2__ {int hfn_mbox_cmd; } ;
struct bfa_ioc {TYPE_1__ ioc_regs; struct bfa_ioc_mbox_mod mbox_mod; } ;
typedef int bfa_mbox_cmd_cbfn_t ;


 int FUNC_0 (struct bfa_ioc*,int ,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

bool
FUNC_4(struct bfa_ioc *VAR_0, struct bfa_mbox_cmd *VAR_1,
   bfa_mbox_cmd_cbfn_t VAR_2, void *VAR_3)
{
 struct bfa_ioc_mbox_mod *VAR_4 = &VAR_0->mbox_mod;
 u32 VAR_5;

 VAR_1->cbfn = VAR_2;
 VAR_1->cbarg = VAR_3;




 if (!FUNC_2(&VAR_4->cmd_q)) {
  FUNC_1(&VAR_1->qe, &VAR_4->cmd_q);
  return 1;
 }




 VAR_5 = FUNC_3(VAR_0->ioc_regs.hfn_mbox_cmd);
 if (VAR_5) {
  FUNC_1(&VAR_1->qe, &VAR_4->cmd_q);
  return 1;
 }




 FUNC_0(VAR_0, VAR_1->msg, sizeof(VAR_1->msg));

 return 0;
}
