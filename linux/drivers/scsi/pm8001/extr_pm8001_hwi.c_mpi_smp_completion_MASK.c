
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct task_status_struct {void* stat; void* resp; void* open_rej_reason; int residual; } ;
struct smp_completion_resp {int tag; int status; } ;
struct sas_task {int task_state_flags; int (* task_done ) (struct sas_task*) ;int task_state_lock; int dev; int lldd_task; struct task_status_struct task_status; } ;
struct pm8001_hba_info {struct pm8001_ccb_info* ccb_info; } ;
struct pm8001_device {int running_req; } ;
struct pm8001_ccb_info {struct pm8001_device* device; struct sas_task* task; } ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
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
 size_t FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct pm8001_hba_info*,struct sas_task*,struct pm8001_ccb_info*,size_t) ;
 int FUNC_5 (struct pm8001_hba_info*,struct pm8001_device*,int const) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct sas_task*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void
FUNC_11(struct pm8001_hba_info *VAR_19, void *VAR_20)
{
 struct sas_task *VAR_21;
 struct pm8001_ccb_info *VAR_22;
 unsigned long VAR_23;
 u32 VAR_24;
 u32 VAR_25;
 struct smp_completion_resp *VAR_26;
 struct task_status_struct *VAR_27;
 struct pm8001_device *VAR_28;

 VAR_26 = (struct smp_completion_resp *)(VAR_20 + 4);
 VAR_24 = FUNC_2(VAR_26->status);
 VAR_25 = FUNC_2(VAR_26->tag);

 VAR_22 = &VAR_19->ccb_info[VAR_25];
 VAR_21 = VAR_22->task;
 VAR_27 = &VAR_21->task_status;
 VAR_28 = VAR_22->device;
 if (VAR_24)
  FUNC_0(VAR_19,
   FUNC_6("smp IO status 0x%x\n", VAR_24));
 if (FUNC_10(!VAR_21 || !VAR_21->lldd_task || !VAR_21->dev))
  return;

 switch (VAR_24) {
 case 132:
  FUNC_1(VAR_19, FUNC_6("IO_SUCCESS\n"));
  VAR_27->resp = VAR_15;
  VAR_27->stat = VAR_1;
  if (VAR_28)
   VAR_28->running_req--;
  break;
 case 148:
  FUNC_1(VAR_19,
   FUNC_6("IO_ABORTED IOMB\n"));
  VAR_27->resp = VAR_15;
  VAR_27->stat = VAR_2;
  if (VAR_28)
   VAR_28->running_req--;
  break;
 case 134:
  FUNC_1(VAR_19, FUNC_6("IO_UNDERFLOW\n"));
  VAR_27->resp = VAR_15;
  VAR_27->stat = VAR_3;
  VAR_27->residual = 0;
  if (VAR_28)
   VAR_28->running_req--;
  break;
 case 143:
  FUNC_1(VAR_19, FUNC_6("IO_NO_DEVICE\n"));
  VAR_27->resp = VAR_15;
  VAR_27->stat = VAR_12;
  break;
 case 145:
  FUNC_1(VAR_19,
   FUNC_6("IO_ERROR_HW_TIMEOUT\n"));
  VAR_27->resp = VAR_15;
  VAR_27->stat = VAR_0;
  break;
 case 131:
  FUNC_1(VAR_19,
   FUNC_6("IO_XFER_ERROR_BREAK\n"));
  VAR_27->resp = VAR_15;
  VAR_27->stat = VAR_0;
  break;
 case 130:
  FUNC_1(VAR_19,
   FUNC_6("IO_XFER_ERROR_PHY_NOT_READY\n"));
  VAR_27->resp = VAR_15;
  VAR_27->stat = VAR_0;
  break;
 case 137:
  FUNC_1(VAR_19,
  FUNC_6("IO_OPEN_CNX_ERROR_PROTOCOL_NOT_SUPPORTED\n"));
  VAR_27->resp = VAR_15;
  VAR_27->stat = VAR_5;
  VAR_27->open_rej_reason = VAR_10;
  break;
 case 135:
  FUNC_1(VAR_19,
   FUNC_6("IO_OPEN_CNX_ERROR_ZONE_VIOLATION\n"));
  VAR_27->resp = VAR_15;
  VAR_27->stat = VAR_5;
  VAR_27->open_rej_reason = VAR_10;
  break;
 case 141:
  FUNC_1(VAR_19,
   FUNC_6("IO_OPEN_CNX_ERROR_BREAK\n"));
  VAR_27->resp = VAR_15;
  VAR_27->stat = VAR_5;
  VAR_27->open_rej_reason = VAR_8;
  break;
 case 138:
  FUNC_1(VAR_19,
   FUNC_6("IO_OPEN_CNX_ERROR_IT_NEXUS_LOSS\n"));
  VAR_27->resp = VAR_15;
  VAR_27->stat = VAR_5;
  VAR_27->open_rej_reason = VAR_10;
  FUNC_5(VAR_19,
    VAR_28,
    138);
  break;
 case 142:
  FUNC_1(VAR_19,
   FUNC_6("IO_OPEN_CNX_ERROR_BAD_DESTINATION\n"));
  VAR_27->resp = VAR_15;
  VAR_27->stat = VAR_5;
  VAR_27->open_rej_reason = VAR_6;
  break;
 case 140:
  FUNC_1(VAR_19,
   FUNC_6("IO_OPEN_CNX_ERROR_CONNECTION_RATE_"
   "NOT_SUPPORTED\n"));
  VAR_27->resp = VAR_15;
  VAR_27->stat = VAR_5;
  VAR_27->open_rej_reason = VAR_7;
  break;
 case 136:
  FUNC_1(VAR_19,
         FUNC_6("IO_OPEN_CNX_ERROR_WRONG_DESTINATION\n"));
  VAR_27->resp = VAR_15;
  VAR_27->stat = VAR_5;
  VAR_27->open_rej_reason = VAR_11;
  break;
 case 129:
  FUNC_1(VAR_19,
   FUNC_6("IO_XFER_ERROR_RX_FRAME\n"));
  VAR_27->resp = VAR_15;
  VAR_27->stat = VAR_4;
  break;
 case 128:
  FUNC_1(VAR_19,
   FUNC_6("IO_XFER_OPEN_RETRY_TIMEOUT\n"));
  VAR_27->resp = VAR_15;
  VAR_27->stat = VAR_5;
  VAR_27->open_rej_reason = VAR_9;
  break;
 case 144:
  FUNC_1(VAR_19,
   FUNC_6("IO_ERROR_INTERNAL_SMP_RESOURCE\n"));
  VAR_27->resp = VAR_15;
  VAR_27->stat = VAR_13;
  break;
 case 133:
  FUNC_1(VAR_19,
   FUNC_6("IO_PORT_IN_RESET\n"));
  VAR_27->resp = VAR_15;
  VAR_27->stat = VAR_5;
  VAR_27->open_rej_reason = VAR_9;
  break;
 case 146:
  FUNC_1(VAR_19,
   FUNC_6("IO_DS_NON_OPERATIONAL\n"));
  VAR_27->resp = VAR_15;
  VAR_27->stat = VAR_4;
  break;
 case 147:
  FUNC_1(VAR_19,
   FUNC_6("IO_DS_IN_RECOVERY\n"));
  VAR_27->resp = VAR_15;
  VAR_27->stat = VAR_5;
  VAR_27->open_rej_reason = VAR_9;
  break;
 case 139:
  FUNC_1(VAR_19,
   FUNC_6("IO_OPEN_CNX_ERROR_HW_RESOURCE_BUSY\n"));
  VAR_27->resp = VAR_15;
  VAR_27->stat = VAR_5;
  VAR_27->open_rej_reason = VAR_9;
  break;
 default:
  FUNC_1(VAR_19,
   FUNC_6("Unknown status 0x%x\n", VAR_24));
  VAR_27->resp = VAR_15;
  VAR_27->stat = VAR_4;

  break;
 }
 FUNC_7(&VAR_21->task_state_lock, VAR_23);
 VAR_21->task_state_flags &= ~VAR_18;
 VAR_21->task_state_flags &= ~VAR_14;
 VAR_21->task_state_flags |= VAR_17;
 if (FUNC_10((VAR_21->task_state_flags & VAR_16))) {
  FUNC_8(&VAR_21->task_state_lock, VAR_23);
  FUNC_0(VAR_19, FUNC_6("task 0x%p done with"
   " io_status 0x%x resp 0x%x "
   "stat 0x%x but aborted by upper layer!\n",
   VAR_21, VAR_24, VAR_27->resp, VAR_27->stat));
  FUNC_4(VAR_19, VAR_21, VAR_22, VAR_25);
 } else {
  FUNC_8(&VAR_21->task_state_lock, VAR_23);
  FUNC_4(VAR_19, VAR_21, VAR_22, VAR_25);
  FUNC_3();
  VAR_21->task_done(VAR_21);
 }
}
