
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct telemetry_evtconfig {int num_evts; int period; int* evtmap; } ;
typedef enum telemetry_action { ____Placeholder_telemetry_action } telemetry_action ;
struct TYPE_5__ {int ssram_evts_used; int curr_period; TYPE_1__* telem_evts; } ;
struct TYPE_6__ {TYPE_2__ ioss_config; } ;
struct TYPE_4__ {int evt_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,int ,int*,int ,int*,int ) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (int,int) ;
 TYPE_3__* VAR_8 ;

__attribute__((used)) static int FUNC_8(struct telemetry_evtconfig VAR_9,
      enum telemetry_action VAR_10)
{
 u8 VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15;
 u32 *VAR_16;
 u32 VAR_17;

 VAR_11 = VAR_9.num_evts;
 VAR_12 = VAR_9.period;
 VAR_16 = VAR_9.evtmap;


 VAR_13 = FUNC_5(VAR_4,
        VAR_0, ((void*)0), 0,
        &VAR_17, VAR_3);
 if (VAR_13) {
  FUNC_6("IOSS TELEM_CTRL Read Failed\n");
  return VAR_13;
 }


 FUNC_2(VAR_17);

 VAR_13 = FUNC_5(VAR_4,
        VAR_1,
        (u8 *)&VAR_17,
        VAR_2,
        ((void*)0), 0);
 if (VAR_13) {
  FUNC_6("IOSS TELEM_CTRL Event Disable Write Failed\n");
  return VAR_13;
 }



 if (VAR_10 == VAR_6) {

  FUNC_0(VAR_17);

  VAR_13 = FUNC_5(VAR_4,
         VAR_1,
         (u8 *)&VAR_17,
         VAR_2,
         ((void*)0), 0);
  if (VAR_13) {
   FUNC_6("IOSS TELEM_CTRL Event Disable Write Failed\n");
   return VAR_13;
  }
  VAR_8->ioss_config.ssram_evts_used = 0;


  for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++) {
   if (FUNC_7(
       VAR_8->ioss_config.telem_evts[VAR_15].evt_id,
       VAR_15)) {
    FUNC_6("IOSS TELEM_RESET Fail for data: %x\n",
    VAR_8->ioss_config.telem_evts[VAR_15].evt_id);
    continue;
   }
   VAR_8->ioss_config.ssram_evts_used++;
  }
 }


 if (VAR_10 == VAR_7) {

  FUNC_0(VAR_17);

  VAR_13 = FUNC_5(VAR_4,
         VAR_1,
         (u8 *)&VAR_17,
         VAR_2,
         ((void*)0), 0);
  if (VAR_13) {
   FUNC_6("IOSS TELEM_CTRL Event Disable Write Failed\n");
   return VAR_13;
  }
  VAR_8->ioss_config.ssram_evts_used = 0;


  for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
   VAR_8->ioss_config.telem_evts[VAR_14].evt_id =
   VAR_16[VAR_14];

   if (FUNC_7(
       VAR_8->ioss_config.telem_evts[VAR_14].evt_id,
       VAR_14)) {
    FUNC_6("IOSS TELEM_UPDATE Fail for Evt%x\n",
     VAR_16[VAR_14]);
    continue;
   }
   VAR_8->ioss_config.ssram_evts_used++;
  }
 }


 if (VAR_10 == VAR_5) {

  for (VAR_14 = VAR_8->ioss_config.ssram_evts_used, VAR_15 = 0;
       VAR_15 < VAR_11; VAR_14++, VAR_15++) {
   VAR_8->ioss_config.telem_evts[VAR_14].evt_id =
   VAR_16[VAR_15];

   if (FUNC_7(
       VAR_8->ioss_config.telem_evts[VAR_14].evt_id,
       VAR_14)) {
    FUNC_6("IOSS TELEM_ADD Fail for Event %x\n",
     VAR_16[VAR_15]);
    continue;
   }
   VAR_8->ioss_config.ssram_evts_used++;
  }
 }


 FUNC_1(VAR_17);
 FUNC_4(VAR_17);
 FUNC_3(VAR_17);
 VAR_17 |= VAR_12;

 VAR_13 = FUNC_5(VAR_4,
        VAR_1,
        (u8 *)&VAR_17,
        VAR_2, ((void*)0), 0);
 if (VAR_13) {
  FUNC_6("IOSS TELEM_CTRL Event Enable Write Failed\n");
  return VAR_13;
 }

 VAR_8->ioss_config.curr_period = VAR_12;

 return 0;
}
