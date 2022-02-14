
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int flags; } ;
struct TYPE_2__ {int fu_llist; int fu_rcuhead; } ;
struct file {TYPE_1__ f_u; int f_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int,int *) ;
 struct task_struct* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct task_struct*,int *,int) ;

void FUNC_7(struct file *VAR_5, unsigned int VAR_6)
{
 if (FUNC_0(VAR_6, &VAR_5->f_count)) {
  struct task_struct *VAR_7 = VAR_2;

  if (FUNC_3(!FUNC_1() && !(VAR_7->flags & VAR_0))) {
   FUNC_2(&VAR_5->f_u.fu_rcuhead, VAR_1);
   if (!FUNC_6(VAR_7, &VAR_5->f_u.fu_rcuhead, 1))
    return;





  }

  if (FUNC_4(&VAR_5->f_u.fu_llist, &VAR_3))
   FUNC_5(&VAR_4, 1);
 }
}
