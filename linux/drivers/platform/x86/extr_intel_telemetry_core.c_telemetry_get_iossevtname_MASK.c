
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct telemetry_unit_config {int ssram_evts_used; TYPE_2__* telem_evts; } ;
typedef enum telemetry_unit { ____Placeholder_telemetry_unit } telemetry_unit ;
struct TYPE_6__ {TYPE_1__* plt_config; } ;
struct TYPE_5__ {char* name; } ;
struct TYPE_4__ {struct telemetry_unit_config ioss_config; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(enum telemetry_unit VAR_2,
         const char **VAR_3, int VAR_4)
{
 struct telemetry_unit_config VAR_5;
 int VAR_6;

 if (!(VAR_1.plt_config))
  return -VAR_0;

 VAR_5 = VAR_1.plt_config->ioss_config;

 if (VAR_4 > VAR_5.ssram_evts_used)
  VAR_4 = VAR_5.ssram_evts_used;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  VAR_3[VAR_6] = VAR_5.telem_evts[VAR_6].name;

 return 0;

}
