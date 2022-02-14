
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_rsb {int res_lvbseq; TYPE_1__* res_ls; scalar_t__ res_lvbptr; } ;
struct dlm_lkb {scalar_t__ lkb_grmode; int lkb_exflags; int lkb_lvbptr; } ;
struct TYPE_2__ {int ls_lvblen; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (struct dlm_rsb*,int ) ;
 int FUNC_3 (struct dlm_rsb*,int ) ;

__attribute__((used)) static void FUNC_4(struct dlm_rsb *VAR_4, struct dlm_lkb *VAR_5)
{
 if (VAR_5->lkb_grmode < VAR_2)
  return;

 if (VAR_5->lkb_exflags & VAR_0) {
  FUNC_3(VAR_4, VAR_3);
  return;
 }

 if (!VAR_5->lkb_lvbptr)
  return;

 if (!(VAR_5->lkb_exflags & VAR_1))
  return;

 if (!VAR_4->res_lvbptr)
  VAR_4->res_lvbptr = FUNC_0(VAR_4->res_ls);

 if (!VAR_4->res_lvbptr)
  return;

 FUNC_1(VAR_4->res_lvbptr, VAR_5->lkb_lvbptr, VAR_4->res_ls->ls_lvblen);
 VAR_4->res_lvbseq++;
 FUNC_2(VAR_4, VAR_3);
}
