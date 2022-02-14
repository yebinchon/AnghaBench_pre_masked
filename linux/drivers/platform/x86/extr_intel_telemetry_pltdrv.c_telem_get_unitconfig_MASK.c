
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct telemetry_unit_config {int dummy; } ;
typedef enum telemetry_unit { ____Placeholder_telemetry_unit } telemetry_unit ;
struct TYPE_2__ {struct telemetry_unit_config ioss_config; struct telemetry_unit_config pss_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static inline int FUNC_0(enum telemetry_unit VAR_4,
         struct telemetry_unit_config **VAR_5)
{
 if (VAR_4 == VAR_2)
  *VAR_5 = &(VAR_3->pss_config);
 else if (VAR_4 == VAR_1)
  *VAR_5 = &(VAR_3->ioss_config);
 else
  return -VAR_0;

 return 0;

}
