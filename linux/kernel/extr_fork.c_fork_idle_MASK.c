
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct kernel_clone_args {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*) ;
 struct task_struct* FUNC_1 (int *,int ,int ,struct kernel_clone_args*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct task_struct*,int) ;
 int FUNC_4 (struct task_struct*) ;
 int VAR_1 ;

struct task_struct *FUNC_5(int VAR_2)
{
 struct task_struct *VAR_3;
 struct kernel_clone_args VAR_4 = {
  .flags = VAR_0,
 };

 VAR_3 = FUNC_1(&VAR_1, 0, FUNC_2(VAR_2), &VAR_4);
 if (!FUNC_0(VAR_3)) {
  FUNC_4(VAR_3);
  FUNC_3(VAR_3, VAR_2);
 }

 return VAR_3;
}
