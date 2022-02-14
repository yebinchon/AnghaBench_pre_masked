
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct task_status_struct {void* stat; void* resp; int open_rej_reason; int residual; } ;
struct sata_event_resp {int device_id; int port_id; int tag; int event; } ;
struct sas_task {int task_state_flags; int task_state_lock; int uldd_task; struct task_status_struct task_status; int dev; int lldd_task; } ;
struct pm8001_hba_info {struct pm8001_ccb_info* ccb_info; } ;
struct pm8001_device {int running_req; } ;
struct pm8001_ccb_info {struct pm8001_device* device; struct sas_task* task; } ;
 size_t VAR_0 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (struct pm8001_hba_info*,struct sas_task*,struct pm8001_ccb_info*,size_t) ;
 int FUNC_4 (struct pm8001_hba_info*,struct sas_task*,struct pm8001_ccb_info*,size_t) ;
 struct pm8001_device* FUNC_5 (struct pm8001_hba_info*,size_t) ;
 int FUNC_6 (struct pm8001_hba_info*,struct pm8001_device*,int const) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct pm8001_hba_info*,struct pm8001_device*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct pm8001_hba_info *VAR_22 , void *VAR_23)
{
 struct sas_task *VAR_24;
 struct task_status_struct *VAR_25;
 struct pm8001_ccb_info *VAR_26;
 struct pm8001_device *VAR_27;
 struct sata_event_resp *VAR_28 =
  (struct sata_event_resp *)(VAR_23 + 4);
 u32 VAR_29 = FUNC_2(VAR_28->event);
 u32 VAR_30 = FUNC_2(VAR_28->tag);
 u32 VAR_31 = FUNC_2(VAR_28->port_id);
 u32 VAR_32 = FUNC_2(VAR_28->device_id);
 unsigned long VAR_33;

 VAR_26 = &VAR_22->ccb_info[VAR_30];

 if (VAR_26) {
  VAR_24 = VAR_26->task;
  VAR_27 = VAR_26->device;
 } else {
  FUNC_0(VAR_22,
   FUNC_7("No CCB !!!. returning\n"));
 }
 if (VAR_29)
  FUNC_0(VAR_22,
   FUNC_7("SATA EVENT 0x%x\n", VAR_29));


 if (VAR_29 == VAR_0) {

  VAR_27 = FUNC_5(VAR_22, VAR_32);

  if (VAR_27)
   FUNC_8(VAR_22, VAR_27);
  return;
 }

 VAR_26 = &VAR_22->ccb_info[VAR_30];
 VAR_24 = VAR_26->task;
 VAR_27 = VAR_26->device;
 if (VAR_29)
  FUNC_0(VAR_22,
   FUNC_7("sata IO status 0x%x\n", VAR_29));
 if (FUNC_11(!VAR_24 || !VAR_24->lldd_task || !VAR_24->dev))
  return;
 VAR_25 = &VAR_24->task_status;
 FUNC_1(VAR_22, FUNC_7(
  "port_id:0x%x, device_id:0x%x, tag:0x%x, event:0x%x\n",
  VAR_31, VAR_32, VAR_30, VAR_29));
 switch (VAR_29) {
 case 141:
  FUNC_1(VAR_22, FUNC_7("IO_UNDERFLOW\n"));
  VAR_25->resp = VAR_17;
  VAR_25->stat = VAR_1;
  VAR_25->residual = 0;
  if (VAR_27)
   VAR_27->running_req--;
  break;
 case 139:
  FUNC_1(VAR_22,
   FUNC_7("IO_XFER_ERROR_BREAK\n"));
  VAR_25->resp = VAR_17;
  VAR_25->stat = VAR_4;
  break;
 case 135:
  FUNC_1(VAR_22,
   FUNC_7("IO_XFER_ERROR_PHY_NOT_READY\n"));
  VAR_25->resp = VAR_17;
  VAR_25->stat = VAR_6;
  VAR_25->open_rej_reason = VAR_12;
  break;
 case 144:
  FUNC_1(VAR_22,
   FUNC_7("IO_OPEN_CNX_ERROR_PROTOCOL_NOT"
   "_SUPPORTED\n"));
  VAR_25->resp = VAR_17;
  VAR_25->stat = VAR_6;
  VAR_25->open_rej_reason = VAR_10;
  break;
 case 142:
  FUNC_1(VAR_22,
   FUNC_7("IO_OPEN_CNX_ERROR_ZONE_VIOLATION\n"));
  VAR_25->resp = VAR_17;
  VAR_25->stat = VAR_6;
  VAR_25->open_rej_reason = VAR_13;
  break;
 case 147:
  FUNC_1(VAR_22,
   FUNC_7("IO_OPEN_CNX_ERROR_BREAK\n"));
  VAR_25->resp = VAR_17;
  VAR_25->stat = VAR_6;
  VAR_25->open_rej_reason = VAR_11;
  break;
 case 145:
  FUNC_1(VAR_22,
   FUNC_7("IO_OPEN_CNX_ERROR_IT_NEXUS_LOSS\n"));
  VAR_25->resp = VAR_21;
  VAR_25->stat = VAR_3;
  if (!VAR_24->uldd_task) {
   FUNC_6(VAR_22,
    VAR_27,
    145);
   VAR_25->resp = VAR_17;
   VAR_25->stat = VAR_15;
   FUNC_4(VAR_22, VAR_24, VAR_26, VAR_30);
   return;
  }
  break;
 case 148:
  FUNC_1(VAR_22,
   FUNC_7("IO_OPEN_CNX_ERROR_BAD_DESTINATION\n"));
  VAR_25->resp = VAR_21;
  VAR_25->stat = VAR_6;
  VAR_25->open_rej_reason = VAR_8;
  break;
 case 146:
  FUNC_1(VAR_22,
   FUNC_7("IO_OPEN_CNX_ERROR_CONNECTION_RATE_"
   "NOT_SUPPORTED\n"));
  VAR_25->resp = VAR_17;
  VAR_25->stat = VAR_6;
  VAR_25->open_rej_reason = VAR_9;
  break;
 case 143:
  FUNC_1(VAR_22,
         FUNC_7("IO_OPEN_CNX_ERROR_WRONG_DESTINATION\n"));
  VAR_25->resp = VAR_17;
  VAR_25->stat = VAR_6;
  VAR_25->open_rej_reason = VAR_14;
  break;
 case 138:
  FUNC_1(VAR_22,
   FUNC_7("IO_XFER_ERROR_NAK_RECEIVED\n"));
  VAR_25->resp = VAR_17;
  VAR_25->stat = VAR_5;
  break;
 case 136:
  FUNC_1(VAR_22,
   FUNC_7("IO_XFER_ERROR_PEER_ABORTED\n"));
  VAR_25->resp = VAR_17;
  VAR_25->stat = VAR_5;
  break;
 case 134:
  FUNC_1(VAR_22,
   FUNC_7("IO_XFER_ERROR_REJECTED_NCQ_MODE\n"));
  VAR_25->resp = VAR_17;
  VAR_25->stat = VAR_2;
  break;
 case 129:
  FUNC_1(VAR_22,
   FUNC_7("IO_XFER_OPEN_RETRY_TIMEOUT\n"));
  VAR_25->resp = VAR_17;
  VAR_25->stat = VAR_7;
  break;
 case 133:
  FUNC_1(VAR_22,
   FUNC_7("IO_XFER_ERROR_UNEXPECTED_PHASE\n"));
  VAR_25->resp = VAR_17;
  VAR_25->stat = VAR_7;
  break;
 case 131:
  FUNC_1(VAR_22,
   FUNC_7("IO_XFER_ERROR_XFER_RDY_OVERRUN\n"));
  VAR_25->resp = VAR_17;
  VAR_25->stat = VAR_7;
  break;
 case 132:
  FUNC_1(VAR_22,
         FUNC_7("IO_XFER_ERROR_XFER_RDY_NOT_EXPECTED\n"));
  VAR_25->resp = VAR_17;
  VAR_25->stat = VAR_7;
  break;
 case 137:
  FUNC_1(VAR_22,
   FUNC_7("IO_XFER_ERROR_OFFSET_MISMATCH\n"));
  VAR_25->resp = VAR_17;
  VAR_25->stat = VAR_7;
  break;
 case 130:
  FUNC_1(VAR_22,
   FUNC_7("IO_XFER_ERROR_XFER_ZERO_DATA_LEN\n"));
  VAR_25->resp = VAR_17;
  VAR_25->stat = VAR_7;
  break;
 case 140:
  FUNC_1(VAR_22,
   FUNC_7("IO_XFER_CMD_FRAME_ISSUED\n"));
  break;
 case 128:
  FUNC_1(VAR_22,
   FUNC_7("IO_XFER_PIO_SETUP_ERROR\n"));
  VAR_25->resp = VAR_17;
  VAR_25->stat = VAR_7;
  break;
 default:
  FUNC_1(VAR_22,
   FUNC_7("Unknown status 0x%x\n", VAR_29));

  VAR_25->resp = VAR_17;
  VAR_25->stat = VAR_7;
  break;
 }
 FUNC_9(&VAR_24->task_state_lock, VAR_33);
 VAR_24->task_state_flags &= ~VAR_20;
 VAR_24->task_state_flags &= ~VAR_16;
 VAR_24->task_state_flags |= VAR_19;
 if (FUNC_11((VAR_24->task_state_flags & VAR_18))) {
  FUNC_10(&VAR_24->task_state_lock, VAR_33);
  FUNC_0(VAR_22,
   FUNC_7("task 0x%p done with io_status 0x%x"
   " resp 0x%x stat 0x%x but aborted by upper layer!\n",
   VAR_24, VAR_29, VAR_25->resp, VAR_25->stat));
  FUNC_3(VAR_22, VAR_24, VAR_26, VAR_30);
 } else {
  FUNC_10(&VAR_24->task_state_lock, VAR_33);
  FUNC_4(VAR_22, VAR_24, VAR_26, VAR_30);
 }
}
