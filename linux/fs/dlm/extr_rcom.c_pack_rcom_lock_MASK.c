
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcom_lock {int rl_lvb; int rl_name; void* rl_namelen; int rl_asts; void* rl_wait_type; int rl_status; int rl_grmode; int rl_rqmode; void* rl_lvbseq; void* rl_flags; void* rl_exflags; void* rl_lkid; void* rl_ownpid; } ;
struct dlm_rsb {TYPE_1__* res_ls; int res_length; scalar_t__ res_name; } ;
struct dlm_lkb {scalar_t__ lkb_lvbptr; scalar_t__ lkb_astfn; scalar_t__ lkb_bastfn; int lkb_wait_type; int lkb_status; int lkb_grmode; int lkb_rqmode; int lkb_lvbseq; int lkb_flags; int lkb_exflags; int lkb_id; int lkb_ownpid; } ;
struct TYPE_2__ {int ls_lvblen; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (struct rcom_lock*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct dlm_rsb *VAR_2, struct dlm_lkb *VAR_3,
      struct rcom_lock *VAR_4)
{
 FUNC_3(VAR_4, 0, sizeof(*VAR_4));

 VAR_4->rl_ownpid = FUNC_1(VAR_3->lkb_ownpid);
 VAR_4->rl_lkid = FUNC_1(VAR_3->lkb_id);
 VAR_4->rl_exflags = FUNC_1(VAR_3->lkb_exflags);
 VAR_4->rl_flags = FUNC_1(VAR_3->lkb_flags);
 VAR_4->rl_lvbseq = FUNC_1(VAR_3->lkb_lvbseq);
 VAR_4->rl_rqmode = VAR_3->lkb_rqmode;
 VAR_4->rl_grmode = VAR_3->lkb_grmode;
 VAR_4->rl_status = VAR_3->lkb_status;
 VAR_4->rl_wait_type = FUNC_0(VAR_3->lkb_wait_type);

 if (VAR_3->lkb_bastfn)
  VAR_4->rl_asts |= VAR_0;
 if (VAR_3->lkb_astfn)
  VAR_4->rl_asts |= VAR_1;

 VAR_4->rl_namelen = FUNC_0(VAR_2->res_length);
 FUNC_2(VAR_4->rl_name, VAR_2->res_name, VAR_2->res_length);




 if (VAR_3->lkb_lvbptr)
  FUNC_2(VAR_4->rl_lvb, VAR_3->lkb_lvbptr, VAR_2->res_ls->ls_lvblen);
}
