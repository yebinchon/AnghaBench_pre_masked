
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmi_system_id {TYPE_1__* matches; int driver_data; } ;
struct TYPE_2__ {scalar_t__ substr; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(const struct dmi_system_id *VAR_1)
{
 char *VAR_2;

 VAR_0 = VAR_1->driver_data;

 VAR_2 = (char *)VAR_1->matches[1].substr;
 if (FUNC_2(FUNC_1(VAR_2, "ET2012", 6) == 0))
  FUNC_0();

 return 1;
}
