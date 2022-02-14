
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int res_id; struct dlm_ls* res_ls; } ;
struct dlm_ls {int ls_recover_idr_lock; int ls_recover_list_count; int ls_recover_idr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dlm_rsb*) ;
 int FUNC_1 (int *,struct dlm_rsb*,int,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct dlm_rsb *VAR_2)
{
 struct dlm_ls *VAR_3 = VAR_2->res_ls;
 int VAR_4;

 FUNC_2(VAR_0);
 FUNC_4(&VAR_3->ls_recover_idr_lock);
 if (VAR_2->res_id) {
  VAR_4 = -1;
  goto out_unlock;
 }
 VAR_4 = FUNC_1(&VAR_3->ls_recover_idr, VAR_2, 1, 0, VAR_1);
 if (VAR_4 < 0)
  goto out_unlock;

 VAR_2->res_id = VAR_4;
 VAR_3->ls_recover_list_count++;
 FUNC_0(VAR_2);
 VAR_4 = 0;
out_unlock:
 FUNC_5(&VAR_3->ls_recover_idr_lock);
 FUNC_3();
 return VAR_4;
}
