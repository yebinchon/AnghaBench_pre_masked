
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct tty_ldisc {int dummy; } ;


 int FUNC_0 (struct tty_struct*,unsigned long) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_ldisc*) ;
 struct tty_ldisc* FUNC_3 (struct tty_struct*) ;

int FUNC_4(struct tty_struct *VAR_0, unsigned long VAR_1)
{
 struct tty_ldisc *VAR_2;
 int VAR_3 = FUNC_1(VAR_0);
 if (VAR_3)
  return VAR_3;

 VAR_2 = FUNC_3(VAR_0);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_2(VAR_2);
 return VAR_3;
}
