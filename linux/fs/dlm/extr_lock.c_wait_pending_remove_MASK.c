
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int res_name; int res_dir_nodeid; struct dlm_ls* res_ls; } ;
struct dlm_ls {int ls_remove_spin; scalar_t__ ls_remove_len; int ls_remove_name; } ;


 int FUNC_0 (struct dlm_ls*,char*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dlm_rsb*,int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct dlm_rsb *VAR_0)
{
 struct dlm_ls *VAR_1 = VAR_0->res_ls;
 restart:
 FUNC_3(&VAR_1->ls_remove_spin);
 if (VAR_1->ls_remove_len &&
     !FUNC_2(VAR_0, VAR_1->ls_remove_name, VAR_1->ls_remove_len)) {
  FUNC_0(VAR_1, "delay lookup for remove dir %d %s",
       VAR_0->res_dir_nodeid, VAR_0->res_name);
  FUNC_4(&VAR_1->ls_remove_spin);
  FUNC_1(1);
  goto restart;
 }
 FUNC_4(&VAR_1->ls_remove_spin);
}
