
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int res_recover_list; struct dlm_ls* res_ls; } ;
struct dlm_ls {int ls_recover_list_lock; int ls_recover_list_count; int ls_recover_list; } ;


 int FUNC_0 (struct dlm_rsb*) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct dlm_rsb *VAR_0)
{
 struct dlm_ls *VAR_1 = VAR_0->res_ls;

 FUNC_3(&VAR_1->ls_recover_list_lock);
 if (FUNC_2(&VAR_0->res_recover_list)) {
  FUNC_1(&VAR_0->res_recover_list, &VAR_1->ls_recover_list);
  VAR_1->ls_recover_list_count++;
  FUNC_0(VAR_0);
 }
 FUNC_4(&VAR_1->ls_recover_list_lock);
}
