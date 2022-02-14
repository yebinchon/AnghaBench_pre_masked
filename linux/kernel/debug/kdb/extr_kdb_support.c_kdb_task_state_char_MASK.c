
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {char state; int exit_state; int mm; } ;
struct TYPE_2__ {int irq_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 scalar_t__ FUNC_0 (struct task_struct const*) ;
 int VAR_6 ;
 int FUNC_1 (struct task_struct const*) ;
 int FUNC_2 (struct task_struct const*) ;
 TYPE_1__* VAR_7 ;
 scalar_t__ FUNC_3 (unsigned long*,char*,int) ;

char FUNC_4 (const struct task_struct *VAR_8)
{
 int VAR_9;
 char VAR_10;
 unsigned long VAR_11;

 if (!VAR_8 || FUNC_3(&VAR_11, (char *)VAR_8, sizeof(unsigned long)))
  return 'E';

 VAR_9 = FUNC_1(VAR_8);
 VAR_10 = (VAR_8->state == 0) ? 'R' :
  (VAR_8->state < 0) ? 'U' :
  (VAR_8->state & VAR_5) ? 'D' :
  (VAR_8->state & VAR_3) ? 'T' :
  (VAR_8->state & VAR_4) ? 'C' :
  (VAR_8->exit_state & VAR_1) ? 'Z' :
  (VAR_8->exit_state & VAR_0) ? 'E' :
  (VAR_8->state & VAR_2) ? 'S' : '?';
 if (FUNC_0(VAR_8)) {


  if (!FUNC_2(VAR_8) || VAR_7[VAR_9].irq_depth == 1) {
   if (VAR_9 != VAR_6)
    VAR_10 = 'I';
  }
 } else if (!VAR_8->mm && VAR_10 == 'S') {
  VAR_10 = 'M';
 }
 return VAR_10;
}
