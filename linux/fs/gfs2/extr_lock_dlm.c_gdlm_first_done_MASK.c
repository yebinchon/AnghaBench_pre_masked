
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm_lockstruct {int ls_recover_flags; } ;
struct gfs2_sbd {struct lm_lockstruct sd_lockstruct; } ;


 int VAR_0 ;
 int FUNC_0 (struct gfs2_sbd*) ;
 int FUNC_1 (struct gfs2_sbd*,char*,int) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct gfs2_sbd *VAR_1)
{
 struct lm_lockstruct *VAR_2 = &VAR_1->sd_lockstruct;
 int VAR_3;

 if (FUNC_2(VAR_0, &VAR_2->ls_recover_flags))
  return;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  FUNC_1(VAR_1, "mount first_done error %d\n", VAR_3);
}
