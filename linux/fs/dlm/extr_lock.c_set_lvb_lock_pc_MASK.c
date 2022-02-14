
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_rsb {TYPE_1__* res_ls; } ;
struct dlm_message {int m_lvbseq; int m_extra; } ;
struct dlm_lkb {int lkb_exflags; int lkb_grmode; int lkb_rqmode; int lkb_lvbseq; int lkb_lvbptr; } ;
struct TYPE_2__ {int ls_lvblen; } ;


 int VAR_0 ;
 int** VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct dlm_message*) ;

__attribute__((used)) static void FUNC_2(struct dlm_rsb *VAR_2, struct dlm_lkb *VAR_3,
       struct dlm_message *VAR_4)
{
 int VAR_5;

 if (!VAR_3->lkb_lvbptr)
  return;

 if (!(VAR_3->lkb_exflags & VAR_0))
  return;

 VAR_5 = VAR_1[VAR_3->lkb_grmode + 1][VAR_3->lkb_rqmode + 1];
 if (VAR_5 == 1) {
  int VAR_6 = FUNC_1(VAR_4);
  if (VAR_6 > VAR_2->res_ls->ls_lvblen)
   VAR_6 = VAR_2->res_ls->ls_lvblen;
  FUNC_0(VAR_3->lkb_lvbptr, VAR_4->m_extra, VAR_6);
  VAR_3->lkb_lvbseq = VAR_4->m_lvbseq;
 }
}
