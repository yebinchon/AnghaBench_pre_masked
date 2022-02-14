
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm_lockstruct {int ls_recover_flags; } ;
struct gfs2_sbd {struct lm_lockstruct sd_lockstruct; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static ssize_t FUNC_2(struct gfs2_sbd *VAR_1, char *VAR_2)
{
 struct lm_lockstruct *VAR_3 = &VAR_1->sd_lockstruct;
 return FUNC_0(VAR_2, "%d\n", !!FUNC_1(VAR_0, &VAR_3->ls_recover_flags));
}
