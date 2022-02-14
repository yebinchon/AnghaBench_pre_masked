
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct telemetry_evtconfig {int period; void* num_evts; int * evtmap; } ;
struct TYPE_4__ {int curr_period; } ;
struct TYPE_5__ {int curr_period; } ;
struct TYPE_6__ {TYPE_1__ ioss_config; TYPE_2__ pss_config; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct telemetry_evtconfig,struct telemetry_evtconfig,int ) ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static int FUNC_2(u8 VAR_2, u8 VAR_3,
        u32 *VAR_4, u32 *VAR_5)
{
 struct telemetry_evtconfig VAR_6, VAR_7;
 int VAR_8;

 VAR_6.evtmap = VAR_4;
 VAR_6.num_evts = VAR_2;
 VAR_6.period = VAR_1->pss_config.curr_period;

 VAR_7.evtmap = VAR_5;
 VAR_7.num_evts = VAR_3;
 VAR_7.period = VAR_1->ioss_config.curr_period;

 VAR_8 = FUNC_1(VAR_6, VAR_7,
     VAR_0);
 if (VAR_8)
  FUNC_0("TELEMETRY ADD Failed\n");

 return VAR_8;
}
