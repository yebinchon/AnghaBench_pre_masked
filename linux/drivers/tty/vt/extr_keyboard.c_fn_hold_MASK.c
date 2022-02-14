
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct tty_struct* tty; } ;
struct vc_data {TYPE_1__ port; } ;
struct tty_struct {scalar_t__ stopped; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_1)
{
 struct tty_struct *VAR_2 = VAR_1->port.tty;

 if (VAR_0 || !VAR_2)
  return;






 if (VAR_2->stopped)
  FUNC_0(VAR_2);
 else
  FUNC_1(VAR_2);
}
