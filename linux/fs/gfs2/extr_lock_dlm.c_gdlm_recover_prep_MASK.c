
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm_lockstruct {int ls_recover_spin; int ls_recover_flags; int ls_recover_start; int ls_recover_block; } ;
struct gfs2_sbd {struct lm_lockstruct sd_lockstruct; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_4)
{
 struct gfs2_sbd *VAR_5 = VAR_4;
 struct lm_lockstruct *VAR_6 = &VAR_5->sd_lockstruct;

 FUNC_1(&VAR_6->ls_recover_spin);
 VAR_6->ls_recover_block = VAR_6->ls_recover_start;
 FUNC_0(VAR_1, &VAR_6->ls_recover_flags);

 if (!FUNC_3(VAR_3, &VAR_6->ls_recover_flags) ||
      FUNC_3(VAR_2, &VAR_6->ls_recover_flags)) {
  FUNC_2(&VAR_6->ls_recover_spin);
  return;
 }
 FUNC_0(VAR_0, &VAR_6->ls_recover_flags);
 FUNC_2(&VAR_6->ls_recover_spin);
}
