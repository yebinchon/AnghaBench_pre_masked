
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int dummy; } ;
struct dlm_lkb {scalar_t__ lkb_grmode; scalar_t__ lkb_rqmode; scalar_t__ lkb_highbast; scalar_t__ lkb_status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dlm_rsb*,struct dlm_lkb*,int ) ;
 int FUNC_1 (struct dlm_rsb*,struct dlm_lkb*,int ) ;

__attribute__((used)) static void FUNC_2(struct dlm_rsb *VAR_2, struct dlm_lkb *VAR_3)
{
 if (VAR_3->lkb_grmode != VAR_3->lkb_rqmode) {
  VAR_3->lkb_grmode = VAR_3->lkb_rqmode;
  if (VAR_3->lkb_status)
   FUNC_1(VAR_2, VAR_3, VAR_0);
  else
   FUNC_0(VAR_2, VAR_3, VAR_0);
 }

 VAR_3->lkb_rqmode = VAR_1;
 VAR_3->lkb_highbast = 0;
}
