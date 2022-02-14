
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_recover {scalar_t__ seq; struct dlm_recover* nodes; } ;
struct dlm_ls {scalar_t__ ls_recover_seq; int ls_recover_lock; int ls_flags; struct dlm_recover* ls_recover_args; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct dlm_recover*) ;
 int FUNC_2 (struct dlm_ls*,struct dlm_recover*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct dlm_ls *VAR_1)
{
 struct dlm_recover *VAR_2 = ((void*)0);

 FUNC_3(&VAR_1->ls_recover_lock);
 VAR_2 = VAR_1->ls_recover_args;
 VAR_1->ls_recover_args = ((void*)0);
 if (VAR_2 && VAR_1->ls_recover_seq == VAR_2->seq)
  FUNC_0(VAR_0, &VAR_1->ls_flags);
 FUNC_4(&VAR_1->ls_recover_lock);

 if (VAR_2) {
  FUNC_2(VAR_1, VAR_2);
  FUNC_1(VAR_2->nodes);
  FUNC_1(VAR_2);
 }
}
