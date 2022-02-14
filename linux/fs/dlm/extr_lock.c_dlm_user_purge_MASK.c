
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_user_proc {int dummy; } ;
struct dlm_ls {int dummy; } ;
struct TYPE_2__ {int pid; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct dlm_ls*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct dlm_ls*) ;
 int FUNC_3 (struct dlm_ls*,int,int) ;
 int FUNC_4 (struct dlm_ls*,struct dlm_user_proc*) ;
 int FUNC_5 (struct dlm_ls*,int,int) ;

int FUNC_6(struct dlm_ls *VAR_1, struct dlm_user_proc *VAR_2,
     int VAR_3, int VAR_4)
{
 int VAR_5 = 0;

 if (VAR_3 && (VAR_3 != FUNC_1())) {
  VAR_5 = FUNC_5(VAR_1, VAR_3, VAR_4);
 } else {
  FUNC_0(VAR_1);
  if (VAR_4 == VAR_0->pid)
   FUNC_4(VAR_1, VAR_2);
  else
   FUNC_3(VAR_1, VAR_3, VAR_4);
  FUNC_2(VAR_1);
 }
 return VAR_5;
}
