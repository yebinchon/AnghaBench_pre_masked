
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct tty_struct* link; } ;


 int FUNC_0 (struct tty_struct*,char*) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*,struct tty_struct*) ;
 int FUNC_3 (struct tty_struct*,struct tty_struct*) ;

void FUNC_4(struct tty_struct *VAR_0)
{
 struct tty_struct *VAR_1 = VAR_0->link;






 FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_0);
 if (VAR_1)
  FUNC_1(VAR_1);
 FUNC_3(VAR_0, VAR_1);




 FUNC_0(VAR_0, "released\n");
}
