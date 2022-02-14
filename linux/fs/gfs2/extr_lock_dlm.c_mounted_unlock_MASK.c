
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm_lockstruct {int ls_mounted_lksb; } ;
struct gfs2_sbd {struct lm_lockstruct sd_lockstruct; } ;


 int FUNC_0 (struct gfs2_sbd*,int *,char*) ;

__attribute__((used)) static int FUNC_1(struct gfs2_sbd *VAR_0)
{
 struct lm_lockstruct *VAR_1 = &VAR_0->sd_lockstruct;
 return FUNC_0(VAR_0, &VAR_1->ls_mounted_lksb, "mounted_lock");
}
