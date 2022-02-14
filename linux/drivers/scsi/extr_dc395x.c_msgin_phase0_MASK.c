
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ScsiReqBlk {int* msgin_buf; int state; int msg_count; int * msgout_buf; int cmd; int total_xfer_length; } ;
struct DeviceCtlBlk {int identify_msg; int flag; int target_lun; int target_id; } ;
struct AdapterCtlBlk {scalar_t__ msg_len; struct DeviceCtlBlk* active_dcb; } ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct AdapterCtlBlk*,int ) ;
 int FUNC_1 (struct AdapterCtlBlk*,int ,int) ;
 int FUNC_2 (struct AdapterCtlBlk*,int ,int ) ;

 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;



 int VAR_8 ;


 int VAR_9 ;

 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct AdapterCtlBlk*,struct ScsiReqBlk*) ;
 scalar_t__ FUNC_5 (int*,scalar_t__) ;
 struct ScsiReqBlk* FUNC_6 (struct AdapterCtlBlk*,struct DeviceCtlBlk*,int) ;
 int FUNC_7 (struct AdapterCtlBlk*,struct ScsiReqBlk*) ;
 int FUNC_8 (struct AdapterCtlBlk*,struct ScsiReqBlk*) ;
 int FUNC_9 (struct AdapterCtlBlk*,struct ScsiReqBlk*) ;
 int FUNC_10 (struct AdapterCtlBlk*,struct ScsiReqBlk*) ;
 int FUNC_11 (struct AdapterCtlBlk*,struct ScsiReqBlk*) ;

__attribute__((used)) static void FUNC_12(struct AdapterCtlBlk *VAR_18, struct ScsiReqBlk *VAR_19,
  u16 *VAR_20)
{
 struct DeviceCtlBlk *VAR_21 = VAR_18->active_dcb;
 FUNC_3(VAR_1, "msgin_phase0: (0x%p)\n", VAR_19->cmd);

 VAR_19->msgin_buf[VAR_18->msg_len++] = FUNC_0(VAR_18, VAR_17);
 if (FUNC_5(VAR_19->msgin_buf, VAR_18->msg_len)) {

  switch (VAR_19->msgin_buf[0]) {
  case 136:
   VAR_19->state = VAR_10;
   break;

  case 128:
  case 134:
  case 131:
   VAR_19 =
       FUNC_6(VAR_18, VAR_21,
           VAR_19->msgin_buf[1]);
   break;

  case 133:
   FUNC_1(VAR_18, VAR_16,
           VAR_3 | VAR_4);

   if (VAR_19->state & VAR_11) {
    FUNC_8(VAR_18, VAR_19);
    break;
   }

   if (VAR_19->state & VAR_12) {
    FUNC_9(VAR_18, VAR_19);
    break;
   }
   FUNC_4(VAR_18, VAR_19);

   break;

  case 135:

   if (VAR_19->msgin_buf[1] == 3
       && VAR_19->msgin_buf[2] == VAR_5) {
    FUNC_10(VAR_18, VAR_19);
    break;
   }

   if (VAR_19->msgin_buf[1] == 2
       && VAR_19->msgin_buf[2] == VAR_6
       && VAR_19->msgin_buf[3] <= 2) {
    FUNC_11(VAR_18, VAR_19);
    break;
   }
   FUNC_7(VAR_18, VAR_19);
   break;

  case 132:

   FUNC_3(VAR_1, "msgin_phase0: Ignore Wide Residual!\n");
   break;

  case 137:

   break;

  case 129:




   FUNC_3(VAR_1, "msgin_phase0: (0x%p) "
    "SAVE POINTER rem=%i Ignore\n",
    VAR_19->cmd, VAR_19->total_xfer_length);
   break;

  case 130:
   FUNC_3(VAR_1, "msgin_phase0: RESTORE POINTER. Ignore\n");
   break;

  case 138:
   FUNC_3(VAR_1, "msgin_phase0: (0x%p) "
    "<%02i-%i> ABORT msg\n",
    VAR_19->cmd, VAR_21->target_id,
    VAR_21->target_lun);
   VAR_21->flag |= VAR_0;
   FUNC_4(VAR_18, VAR_19);
   break;

  default:

   if (VAR_19->msgin_buf[0] & VAR_7) {
    FUNC_3(VAR_1, "msgin_phase0: Identify msg\n");
    VAR_19->msg_count = 1;
    VAR_19->msgout_buf[0] = VAR_21->identify_msg;
    VAR_2;
    VAR_19->state |= VAR_14;

   }
   FUNC_7(VAR_18, VAR_19);
  }


  VAR_19->state &= ~VAR_13;
  VAR_18->msg_len = 0;
 }
 *VAR_20 = VAR_8;
 FUNC_1(VAR_18, VAR_16, VAR_4);
 FUNC_2(VAR_18, VAR_15, VAR_9);
}
