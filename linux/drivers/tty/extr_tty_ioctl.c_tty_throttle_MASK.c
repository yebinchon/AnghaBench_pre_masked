
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int termios_rwsem; scalar_t__ flow_change; TYPE_1__* ops; int flags; } ;
struct TYPE_2__ {int (* throttle ) (struct tty_struct*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct tty_struct *VAR_1)
{
 FUNC_0(&VAR_1->termios_rwsem);

 if (!FUNC_2(VAR_0, &VAR_1->flags) &&
     VAR_1->ops->throttle)
  VAR_1->ops->throttle(VAR_1);
 VAR_1->flow_change = 0;
 FUNC_3(&VAR_1->termios_rwsem);
}
