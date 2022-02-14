
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct seq_file {int dummy; } ;
struct pid_namespace {int dummy; } ;
struct pid {int dummy; } ;
struct mm_struct {int dummy; } ;


 int FUNC_0 (struct seq_file*,struct task_struct*) ;
 struct mm_struct* FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (struct seq_file*,struct task_struct*,int) ;
 int FUNC_4 (struct seq_file*,char) ;
 int FUNC_5 (struct seq_file*,char*) ;
 int FUNC_6 (struct seq_file*,struct task_struct*) ;
 int FUNC_7 (struct seq_file*,struct task_struct*) ;
 int FUNC_8 (struct seq_file*,struct mm_struct*) ;
 int FUNC_9 (struct seq_file*,struct task_struct*) ;
 int FUNC_10 (struct seq_file*,struct mm_struct*) ;
 int FUNC_11 (struct seq_file*,struct task_struct*) ;
 int FUNC_12 (struct seq_file*,struct task_struct*) ;
 int FUNC_13 (struct seq_file*,struct pid_namespace*,struct pid*,struct task_struct*) ;
 int FUNC_14 (struct seq_file*,struct mm_struct*) ;

int FUNC_15(struct seq_file *VAR_0, struct pid_namespace *VAR_1,
   struct pid *VAR_2, struct task_struct *VAR_3)
{
 struct mm_struct *VAR_4 = FUNC_1(VAR_3);

 FUNC_5(VAR_0, "Name:\t");
 FUNC_3(VAR_0, VAR_3, 1);
 FUNC_4(VAR_0, '\n');

 FUNC_13(VAR_0, VAR_1, VAR_2, VAR_3);

 if (VAR_4) {
  FUNC_10(VAR_0, VAR_4);
  FUNC_8(VAR_0, VAR_4);
  FUNC_14(VAR_0, VAR_4);
  FUNC_2(VAR_4);
 }
 FUNC_12(VAR_0, VAR_3);
 FUNC_6(VAR_0, VAR_3);
 FUNC_11(VAR_0, VAR_3);
 FUNC_9(VAR_0, VAR_3);
 FUNC_0(VAR_0, VAR_3);
 FUNC_7(VAR_0, VAR_3);
 return 0;
}
