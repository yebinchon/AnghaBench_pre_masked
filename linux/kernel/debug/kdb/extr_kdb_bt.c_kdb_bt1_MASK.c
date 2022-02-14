
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int pid; } ;
typedef int buffer ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char,unsigned long) ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*,int *) ;
 int FUNC_5 (struct task_struct*,unsigned long) ;
 int FUNC_6 () ;

__attribute__((used)) static int
FUNC_7(struct task_struct *VAR_1, unsigned long VAR_2,
 int VAR_3, int VAR_4)
{
 char VAR_5[2];
 if (FUNC_0(VAR_5[0], (unsigned long)VAR_1) ||
     FUNC_0(VAR_5[0], (unsigned long)(VAR_1+1)-1))
  return VAR_0;
 if (!FUNC_5(VAR_1, VAR_2))
  return 0;
 FUNC_2("Stack traceback for pid %d\n", VAR_1->pid);
 FUNC_3(VAR_1);
 FUNC_4(VAR_1, ((void*)0));
 if (VAR_4) {
  FUNC_1(VAR_5, sizeof(VAR_5),
      "Enter <q> to end, <cr> to continue:");
  if (VAR_5[0] == 'q') {
   FUNC_2("\n");
   return 1;
  }
 }
 FUNC_6();
 return 0;
}
