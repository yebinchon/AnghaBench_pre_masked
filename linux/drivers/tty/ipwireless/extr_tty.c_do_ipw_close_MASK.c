
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int * driver_data; } ;
struct TYPE_2__ {scalar_t__ count; struct tty_struct* tty; } ;
struct ipw_tty {scalar_t__ tty_type; int network; TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ipw_tty *VAR_1)
{
 VAR_1->port.count--;

 if (VAR_1->port.count == 0) {
  struct tty_struct *VAR_2 = VAR_1->port.tty;

  if (VAR_2 != ((void*)0)) {
   VAR_1->port.tty = ((void*)0);
   VAR_2->driver_data = ((void*)0);

   if (VAR_1->tty_type == VAR_0)
    FUNC_0(VAR_1->network);
  }
 }
}
