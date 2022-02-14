
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lkb {scalar_t__ lkb_rqmode; scalar_t__ lkb_grmode; int lkb_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct dlm_lkb *VAR_2)
{
 if (VAR_2->lkb_rqmode == VAR_0 || VAR_2->lkb_grmode == VAR_0) {
  FUNC_0("munge_demoted %x invalid modes gr %d rq %d",
     VAR_2->lkb_id, VAR_2->lkb_grmode, VAR_2->lkb_rqmode);
  return;
 }

 VAR_2->lkb_grmode = VAR_1;
}
