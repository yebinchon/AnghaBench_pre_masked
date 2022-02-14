
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vbus_drop_end; } ;
struct ab8500_charger {TYPE_1__ flags; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct ab8500_charger *VAR_1,
         int VAR_2)
{
 if (VAR_2 == VAR_0)
  return !VAR_1->flags.vbus_drop_end;
 else
  return 1;
}
