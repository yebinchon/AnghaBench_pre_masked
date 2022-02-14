
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lm_lockstruct {int ls_mounted_lksb; } ;
struct gfs2_sbd {struct lm_lockstruct sd_lockstruct; } ;


 int VAR_0 ;
 int FUNC_0 (struct gfs2_sbd*,int,int ,int ,int *,char*) ;

__attribute__((used)) static int FUNC_1(struct gfs2_sbd *VAR_1, int VAR_2, uint32_t VAR_3)
{
 struct lm_lockstruct *VAR_4 = &VAR_1->sd_lockstruct;
 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0,
    &VAR_4->ls_mounted_lksb, "mounted_lock");
}
