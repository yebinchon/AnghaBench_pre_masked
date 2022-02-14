
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lkb {scalar_t__ lkb_grmode; scalar_t__ lkb_rqmode; scalar_t__ lkb_highbast; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct dlm_lkb*,struct dlm_lkb*) ;

__attribute__((used)) static int FUNC_1(struct dlm_lkb *VAR_3, struct dlm_lkb *VAR_4)
{
 if ((VAR_3->lkb_grmode == VAR_2 && VAR_4->lkb_rqmode == VAR_0) ||
     (VAR_3->lkb_grmode == VAR_0 && VAR_4->lkb_rqmode == VAR_2)) {
  if (VAR_3->lkb_highbast < VAR_1)
   return 1;
  return 0;
 }

 if (VAR_3->lkb_highbast < VAR_4->lkb_rqmode && !FUNC_0(VAR_3, VAR_4))
  return 1;
 return 0;
}
