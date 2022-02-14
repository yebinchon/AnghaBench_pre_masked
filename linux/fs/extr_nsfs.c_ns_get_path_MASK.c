
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct proc_ns_operations {int dummy; } ;
struct path {int dummy; } ;
struct ns_get_path_task_args {struct task_struct* task; struct proc_ns_operations const* ns_ops; } ;


 void* FUNC_0 (struct path*,int ,struct ns_get_path_task_args*) ;
 int VAR_0 ;

void *FUNC_1(struct path *VAR_1, struct task_struct *VAR_2,
    const struct proc_ns_operations *VAR_3)
{
 struct ns_get_path_task_args VAR_4 = {
  .ns_ops = VAR_3,
  .task = VAR_2,
 };

 return FUNC_0(VAR_1, VAR_0, &VAR_4);
}
