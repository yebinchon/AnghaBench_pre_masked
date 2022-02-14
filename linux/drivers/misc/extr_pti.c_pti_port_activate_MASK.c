
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct tty_port {TYPE_1__* tty; } ;
struct TYPE_2__ {scalar_t__ index; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct tty_port *VAR_2, struct tty_struct *VAR_3)
{
 if (VAR_2->tty->index == VAR_0)
  FUNC_0(&VAR_1);
 return 0;
}
