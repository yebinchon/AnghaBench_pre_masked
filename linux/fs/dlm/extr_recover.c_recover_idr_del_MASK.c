
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {scalar_t__ res_id; struct dlm_ls* res_ls; } ;
struct dlm_ls {int ls_recover_idr_lock; int ls_recover_list_count; int ls_recover_idr; } ;


 int FUNC_0 (struct dlm_rsb*) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct dlm_rsb *VAR_0)
{
 struct dlm_ls *VAR_1 = VAR_0->res_ls;

 FUNC_2(&VAR_1->ls_recover_idr_lock);
 FUNC_1(&VAR_1->ls_recover_idr, VAR_0->res_id);
 VAR_0->res_id = 0;
 VAR_1->ls_recover_list_count--;
 FUNC_3(&VAR_1->ls_recover_idr_lock);

 FUNC_0(VAR_0);
}
