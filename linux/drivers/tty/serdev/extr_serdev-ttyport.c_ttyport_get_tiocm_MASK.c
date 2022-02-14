
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* ops; } ;
struct serport {struct tty_struct* tty; } ;
struct serdev_controller {int dummy; } ;
struct TYPE_2__ {int (* tiocmget ) (struct tty_struct*) ;} ;


 int VAR_0 ;
 struct serport* FUNC_0 (struct serdev_controller*) ;
 int FUNC_1 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_2(struct serdev_controller *VAR_1)
{
 struct serport *VAR_2 = FUNC_0(VAR_1);
 struct tty_struct *VAR_3 = VAR_2->tty;

 if (!VAR_3->ops->tiocmget)
  return -VAR_0;

 return VAR_3->ops->tiocmget(VAR_3);
}
