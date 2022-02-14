
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
struct TYPE_6__ {TYPE_2__ pss_config; } ;
struct TYPE_4__ {int evt_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int ,int ,int*,int*) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (int,int) ;
 TYPE_3__* VAR_5 ;

__attribute__((used)) static int FUNC_8(struct telemetry_evtconfig VAR_6,
     enum telemetry_action VAR_7)
{
 u8 VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12;
 u32 *VAR_13;
 u32 VAR_14;

 VAR_8 = VAR_6.num_evts;
 VAR_9 = VAR_6.period;
 VAR_13 = VAR_6.evtmap;



 VAR_10 = FUNC_5(VAR_0,
          0, 0, ((void*)0), &VAR_14);
 if (VAR_10) {
  FUNC_6("PSS TELEM_CTRL Read Failed\n");
  return VAR_10;
 }


 FUNC_2(VAR_14);
 VAR_10 = FUNC_5(VAR_1,
          0, 0, &VAR_14, ((void*)0));
 if (VAR_10) {
  FUNC_6("PSS TELEM_CTRL Event Disable Write Failed\n");
  return VAR_10;
 }


 if (VAR_7 == VAR_3) {

  FUNC_0(VAR_14);

  VAR_10 = FUNC_5(
    VAR_1,
    0, 0, &VAR_14, ((void*)0));
  if (VAR_10) {
   FUNC_6("PSS TELEM_CTRL Event Disable Write Failed\n");
   return VAR_10;
  }
  VAR_5->pss_config.ssram_evts_used = 0;

  for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
   if (FUNC_7(
       VAR_5->pss_config.telem_evts[VAR_12].evt_id,
       VAR_12)) {
    FUNC_6("PSS TELEM_RESET Fail for Event %x\n",
    VAR_5->pss_config.telem_evts[VAR_12].evt_id);
    continue;
   }
   VAR_5->pss_config.ssram_evts_used++;
  }
 }


 if (VAR_7 == VAR_4) {

  FUNC_0(VAR_14);

  VAR_10 = FUNC_5(
    VAR_1,
    0, 0, &VAR_14, ((void*)0));
  if (VAR_10) {
   FUNC_6("PSS TELEM_CTRL Event Disable Write Failed\n");
   return VAR_10;
  }
  VAR_5->pss_config.ssram_evts_used = 0;


  for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
   VAR_5->pss_config.telem_evts[VAR_11].evt_id =
   VAR_13[VAR_11];

   if (FUNC_7(
       VAR_5->pss_config.telem_evts[VAR_11].evt_id,
       VAR_11)) {
    FUNC_6("PSS TELEM_UPDATE Fail for Event %x\n",
     VAR_13[VAR_11]);
    continue;
   }
   VAR_5->pss_config.ssram_evts_used++;
  }
 }


 if (VAR_7 == VAR_2) {

  for (VAR_11 = VAR_5->pss_config.ssram_evts_used, VAR_12 = 0;
       VAR_12 < VAR_8; VAR_11++, VAR_12++) {

   VAR_5->pss_config.telem_evts[VAR_11].evt_id =
   VAR_13[VAR_12];

   if (FUNC_7(
       VAR_5->pss_config.telem_evts[VAR_11].evt_id,
       VAR_11)) {
    FUNC_6("PSS TELEM_ADD Fail for Event %x\n",
     VAR_13[VAR_12]);
    continue;
   }
   VAR_5->pss_config.ssram_evts_used++;
  }
 }


 FUNC_1(VAR_14);
 FUNC_4(VAR_14);
 FUNC_3(VAR_14);
 VAR_14 |= VAR_9;

 VAR_10 = FUNC_5(VAR_1,
          0, 0, &VAR_14, ((void*)0));
 if (VAR_10) {
  FUNC_6("PSS TELEM_CTRL Event Enable Write Failed\n");
  return VAR_10;
 }

 VAR_5->pss_config.curr_period = VAR_9;

 return 0;
}
