
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_rsb {TYPE_1__* res_ls; int res_length; int res_name; int res_hash; } ;
struct dlm_message {int m_type; int m_extra; int m_asts; int m_hash; int m_rqmode; int m_grmode; int m_status; int m_lvbseq; int m_flags; int m_sbflags; int m_exflags; int m_remid; int m_lkid; int m_pid; int m_nodeid; } ;
struct dlm_lkb {int lkb_lvbptr; scalar_t__ lkb_astfn; scalar_t__ lkb_bastfn; int lkb_rqmode; int lkb_grmode; int lkb_status; int lkb_lvbseq; int lkb_flags; int lkb_sbflags; int lkb_exflags; int lkb_remid; int lkb_id; int lkb_ownpid; int lkb_nodeid; } ;
struct TYPE_2__ {int ls_lvblen; } ;


 int VAR_0 ;
 int VAR_1 ;







 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct dlm_rsb *VAR_2, struct dlm_lkb *VAR_3,
        struct dlm_message *VAR_4)
{
 VAR_4->m_nodeid = VAR_3->lkb_nodeid;
 VAR_4->m_pid = VAR_3->lkb_ownpid;
 VAR_4->m_lkid = VAR_3->lkb_id;
 VAR_4->m_remid = VAR_3->lkb_remid;
 VAR_4->m_exflags = VAR_3->lkb_exflags;
 VAR_4->m_sbflags = VAR_3->lkb_sbflags;
 VAR_4->m_flags = VAR_3->lkb_flags;
 VAR_4->m_lvbseq = VAR_3->lkb_lvbseq;
 VAR_4->m_status = VAR_3->lkb_status;
 VAR_4->m_grmode = VAR_3->lkb_grmode;
 VAR_4->m_rqmode = VAR_3->lkb_rqmode;
 VAR_4->m_hash = VAR_2->res_hash;




 if (VAR_3->lkb_bastfn)
  VAR_4->m_asts |= VAR_0;
 if (VAR_3->lkb_astfn)
  VAR_4->m_asts |= VAR_1;




 switch (VAR_4->m_type) {
 case 130:
 case 131:
  FUNC_0(VAR_4->m_extra, VAR_2->res_name, VAR_2->res_length);
  break;
 case 134:
 case 128:
 case 129:
 case 133:
 case 132:
  if (!VAR_3->lkb_lvbptr)
   break;
  FUNC_0(VAR_4->m_extra, VAR_3->lkb_lvbptr, VAR_2->res_ls->ls_lvblen);
  break;
 }
}
