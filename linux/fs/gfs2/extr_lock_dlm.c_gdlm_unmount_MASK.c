
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm_lockstruct {int * ls_dlm; int ls_recover_spin; int ls_recover_flags; } ;
struct gfs2_sbd {int sd_control_work; struct lm_lockstruct sd_lockstruct; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lm_lockstruct*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct gfs2_sbd *VAR_2)
{
 struct lm_lockstruct *VAR_3 = &VAR_2->sd_lockstruct;

 if (FUNC_6(VAR_0, &VAR_3->ls_recover_flags))
  goto release;



 FUNC_4(&VAR_3->ls_recover_spin);
 FUNC_3(VAR_1, &VAR_3->ls_recover_flags);
 FUNC_5(&VAR_3->ls_recover_spin);
 FUNC_1(&VAR_2->sd_control_work);


release:
 if (VAR_3->ls_dlm) {
  FUNC_0(VAR_3->ls_dlm, 2);
  VAR_3->ls_dlm = ((void*)0);
 }

 FUNC_2(VAR_3);
}
