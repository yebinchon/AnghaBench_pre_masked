
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int flags; int ldisc_sem; } ;
struct tty_ldisc {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* close ) (struct tty_struct*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct tty_struct*,char*,struct tty_ldisc*) ;

__attribute__((used)) static void FUNC_6(struct tty_struct *VAR_1, struct tty_ldisc *VAR_2)
{
 FUNC_2(&VAR_1->ldisc_sem);
 FUNC_0(!FUNC_4(VAR_0, &VAR_1->flags));
 FUNC_1(VAR_0, &VAR_1->flags);
 if (VAR_2->ops->close)
  VAR_2->ops->close(VAR_1);
 FUNC_5(VAR_1, "%p: closed\n", VAR_2);
}
