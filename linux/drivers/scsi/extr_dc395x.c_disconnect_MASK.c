
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ScsiReqBlk {int cmd; int state; int list; void* target_status; int retry_count; int scsi_phase; } ;
struct DeviceCtlBlk {struct ScsiReqBlk* active_srb; int srb_waiting_list; int target_lun; int target_id; int flag; } ;
struct TYPE_2__ {int delay_time; } ;
struct AdapterCtlBlk {scalar_t__ scan_devices; void* last_reset; struct DeviceCtlBlk* active_dcb; TYPE_1__ eeprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct AdapterCtlBlk*,int ) ;
 int FUNC_1 (struct AdapterCtlBlk*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (struct AdapterCtlBlk*,char*) ;
 int FUNC_3 (struct AdapterCtlBlk*,int ,int,int) ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct DeviceCtlBlk*,struct ScsiReqBlk*) ;
 void* VAR_21 ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct AdapterCtlBlk*,struct DeviceCtlBlk*,struct ScsiReqBlk*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct AdapterCtlBlk*) ;
 int FUNC_11 (struct AdapterCtlBlk*,int) ;

__attribute__((used)) static void FUNC_12(struct AdapterCtlBlk *VAR_22)
{
 struct DeviceCtlBlk *VAR_23 = VAR_22->active_dcb;
 struct ScsiReqBlk *VAR_24;

 if (!VAR_23) {
  FUNC_5(VAR_8, "disconnect: No such device\n");
  FUNC_9(500);

  VAR_22->last_reset =
      VAR_21 + VAR_6 / 2 +
      VAR_6 * VAR_22->eeprom.delay_time;
  FUNC_2(VAR_22, "disconnectEx");
  FUNC_1(VAR_22, VAR_19, VAR_5);
  return;
 }
 VAR_24 = VAR_23->active_srb;
 VAR_22->active_dcb = ((void*)0);
 FUNC_4(VAR_1, "disconnect: (0x%p)\n", VAR_24->cmd);

 VAR_24->scsi_phase = VAR_9;
 FUNC_2(VAR_22, "disconnect");
 FUNC_1(VAR_22, VAR_19, VAR_5);
 if (VAR_24->state & VAR_18) {
  FUNC_5(VAR_8,
   "disconnect: Unexpected reselection <%02i-%i>\n",
   VAR_23->target_id, VAR_23->target_lun);
  VAR_24->state = 0;
  FUNC_10(VAR_22);
 } else if (VAR_24->state & VAR_11) {
  VAR_23->flag &= ~VAR_0;
  VAR_22->last_reset = VAR_21 + VAR_6 / 2 + 1;
  FUNC_5(VAR_8, "disconnect: SRB_ABORT_SENT\n");
  FUNC_3(VAR_22, VAR_4, VAR_24->cmd, 1);
  FUNC_10(VAR_22);
 } else {
  if ((VAR_24->state & (VAR_17 + VAR_15))
      || !(VAR_24->
    state & (VAR_13 + VAR_12))) {





   if (VAR_24->state != VAR_17
       && VAR_24->state != VAR_15) {
    VAR_24->state = VAR_16;
    FUNC_5(VAR_7,
     "disconnect: (0x%p) Unexpected\n",
     VAR_24->cmd);
    VAR_24->target_status = VAR_10;
    goto disc1;
   } else {

    FUNC_4(VAR_2, "disconnect: (0x%p) "
     "<%02i-%i> SelTO\n", VAR_24->cmd,
     VAR_23->target_id, VAR_23->target_lun);
    if (VAR_24->retry_count++ > VAR_3
        || VAR_22->scan_devices) {
     VAR_24->target_status =
         VAR_10;
     goto disc1;
    }
    FUNC_6(VAR_23, VAR_24);
    FUNC_7(&VAR_24->list, &VAR_23->srb_waiting_list);
    FUNC_4(VAR_2,
     "disconnect: (0x%p) Retry\n",
     VAR_24->cmd);
    FUNC_11(VAR_22, VAR_6 / 20);
   }
  } else if (VAR_24->state & VAR_13) {
   u8 VAR_25 = FUNC_0(VAR_22, VAR_20);



   if (VAR_25 & 0x40) {
    FUNC_4(VAR_1, "disconnect: SCSI bus stat "
     " 0x%02x: ACK set! Other controllers?\n",
     VAR_25);

   } else
    FUNC_10(VAR_22);
  } else if (VAR_24->state & VAR_12) {
        disc1:



   FUNC_6(VAR_23, VAR_24);
   VAR_23->active_srb = ((void*)0);
   VAR_24->state = VAR_14;
   FUNC_8(VAR_22, VAR_23, VAR_24);
  }
 }
}
