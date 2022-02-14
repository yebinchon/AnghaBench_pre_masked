
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int cpus_ptr; } ;
struct seq_file {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0, struct task_struct *VAR_1)
{
 FUNC_1(VAR_0, "Cpus_allowed:\t%*pb\n",
     FUNC_0(VAR_1->cpus_ptr));
 FUNC_1(VAR_0, "Cpus_allowed_list:\t%*pbl\n",
     FUNC_0(VAR_1->cpus_ptr));
}
