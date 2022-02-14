
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {TYPE_1__* signal; } ;
struct seq_file {int dummy; } ;
struct rlimit {char* rlim_cur; char* rlim_max; } ;
struct pid_namespace {int dummy; } ;
struct pid {int dummy; } ;
struct TYPE_4__ {char* unit; int name; } ;
struct TYPE_3__ {int rlim; } ;


 char* VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (struct task_struct*,unsigned long*) ;
 int FUNC_1 (struct rlimit*,int ,int) ;
 int FUNC_2 (struct seq_file*,char*,char*,...) ;
 int FUNC_3 (struct seq_file*,char) ;
 int FUNC_4 (struct seq_file*,char*) ;
 int FUNC_5 (struct task_struct*,unsigned long*) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_3, struct pid_namespace *VAR_4,
      struct pid *VAR_5, struct task_struct *VAR_6)
{
 unsigned int VAR_7;
 unsigned long VAR_8;

 struct rlimit VAR_9[VAR_1];

 if (!FUNC_0(VAR_6, &VAR_8))
  return 0;
 FUNC_1(VAR_9, VAR_6->signal->rlim, sizeof(struct rlimit) * VAR_1);
 FUNC_5(VAR_6, &VAR_8);




 FUNC_4(VAR_3, "Limit                     "
  "Soft Limit           "
  "Hard Limit           "
  "Units     \n");

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (VAR_9[VAR_7].rlim_cur == VAR_0)
   FUNC_2(VAR_3, "%-25s %-20s ",
       VAR_2[VAR_7].name, "unlimited");
  else
   FUNC_2(VAR_3, "%-25s %-20lu ",
       VAR_2[VAR_7].name, VAR_9[VAR_7].rlim_cur);

  if (VAR_9[VAR_7].rlim_max == VAR_0)
   FUNC_2(VAR_3, "%-20s ", "unlimited");
  else
   FUNC_2(VAR_3, "%-20lu ", VAR_9[VAR_7].rlim_max);

  if (VAR_2[VAR_7].unit)
   FUNC_2(VAR_3, "%-10s\n", VAR_2[VAR_7].unit);
  else
   FUNC_3(VAR_3, '\n');
 }

 return 0;
}
