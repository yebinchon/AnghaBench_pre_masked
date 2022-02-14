
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ls {int ls_recover_idr_lock; scalar_t__ ls_recover_list_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct dlm_ls *VAR_0)
{
 int VAR_1 = 1;

 FUNC_0(&VAR_0->ls_recover_idr_lock);
 if (VAR_0->ls_recover_list_count)
  VAR_1 = 0;
 FUNC_1(&VAR_0->ls_recover_idr_lock);

 return VAR_1;
}
