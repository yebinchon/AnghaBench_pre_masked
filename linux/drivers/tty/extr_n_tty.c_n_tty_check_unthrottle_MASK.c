
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int link; TYPE_1__* driver; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tty_struct*,int ) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (struct tty_struct*,int ) ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct tty_struct *VAR_3)
{
 if (VAR_3->driver->type == VAR_0) {
  if (FUNC_1(VAR_3) > VAR_1)
   return;
  FUNC_2(VAR_3);
  FUNC_5(VAR_3->link);
  return;
 }
 while (1) {
  int VAR_4;
  FUNC_3(VAR_3, VAR_2);
  if (FUNC_1(VAR_3) > VAR_1)
   break;
  FUNC_2(VAR_3);
  VAR_4 = FUNC_4(VAR_3);
  if (!VAR_4)
   break;
 }
 FUNC_0(VAR_3, 0);
}
