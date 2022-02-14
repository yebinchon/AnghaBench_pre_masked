
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_rsb {int res_hashchain; } ;
struct dlm_ls {int ls_new_rsb_count; int ls_new_rsb_spin; int ls_new_rsb; } ;
struct TYPE_2__ {int ci_new_rsb_count; } ;


 int VAR_0 ;
 struct dlm_rsb* FUNC_0 (struct dlm_ls*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct dlm_ls *VAR_2)
{
 struct dlm_rsb *VAR_3, *VAR_4;
 int VAR_5 = 0;

 FUNC_2(&VAR_2->ls_new_rsb_spin);
 if (VAR_2->ls_new_rsb_count > VAR_1.ci_new_rsb_count / 2) {
  FUNC_3(&VAR_2->ls_new_rsb_spin);
  return 0;
 }
 FUNC_3(&VAR_2->ls_new_rsb_spin);

 VAR_3 = FUNC_0(VAR_2);
 VAR_4 = FUNC_0(VAR_2);

 FUNC_2(&VAR_2->ls_new_rsb_spin);
 if (VAR_3) {
  FUNC_1(&VAR_3->res_hashchain, &VAR_2->ls_new_rsb);
  VAR_2->ls_new_rsb_count++;
 }
 if (VAR_4) {
  FUNC_1(&VAR_4->res_hashchain, &VAR_2->ls_new_rsb);
  VAR_2->ls_new_rsb_count++;
 }
 VAR_5 = VAR_2->ls_new_rsb_count;
 FUNC_3(&VAR_2->ls_new_rsb_spin);

 if (!VAR_5)
  return -VAR_0;
 return 0;
}
