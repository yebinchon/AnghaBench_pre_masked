
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int termios_rwsem; scalar_t__ link; int disc_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_0)
{
 FUNC_0(&VAR_0->termios_rwsem);
 FUNC_3(VAR_0->disc_data);
 FUNC_1(VAR_0);

 if (VAR_0->link)
  FUNC_2(VAR_0);
 FUNC_4(&VAR_0->termios_rwsem);
}
