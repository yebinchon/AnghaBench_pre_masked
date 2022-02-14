
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int * ldisc; int ldisc_sem; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct tty_struct*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_0)
{
 FUNC_0(&VAR_0->ldisc_sem);
 if (!VAR_0->ldisc)
  return;



 FUNC_1(VAR_0, VAR_0->ldisc);
 FUNC_2(VAR_0->ldisc);

 VAR_0->ldisc = ((void*)0);
}
