
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* ops; scalar_t__ stopped; scalar_t__ flow_stopped; } ;
struct TYPE_2__ {int (* start ) (struct tty_struct*) ;} ;


 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;

void FUNC_2(struct tty_struct *VAR_0)
{
 if (!VAR_0->stopped || VAR_0->flow_stopped)
  return;
 VAR_0->stopped = 0;
 if (VAR_0->ops->start)
  VAR_0->ops->start(VAR_0);
 FUNC_1(VAR_0);
}
