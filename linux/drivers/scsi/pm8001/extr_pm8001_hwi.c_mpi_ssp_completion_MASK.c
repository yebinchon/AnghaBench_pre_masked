
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct task_status_struct {size_t residual; void* stat; void* resp; void* open_rej_reason; } ;
struct ssp_response_iu {int status; } ;
struct ssp_completion_resp {struct ssp_response_iu ssp_resp_iu; int param; int tag; int status; } ;
struct sas_task {int task_state_flags; int (* task_done ) (struct sas_task*) ;int task_state_lock; int uldd_task; TYPE_1__* dev; struct task_status_struct task_status; int lldd_task; } ;
struct pm8001_hba_info {int dev; struct pm8001_ccb_info* ccb_info; } ;
struct pm8001_device {int running_req; } ;
struct pm8001_ccb_info {struct sas_task* task; struct pm8001_device* device; scalar_t__ open_retry; } ;
struct TYPE_2__ {int sas_addr; } ;
 size_t VAR_0 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_2 (int ) ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct pm8001_hba_info*,struct sas_task*,struct pm8001_ccb_info*,size_t) ;
 int FUNC_6 (struct pm8001_hba_info*,struct pm8001_device*,int const) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ,struct sas_task*,struct ssp_response_iu*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct sas_task*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static void
FUNC_13(struct pm8001_hba_info *VAR_20 , void *VAR_21)
{
 struct sas_task *VAR_22;
 struct pm8001_ccb_info *VAR_23;
 unsigned long VAR_24;
 u32 VAR_25;
 u32 VAR_26;
 u32 VAR_27;
 struct ssp_completion_resp *VAR_28;
 struct task_status_struct *VAR_29;
 struct ssp_response_iu *VAR_30;
 struct pm8001_device *VAR_31;
 VAR_28 = (struct ssp_completion_resp *)(VAR_21 + 4);
 VAR_25 = FUNC_3(VAR_28->status);
 VAR_27 = FUNC_3(VAR_28->tag);
 VAR_23 = &VAR_20->ccb_info[VAR_27];
 if ((VAR_25 == 151) && VAR_23->open_retry) {

  VAR_23->open_retry = 0;
  return;
 }
 VAR_31 = VAR_23->device;
 VAR_26 = FUNC_3(VAR_28->param);

 VAR_22 = VAR_23->task;

 if (VAR_25 && VAR_25 != 135)
  FUNC_0(VAR_20,
   FUNC_7("sas IO status 0x%x\n", VAR_25));
 if (FUNC_12(!VAR_22 || !VAR_22->lldd_task || !VAR_22->dev))
  return;
 VAR_29 = &VAR_22->task_status;

 if ((VAR_25 != 137) && (VAR_25 != VAR_0) &&
  (VAR_25 != 135))
  FUNC_0(VAR_20,
   FUNC_7("SAS Address of IO Failure Drive:"
   "%016llx", FUNC_2(VAR_22->dev->sas_addr)));

 switch (VAR_25) {
 case 137:
  FUNC_1(VAR_20, FUNC_7("IO_SUCCESS"
   ",param = %d\n", VAR_26));
  if (VAR_26 == 0) {
   VAR_29->resp = VAR_15;
   VAR_29->stat = VAR_1;
  } else {
   VAR_29->resp = VAR_15;
   VAR_29->stat = VAR_13;
   VAR_29->residual = VAR_26;
   VAR_30 = &VAR_28->ssp_resp_iu;
   FUNC_8(VAR_20->dev, VAR_22, VAR_30);
  }
  if (VAR_31)
   VAR_31->running_req--;
  break;
 case 151:
  FUNC_1(VAR_20,
   FUNC_7("IO_ABORTED IOMB Tag\n"));
  VAR_29->resp = VAR_15;
  VAR_29->stat = VAR_2;
  break;
 case 135:

  FUNC_1(VAR_20, FUNC_7("IO_UNDERFLOW"
   ",param = %d\n", VAR_26));
  VAR_29->resp = VAR_15;
  VAR_29->stat = VAR_3;
  VAR_29->residual = VAR_26;
  if (VAR_31)
   VAR_31->running_req--;
  break;
 case 148:
  FUNC_1(VAR_20,
   FUNC_7("IO_NO_DEVICE\n"));
  VAR_29->resp = VAR_19;
  VAR_29->stat = VAR_12;
  break;
 case 133:
  FUNC_1(VAR_20,
   FUNC_7("IO_XFER_ERROR_BREAK\n"));
  VAR_29->resp = VAR_15;
  VAR_29->stat = VAR_5;

  VAR_29->open_rej_reason = VAR_9;
  break;
 case 129:
  FUNC_1(VAR_20,
   FUNC_7("IO_XFER_ERROR_PHY_NOT_READY\n"));
  VAR_29->resp = VAR_15;
  VAR_29->stat = VAR_5;
  VAR_29->open_rej_reason = VAR_9;
  break;
 case 142:
  FUNC_1(VAR_20,
  FUNC_7("IO_OPEN_CNX_ERROR_PROTOCOL_NOT_SUPPORTED\n"));
  VAR_29->resp = VAR_15;
  VAR_29->stat = VAR_5;
  VAR_29->open_rej_reason = VAR_8;
  break;
 case 140:
  FUNC_1(VAR_20,
   FUNC_7("IO_OPEN_CNX_ERROR_ZONE_VIOLATION\n"));
  VAR_29->resp = VAR_15;
  VAR_29->stat = VAR_5;
  VAR_29->open_rej_reason = VAR_10;
  break;
 case 146:
  FUNC_1(VAR_20,
   FUNC_7("IO_OPEN_CNX_ERROR_BREAK\n"));
  VAR_29->resp = VAR_15;
  VAR_29->stat = VAR_5;
  VAR_29->open_rej_reason = VAR_9;
  break;
 case 143:
  FUNC_1(VAR_20,
   FUNC_7("IO_OPEN_CNX_ERROR_IT_NEXUS_LOSS\n"));
  VAR_29->resp = VAR_15;
  VAR_29->stat = VAR_5;
  VAR_29->open_rej_reason = VAR_10;
  if (!VAR_22->uldd_task)
   FUNC_6(VAR_20,
    VAR_31,
    143);
  break;
 case 147:
  FUNC_1(VAR_20,
   FUNC_7("IO_OPEN_CNX_ERROR_BAD_DESTINATION\n"));
  VAR_29->resp = VAR_15;
  VAR_29->stat = VAR_5;
  VAR_29->open_rej_reason = VAR_6;
  break;
 case 145:
  FUNC_1(VAR_20,
   FUNC_7("IO_OPEN_CNX_ERROR_CONNECTION_RATE_"
   "NOT_SUPPORTED\n"));
  VAR_29->resp = VAR_15;
  VAR_29->stat = VAR_5;
  VAR_29->open_rej_reason = VAR_7;
  break;
 case 141:
  FUNC_1(VAR_20,
   FUNC_7("IO_OPEN_CNX_ERROR_WRONG_DESTINATION\n"));
  VAR_29->resp = VAR_19;
  VAR_29->stat = VAR_5;
  VAR_29->open_rej_reason = VAR_11;
  break;
 case 131:
  FUNC_1(VAR_20,
   FUNC_7("IO_XFER_ERROR_NAK_RECEIVED\n"));
  VAR_29->resp = VAR_15;
  VAR_29->stat = VAR_5;
  VAR_29->open_rej_reason = VAR_9;
  break;
 case 134:
  FUNC_1(VAR_20,
   FUNC_7("IO_XFER_ERROR_ACK_NAK_TIMEOUT\n"));
  VAR_29->resp = VAR_15;
  VAR_29->stat = VAR_4;
  break;
 case 132:
  FUNC_1(VAR_20,
  FUNC_7("IO_XFER_ERROR_DMA\n"));
  VAR_29->resp = VAR_15;
  VAR_29->stat = VAR_5;
  break;
 case 128:
  FUNC_1(VAR_20,
   FUNC_7("IO_XFER_OPEN_RETRY_TIMEOUT\n"));
  VAR_29->resp = VAR_15;
  VAR_29->stat = VAR_5;
  VAR_29->open_rej_reason = VAR_9;
  break;
 case 130:
  FUNC_1(VAR_20,
   FUNC_7("IO_XFER_ERROR_OFFSET_MISMATCH\n"));
  VAR_29->resp = VAR_15;
  VAR_29->stat = VAR_5;
  break;
 case 139:
  FUNC_1(VAR_20,
   FUNC_7("IO_PORT_IN_RESET\n"));
  VAR_29->resp = VAR_15;
  VAR_29->stat = VAR_5;
  break;
 case 149:
  FUNC_1(VAR_20,
   FUNC_7("IO_DS_NON_OPERATIONAL\n"));
  VAR_29->resp = VAR_15;
  VAR_29->stat = VAR_5;
  if (!VAR_22->uldd_task)
   FUNC_6(VAR_20,
    VAR_31,
    149);
  break;
 case 150:
  FUNC_1(VAR_20,
   FUNC_7("IO_DS_IN_RECOVERY\n"));
  VAR_29->resp = VAR_15;
  VAR_29->stat = VAR_5;
  break;
 case 136:
  FUNC_1(VAR_20,
   FUNC_7("IO_TM_TAG_NOT_FOUND\n"));
  VAR_29->resp = VAR_15;
  VAR_29->stat = VAR_5;
  break;
 case 138:
  FUNC_1(VAR_20,
   FUNC_7("IO_SSP_EXT_IU_ZERO_LEN_ERROR\n"));
  VAR_29->resp = VAR_15;
  VAR_29->stat = VAR_5;
  break;
 case 144:
  FUNC_1(VAR_20,
   FUNC_7("IO_OPEN_CNX_ERROR_HW_RESOURCE_BUSY\n"));
  VAR_29->resp = VAR_15;
  VAR_29->stat = VAR_5;
  VAR_29->open_rej_reason = VAR_9;
  break;
 default:
  FUNC_1(VAR_20,
   FUNC_7("Unknown status 0x%x\n", VAR_25));

  VAR_29->resp = VAR_15;
  VAR_29->stat = VAR_5;
  break;
 }
 FUNC_1(VAR_20,
  FUNC_7("scsi_status = %x\n ",
  VAR_28->ssp_resp_iu.status));
 FUNC_9(&VAR_22->task_state_lock, VAR_24);
 VAR_22->task_state_flags &= ~VAR_18;
 VAR_22->task_state_flags &= ~VAR_14;
 VAR_22->task_state_flags |= VAR_17;
 if (FUNC_12((VAR_22->task_state_flags & VAR_16))) {
  FUNC_10(&VAR_22->task_state_lock, VAR_24);
  FUNC_0(VAR_20, FUNC_7("task 0x%p done with"
   " io_status 0x%x resp 0x%x "
   "stat 0x%x but aborted by upper layer!\n",
   VAR_22, VAR_25, VAR_29->resp, VAR_29->stat));
  FUNC_5(VAR_20, VAR_22, VAR_23, VAR_27);
 } else {
  FUNC_10(&VAR_22->task_state_lock, VAR_24);
  FUNC_5(VAR_20, VAR_22, VAR_23, VAR_27);
  FUNC_4();
  VAR_22->task_done(VAR_22);
 }
}
