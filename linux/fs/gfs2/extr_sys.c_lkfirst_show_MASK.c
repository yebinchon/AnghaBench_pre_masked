
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm_lockstruct {int ls_first; } ;
struct gfs2_sbd {struct lm_lockstruct sd_lockstruct; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct gfs2_sbd *VAR_0, char *VAR_1)
{
 struct lm_lockstruct *VAR_2 = &VAR_0->sd_lockstruct;
 return FUNC_0(VAR_1, "%d\n", VAR_2->ls_first);
}
