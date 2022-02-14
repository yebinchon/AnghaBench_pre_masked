
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* ops; } ;
struct serport {int tty_idx; int flags; struct tty_struct* tty; } ;
struct serdev_controller {int dummy; } ;
struct TYPE_2__ {int (* close ) (struct tty_struct*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct serport* FUNC_1 (struct serdev_controller*) ;
 int FUNC_2 (struct tty_struct*,int *) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (struct tty_struct*,int ) ;
 int FUNC_5 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_6(struct serdev_controller *VAR_1)
{
 struct serport *VAR_2 = FUNC_1(VAR_1);
 struct tty_struct *VAR_3 = VAR_2->tty;

 FUNC_0(VAR_0, &VAR_2->flags);

 FUNC_3(VAR_3);
 if (VAR_3->ops->close)
  VAR_3->ops->close(VAR_3, ((void*)0));
 FUNC_5(VAR_3);

 FUNC_4(VAR_3, VAR_2->tty_idx);
}
