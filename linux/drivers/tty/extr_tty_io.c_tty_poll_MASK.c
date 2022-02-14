
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct tty_ldisc {TYPE_1__* ops; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_2__ {int (* poll ) (struct tty_struct*,struct file*,int *) ;} ;


 int FUNC_0 (struct file*) ;
 struct tty_struct* FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*,int *) ;
 int FUNC_3 (struct tty_struct*,struct file*,int *) ;
 int FUNC_4 (struct tty_ldisc*) ;
 struct tty_ldisc* FUNC_5 (struct tty_struct*) ;
 scalar_t__ FUNC_6 (struct tty_struct*,int ,char*) ;

__attribute__((used)) static __poll_t FUNC_7(struct file *VAR_0, poll_table *VAR_1)
{
 struct tty_struct *VAR_2 = FUNC_1(VAR_0);
 struct tty_ldisc *VAR_3;
 __poll_t VAR_4 = 0;

 if (FUNC_6(VAR_2, FUNC_0(VAR_0), "tty_poll"))
  return 0;

 VAR_3 = FUNC_5(VAR_2);
 if (!VAR_3)
  return FUNC_2(VAR_0, VAR_1);
 if (VAR_3->ops->poll)
  VAR_4 = VAR_3->ops->poll(VAR_2, VAR_0, VAR_1);
 FUNC_4(VAR_3);
 return VAR_4;
}
