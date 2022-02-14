
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct telemetry_evtmap {scalar_t__ evt_id; } ;
struct telemetry_evtlog {scalar_t__ telem_evtid; int telem_evtlog; } ;
struct telem_ssram_region {int * events; } ;
typedef enum telemetry_unit { ____Placeholder_telemetry_unit } telemetry_unit ;
struct TYPE_5__ {struct telemetry_evtmap* telem_evts; } ;
struct TYPE_4__ {struct telemetry_evtmap* telem_evts; } ;
struct TYPE_6__ {TYPE_2__ ioss_config; TYPE_1__ pss_config; } ;


 int VAR_0 ;

 int VAR_1 ;

 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,struct telem_ssram_region*,int) ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static int FUNC_2(enum telemetry_unit VAR_3,
        struct telemetry_evtlog *VAR_4,
        int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10 = VAR_5;
 struct telem_ssram_region VAR_11;
 struct telemetry_evtmap *VAR_12;

 switch (VAR_3) {
 case 128:
  VAR_12 = VAR_2->pss_config.telem_evts;
  break;

 case 129:
  VAR_12 = VAR_2->ioss_config.telem_evts;
  break;

 default:
  FUNC_0("Unknown Telemetry Unit Specified %d\n", VAR_3);
  return -VAR_0;
 }

 if (!VAR_6)
  VAR_10 = VAR_1;

 VAR_9 = FUNC_1(VAR_3, &VAR_11, VAR_10);
 if (VAR_9 < 0)
  return VAR_9;


 if ((!VAR_6) && (VAR_5 > VAR_9))
  return -VAR_0;

 if (VAR_6)
  for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
   VAR_4[VAR_7].telem_evtlog = VAR_11.events[VAR_7];
   VAR_4[VAR_7].telem_evtid = VAR_12[VAR_7].evt_id;
  }
 else
  for (VAR_7 = 0, VAR_10 = 0; (VAR_7 < VAR_9) && (VAR_10 < VAR_5);
       VAR_7++) {
   for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {

    if (VAR_12[VAR_7].evt_id ==
        VAR_4[VAR_8].telem_evtid) {
     VAR_4[VAR_8].telem_evtlog =
     VAR_11.events[VAR_7];
     VAR_10++;

     break;
    }
   }
  }

 return VAR_10;
}
