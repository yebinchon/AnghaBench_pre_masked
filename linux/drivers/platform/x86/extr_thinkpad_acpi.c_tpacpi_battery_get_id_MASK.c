
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ battery_force_primary; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_2(const char *VAR_3)
{

 if (FUNC_1(VAR_3, "BAT0") == 0 ||
     VAR_2.battery_force_primary)
  return VAR_0;
 if (FUNC_1(VAR_3, "BAT1") == 0)
  return VAR_1;





 FUNC_0("unknown battery %s, assuming primary", VAR_3);
 return VAR_0;
}
