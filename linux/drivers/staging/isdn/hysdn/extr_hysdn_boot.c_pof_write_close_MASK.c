
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct boot_data {int dummy; } ;
struct TYPE_5__ {scalar_t__ state; int debug_flags; int (* set_errlog_state ) (TYPE_1__*,int) ;struct boot_data* boot; } ;
typedef TYPE_1__ hysdn_card ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (struct boot_data*) ;
 int FUNC_2 (TYPE_1__*,int) ;

int
FUNC_3(hysdn_card *VAR_3)
{
 struct boot_data *VAR_4 = VAR_3->boot;

 if (!VAR_4)
  return (-VAR_1);

 VAR_3->boot = ((void*)0);
 FUNC_1(VAR_4);

 if (VAR_3->state == VAR_0)
  VAR_3->set_errlog_state(VAR_3, 1);

 if (VAR_3->debug_flags & VAR_2)
  FUNC_0(VAR_3, "POF close: success");

 return (0);
}
