
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct hwrm_async_event_cmpl {int event_data1; int timestamp_hi; int timestamp_lo; int event_id; } ;
struct bnxt_link_info {int autoneg; int force_link_speed; } ;
struct bnxt_fw_health {int polling_dsecs; void* last_fw_reset_cnt; void* last_fw_heartbeat; int tmr_multiplier; int tmr_counter; int master; int enabled; } ;
struct TYPE_2__ {int port_id; } ;
struct bnxt {int fw_reset_max_dsecs; int current_interval; int dev; struct bnxt_fw_health* fw_health; int sp_event; int state; int fw_reset_min_dsecs; int fw_reset_timestamp; TYPE_1__ pf; struct bnxt_link_info link_info; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct bnxt*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct bnxt*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_7 (struct bnxt*,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct bnxt*) ;
 int FUNC_10 (struct bnxt*,struct hwrm_async_event_cmpl*) ;
 int VAR_15 ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,char*,int ,int ,void*,void*) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (struct bnxt*) ;
 int FUNC_16 (int ,int *) ;

__attribute__((used)) static int FUNC_17(struct bnxt *VAR_16,
        struct hwrm_async_event_cmpl *VAR_17)
{
 u16 VAR_18 = FUNC_11(VAR_17->event_id);


 switch (VAR_18) {
 case 133: {
  u32 VAR_19 = FUNC_12(VAR_17->event_data1);
  struct bnxt_link_info *VAR_20 = &VAR_16->link_info;

  if (FUNC_2(VAR_16))
   goto async_event_process_exit;


  if (!(VAR_20->autoneg & VAR_0) &&
      (VAR_19 & 0x20000)) {
   u16 VAR_21 = VAR_20->force_link_speed;
   u32 VAR_22 = FUNC_8(VAR_21);

   if (VAR_22 != VAR_14)
    FUNC_14(VAR_16->dev, "Link speed %d no longer supported\n",
         VAR_22);
  }
  FUNC_16(VAR_10, &VAR_16->sp_event);
 }

 case 132:
  FUNC_16(VAR_9, &VAR_16->sp_event);
  break;
 case 131:
  FUNC_16(VAR_7, &VAR_16->sp_event);
  break;
 case 130: {
  u32 VAR_23 = FUNC_12(VAR_17->event_data1);
  u16 VAR_24 = FUNC_0(VAR_23);

  if (FUNC_2(VAR_16))
   break;

  if (VAR_16->pf.port_id != VAR_24)
   break;

  FUNC_16(VAR_8, &VAR_16->sp_event);
  break;
 }
 case 128:
  if (FUNC_1(VAR_16))
   goto async_event_process_exit;
  FUNC_16(VAR_11, &VAR_16->sp_event);
  break;
 case 129: {
  u32 VAR_25 = FUNC_12(VAR_17->event_data1);

  VAR_16->fw_reset_timestamp = VAR_15;
  VAR_16->fw_reset_min_dsecs = VAR_17->timestamp_lo;
  if (!VAR_16->fw_reset_min_dsecs)
   VAR_16->fw_reset_min_dsecs = VAR_2;
  VAR_16->fw_reset_max_dsecs = FUNC_11(VAR_17->timestamp_hi);
  if (!VAR_16->fw_reset_max_dsecs)
   VAR_16->fw_reset_max_dsecs = VAR_1;
  if (FUNC_6(VAR_25)) {
   FUNC_14(VAR_16->dev, "Firmware fatal reset event received\n");
   FUNC_16(VAR_12, &VAR_16->state);
  } else {
   FUNC_14(VAR_16->dev, "Firmware non-fatal reset event received, max wait time %d msec\n",
        VAR_16->fw_reset_max_dsecs * 100);
  }
  FUNC_16(VAR_6, &VAR_16->sp_event);
  break;
 }
 case 134: {
  struct bnxt_fw_health *VAR_26 = VAR_16->fw_health;
  u32 VAR_27 = FUNC_12(VAR_17->event_data1);

  if (!VAR_26)
   goto async_event_process_exit;

  VAR_26->enabled = FUNC_4(VAR_27);
  VAR_26->master = FUNC_5(VAR_27);
  if (!VAR_26->enabled)
   break;

  if (FUNC_15(VAR_16))
   FUNC_13(VAR_16->dev, "Error recovery info: error recovery[%d], master[%d], reset count[0x%x], health status: 0x%x\n",
        VAR_26->enabled, VAR_26->master,
        FUNC_7(VAR_16,
        VAR_5),
        FUNC_7(VAR_16,
        VAR_3));
  VAR_26->tmr_multiplier =
   FUNC_3(VAR_26->polling_dsecs * VAR_13,
         VAR_16->current_interval * 10);
  VAR_26->tmr_counter = VAR_26->tmr_multiplier;
  VAR_26->last_fw_heartbeat =
   FUNC_7(VAR_16, VAR_4);
  VAR_26->last_fw_reset_cnt =
   FUNC_7(VAR_16, VAR_5);
  goto async_event_process_exit;
 }
 default:
  goto async_event_process_exit;
 }
 FUNC_9(VAR_16);
async_event_process_exit:
 FUNC_10(VAR_16, VAR_17);
 return 0;
}
