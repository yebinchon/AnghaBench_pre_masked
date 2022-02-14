
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct signal_struct {int group_exit_code; int flags; } ;
struct sighand_struct {int siglock; } ;
struct TYPE_4__ {struct sighand_struct* sighand; struct signal_struct* signal; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct signal_struct*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

void
FUNC_7(int VAR_2)
{
 struct signal_struct *VAR_3 = VAR_1->signal;

 FUNC_0(VAR_2 & 0x80);

 if (FUNC_2(VAR_3))
  VAR_2 = VAR_3->group_exit_code;
 else if (!FUNC_5(VAR_1)) {
  struct sighand_struct *const VAR_4 = VAR_1->sighand;

  FUNC_3(&VAR_4->siglock);
  if (FUNC_2(VAR_3))

   VAR_2 = VAR_3->group_exit_code;
  else {
   VAR_3->group_exit_code = VAR_2;
   VAR_3->flags = VAR_0;
   FUNC_6(VAR_1);
  }
  FUNC_4(&VAR_4->siglock);
 }

 FUNC_1(VAR_2);

}
