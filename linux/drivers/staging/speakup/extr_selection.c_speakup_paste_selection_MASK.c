
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_2__ {int work; int tty; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,struct tty_struct*) ;
 int FUNC_1 (int ,int *) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (struct tty_struct*) ;

int FUNC_4(struct tty_struct *VAR_3)
{
 FUNC_2(VAR_3);
 if (FUNC_0(&VAR_2.tty, ((void*)0), VAR_3)) {
  FUNC_3(VAR_3);
  return -VAR_0;
 }

 FUNC_1(VAR_1, &VAR_2.work);
 return 0;
}
