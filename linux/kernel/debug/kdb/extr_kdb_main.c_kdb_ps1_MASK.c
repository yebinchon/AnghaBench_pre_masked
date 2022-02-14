
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int comm; int thread; TYPE_1__* parent; int pid; } ;
struct TYPE_2__ {int pid; } ;


 struct task_struct const* FUNC_0 (int) ;
 struct task_struct const* FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct task_struct const*) ;
 scalar_t__ FUNC_4 (struct task_struct const*) ;
 int FUNC_5 (struct task_struct const*) ;
 scalar_t__ FUNC_6 (unsigned long*,char*,int) ;
 int FUNC_7 () ;

void FUNC_8(const struct task_struct *VAR_0)
{
 int VAR_1;
 unsigned long VAR_2;

 if (!VAR_0 || FUNC_6(&VAR_2, (char *)VAR_0, sizeof(unsigned long)))
  return;

 VAR_1 = FUNC_3(VAR_0);
 FUNC_2("0x%px %8d %8d  %d %4d   %c  0x%px %c%s\n",
     (void *)VAR_0, VAR_0->pid, VAR_0->parent->pid,
     FUNC_4(VAR_0), FUNC_3(VAR_0),
     FUNC_5(VAR_0),
     (void *)(&VAR_0->thread),
     VAR_0 == FUNC_1(FUNC_7()) ? '*' : ' ',
     VAR_0->comm);
 if (FUNC_4(VAR_0)) {
  if (!FUNC_0(VAR_1)) {
   FUNC_2("  Error: no saved data for this cpu\n");
  } else {
   if (FUNC_0(VAR_1) != VAR_0)
    FUNC_2("  Error: does not match running "
       "process table (0x%px)\n", FUNC_0(VAR_1));
  }
 }
}
