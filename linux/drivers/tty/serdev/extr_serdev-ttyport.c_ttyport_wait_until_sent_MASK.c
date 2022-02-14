
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct serport {struct tty_struct* tty; } ;
struct serdev_controller {int dummy; } ;


 struct serport* FUNC_0 (struct serdev_controller*) ;
 int FUNC_1 (struct tty_struct*,long) ;

__attribute__((used)) static void FUNC_2(struct serdev_controller *VAR_0, long VAR_1)
{
 struct serport *VAR_2 = FUNC_0(VAR_0);
 struct tty_struct *VAR_3 = VAR_2->tty;

 FUNC_1(VAR_3, VAR_1);
}
