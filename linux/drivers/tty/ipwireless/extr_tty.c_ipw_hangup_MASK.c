
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct ipw_tty* driver_data; } ;
struct TYPE_2__ {scalar_t__ count; } ;
struct ipw_tty {int ipw_tty_mutex; TYPE_1__ port; } ;


 int FUNC_0 (struct ipw_tty*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_0)
{
 struct ipw_tty *VAR_1 = VAR_0->driver_data;

 if (!VAR_1)
  return;

 FUNC_1(&VAR_1->ipw_tty_mutex);
 if (VAR_1->port.count == 0) {
  FUNC_2(&VAR_1->ipw_tty_mutex);
  return;
 }

 FUNC_0(VAR_1);

 FUNC_2(&VAR_1->ipw_tty_mutex);
}
