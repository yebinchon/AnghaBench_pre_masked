
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct dlm_ls {struct task_struct* ls_recoverd_task; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 int VAR_0 ;
 struct task_struct* FUNC_2 (int ,struct dlm_ls*,char*) ;

int FUNC_3(struct dlm_ls *VAR_1)
{
 struct task_struct *VAR_2;
 int VAR_3 = 0;

 VAR_2 = FUNC_2(VAR_0, VAR_1, "dlm_recoverd");
 if (FUNC_0(VAR_2))
  VAR_3 = FUNC_1(VAR_2);
 else
                VAR_1->ls_recoverd_task = VAR_2;
 return VAR_3;
}
