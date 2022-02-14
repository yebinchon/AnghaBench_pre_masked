
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int ldisc_sem; struct tty_ldisc* ldisc; } ;
struct tty_ldisc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

struct tty_ldisc *FUNC_2(struct tty_struct *VAR_1)
{
 struct tty_ldisc *VAR_2;

 FUNC_0(&VAR_1->ldisc_sem, VAR_0);
 VAR_2 = VAR_1->ldisc;
 if (!VAR_2)
  FUNC_1(&VAR_1->ldisc_sem);
 return VAR_2;
}
