
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct tty_ldisc* ldisc; int ldisc_sem; } ;
struct tty_ldisc {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct tty_ldisc*) ;
 int VAR_0 ;
 int FUNC_2 (struct tty_ldisc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tty_struct*,struct tty_ldisc*) ;
 struct tty_ldisc* FUNC_5 (struct tty_struct*,int) ;
 int FUNC_6 (struct tty_struct*,struct tty_ldisc*) ;
 int FUNC_7 (struct tty_ldisc*) ;
 int FUNC_8 (struct tty_struct*,int) ;

int FUNC_9(struct tty_struct *VAR_1, int VAR_2)
{
 struct tty_ldisc *VAR_3;
 int VAR_4;

 FUNC_3(&VAR_1->ldisc_sem);
 VAR_3 = FUNC_5(VAR_1, VAR_2);
 if (FUNC_1(VAR_3)) {
  FUNC_0(VAR_2 == VAR_0);
  return FUNC_2(VAR_3);
 }

 if (VAR_1->ldisc) {
  FUNC_4(VAR_1, VAR_1->ldisc);
  FUNC_7(VAR_1->ldisc);
 }


 VAR_1->ldisc = VAR_3;
 FUNC_8(VAR_1, VAR_2);
 VAR_4 = FUNC_6(VAR_1, VAR_1->ldisc);
 if (VAR_4) {
  FUNC_7(VAR_1->ldisc);
  VAR_1->ldisc = ((void*)0);
 }
 return VAR_4;
}
