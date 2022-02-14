
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct tty_port {int mutex; TYPE_1__* ops; scalar_t__ console; } ;
struct TYPE_2__ {int (* shutdown ) (struct tty_port*) ;} ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tty_port*) ;
 scalar_t__ FUNC_4 (struct tty_port*) ;
 int FUNC_5 (struct tty_port*) ;
 int FUNC_6 (struct tty_port*,int ) ;

__attribute__((used)) static void FUNC_7(struct tty_port *VAR_0, struct tty_struct *VAR_1)
{
 FUNC_1(&VAR_0->mutex);
 if (VAR_0->console)
  goto out;

 if (FUNC_4(VAR_0)) {
  FUNC_6(VAR_0, 0);




  if (VAR_1 && FUNC_0(VAR_1))
   FUNC_5(VAR_0);

  if (VAR_0->ops->shutdown)
   VAR_0->ops->shutdown(VAR_0);
 }
out:
 FUNC_2(&VAR_0->mutex);
}
