
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int flags; } ;
struct tty_port {int console; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct tty_port*,struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct tty_port*,struct tty_struct*,struct file*) ;
 int FUNC_3 (struct tty_port*,struct tty_struct*) ;
 int FUNC_4 (struct tty_port*,int *) ;

void FUNC_5(struct tty_port *VAR_1, struct tty_struct *VAR_2,
       struct file *VAR_3)
{
 if (FUNC_2(VAR_1, VAR_2, VAR_3) == 0)
  return;
 FUNC_3(VAR_1, VAR_2);
 if (!VAR_1->console)
  FUNC_0(VAR_0, &VAR_2->flags);
 FUNC_1(VAR_1, VAR_2);
 FUNC_4(VAR_1, ((void*)0));
}
