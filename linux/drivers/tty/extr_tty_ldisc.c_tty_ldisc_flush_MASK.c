
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct tty_ldisc {int dummy; } ;


 int FUNC_0 (struct tty_struct*,struct tty_ldisc*) ;
 int FUNC_1 (struct tty_ldisc*) ;
 struct tty_ldisc* FUNC_2 (struct tty_struct*) ;

void FUNC_3(struct tty_struct *VAR_0)
{
 struct tty_ldisc *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_0, VAR_1);
 if (VAR_1)
  FUNC_1(VAR_1);
}
