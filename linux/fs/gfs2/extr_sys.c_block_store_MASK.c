
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm_lockstruct {int ls_recover_flags; } ;
struct gfs2_sbd {struct lm_lockstruct sd_lockstruct; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct gfs2_sbd*) ;
 int FUNC_2 (char const*,int ,int*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;

__attribute__((used)) static ssize_t FUNC_5(struct gfs2_sbd *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct lm_lockstruct *VAR_5 = &VAR_2->sd_lockstruct;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_2(VAR_3, 0, &VAR_7);
 if (VAR_6)
  return VAR_6;

 if (VAR_7 == 1)
  FUNC_3(VAR_0, &VAR_5->ls_recover_flags);
 else if (VAR_7 == 0) {
  FUNC_0(VAR_0, &VAR_5->ls_recover_flags);
  FUNC_4();
  FUNC_1(VAR_2);
 } else {
  return -VAR_1;
 }
 return VAR_4;
}
