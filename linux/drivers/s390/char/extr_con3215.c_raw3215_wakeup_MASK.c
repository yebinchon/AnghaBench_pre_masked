
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct raw3215_info {int port; } ;


 int FUNC_0 (struct tty_struct*) ;
 struct tty_struct* FUNC_1 (int *) ;
 int FUNC_2 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0)
{
 struct raw3215_info *VAR_1 = (struct raw3215_info *) VAR_0;
 struct tty_struct *VAR_2;

 VAR_2 = FUNC_1(&VAR_1->port);
 if (VAR_2) {
  FUNC_2(VAR_2);
  FUNC_0(VAR_2);
 }
}
