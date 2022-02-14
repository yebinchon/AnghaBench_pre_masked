
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct seq_file {int dummy; } ;
struct pid_namespace {int dummy; } ;
struct pid {int dummy; } ;


 int FUNC_0 (struct task_struct*,unsigned long) ;
 int FUNC_1 (struct seq_file*,char*,unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, struct pid_namespace *VAR_2,
     struct pid *VAR_3, struct task_struct *VAR_4)
{
 unsigned long VAR_5 = FUNC_2() + VAR_0;
 unsigned long VAR_6 = 0;

 VAR_6 = FUNC_0(VAR_4, VAR_5) * 1000 / VAR_5;
 FUNC_1(VAR_1, "%lu\n", VAR_6);

 return 0;
}
