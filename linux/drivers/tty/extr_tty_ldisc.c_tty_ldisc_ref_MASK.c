
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int ldisc_sem; struct tty_ldisc* ldisc; } ;
struct tty_ldisc {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

struct tty_ldisc *FUNC_2(struct tty_struct *VAR_0)
{
 struct tty_ldisc *VAR_1 = ((void*)0);

 if (FUNC_0(&VAR_0->ldisc_sem)) {
  VAR_1 = VAR_0->ldisc;
  if (!VAR_1)
   FUNC_1(&VAR_0->ldisc_sem);
 }
 return VAR_1;
}
