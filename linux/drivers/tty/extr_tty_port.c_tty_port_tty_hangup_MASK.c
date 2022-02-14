
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct tty_port {int dummy; } ;


 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*) ;
 struct tty_struct* FUNC_3 (struct tty_port*) ;

void FUNC_4(struct tty_port *VAR_0, bool VAR_1)
{
 struct tty_struct *VAR_2 = FUNC_3(VAR_0);

 if (VAR_2 && (!VAR_1 || !FUNC_0(VAR_2)))
  FUNC_1(VAR_2);
 FUNC_2(VAR_2);
}
