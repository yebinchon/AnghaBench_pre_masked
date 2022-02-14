
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* ops; int write_wait; } ;
struct TYPE_2__ {int (* wait_until_sent ) (struct tty_struct*,long) ;} ;


 long VAR_0 ;
 int FUNC_0 (struct tty_struct*,long) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*,char*,long) ;
 long FUNC_3 (int ,int,long) ;

void FUNC_4(struct tty_struct *VAR_1, long VAR_2)
{
 FUNC_2(VAR_1, "wait until sent, timeout=%ld\n", VAR_2);

 if (!VAR_2)
  VAR_2 = VAR_0;

 VAR_2 = FUNC_3(VAR_1->write_wait,
   !FUNC_1(VAR_1), VAR_2);
 if (VAR_2 <= 0)
  return;

 if (VAR_2 == VAR_0)
  VAR_2 = 0;

 if (VAR_1->ops->wait_until_sent)
  VAR_1->ops->wait_until_sent(VAR_1, VAR_2);
}
