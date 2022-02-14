
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* link; scalar_t__ stopped; } ;
struct TYPE_2__ {int port; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_0)
{
 if (VAR_0->stopped)
  return 0;
 return FUNC_0(VAR_0->link->port);
}
