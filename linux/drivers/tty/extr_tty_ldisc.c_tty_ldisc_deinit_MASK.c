
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int * ldisc; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct tty_struct *VAR_0)
{

 if (VAR_0->ldisc)
  FUNC_0(VAR_0->ldisc);
 VAR_0->ldisc = ((void*)0);
}
