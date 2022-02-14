
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int res_waitqueue; int res_convertqueue; int res_grantqueue; } ;
struct dlm_lkb {scalar_t__ lkb_grmode; int lkb_exflags; } ;
typedef int int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct dlm_lkb*,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,struct dlm_lkb*) ;

__attribute__((used)) static int FUNC_3(struct dlm_rsb *VAR_4, struct dlm_lkb *VAR_5, int VAR_6,
      int VAR_7)
{
 int8_t VAR_8 = (VAR_5->lkb_grmode != VAR_3);
 if (VAR_5->lkb_exflags & VAR_0)
  return 1;






 if (FUNC_2(&VAR_4->res_grantqueue, VAR_5))
  return 0;







 if (FUNC_2(&VAR_4->res_convertqueue, VAR_5))
  return 0;
 if (VAR_8 && VAR_7)
  return 1;
 if (VAR_6 && VAR_8 && !(VAR_5->lkb_exflags & VAR_2))
  return 1;






 if (VAR_6 && VAR_8 && (VAR_5->lkb_exflags & VAR_2)) {
  if (FUNC_1(&VAR_4->res_convertqueue))
   return 1;
  else
   return 0;
 }






 if (VAR_5->lkb_exflags & VAR_1)
  return 1;







 if (!VAR_6 && VAR_8 && FUNC_0(VAR_5, &VAR_4->res_convertqueue))
  return 1;
 if (VAR_6 && !VAR_8 && FUNC_1(&VAR_4->res_convertqueue) &&
     FUNC_1(&VAR_4->res_waitqueue))
  return 1;
 if (!VAR_6 && !VAR_8 && FUNC_1(&VAR_4->res_convertqueue) &&
     FUNC_0(VAR_5, &VAR_4->res_waitqueue))
  return 1;

 return 0;
}
