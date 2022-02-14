
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int stopped; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* stop ) (struct tty_struct*) ;} ;


 int FUNC_0 (struct tty_struct*) ;

void FUNC_1(struct tty_struct *VAR_0)
{
 if (VAR_0->stopped)
  return;
 VAR_0->stopped = 1;
 if (VAR_0->ops->stop)
  VAR_0->ops->stop(VAR_0);
}
