
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_2__ {int tty; int work; } ;


 int FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (struct tty_struct*) ;
 struct tty_struct* FUNC_2 (int *,int *) ;

void FUNC_3(void)
{
 struct tty_struct *VAR_1;

 FUNC_0(&VAR_0.work);
 VAR_1 = FUNC_2(&VAR_0.tty, ((void*)0));
 if (VAR_1)
  FUNC_1(VAR_1);
}
