
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct task_status_struct {size_t residual; int buf_valid_size; void* stat; void* resp; void* open_rej_reason; scalar_t__ buf; } ;
struct set_dev_bits_fis {int dummy; } ;
struct sata_completion_resp {size_t* sata_resp; int param; int tag; int status; } ;
struct TYPE_6__ {int use_ncq; int dma_xfer; } ;
struct sas_task {int task_state_flags; int task_state_lock; int uldd_task; TYPE_3__ ata_task; int data_dir; TYPE_2__* dev; struct task_status_struct task_status; int lldd_task; } ;
struct pm8001_hba_info {size_t* sas_addr; struct pm8001_ccb_info* ccb_info; } ;
struct pm8001_device {int id; size_t attached_phy; int running_req; } ;
struct pm8001_ccb_info {struct pm8001_device* device; struct sas_task* task; } ;
struct pio_setup_fis {int dummy; } ;
struct dev_to_host_fis {int dummy; } ;
struct ata_task_resp {size_t frame_len; size_t* ending_fis; } ;
typedef int sata_addr_low ;
typedef int sata_addr_hi ;
struct TYPE_5__ {int sas_addr; TYPE_1__* parent; struct pm8001_device* lldd_dev; } ;
struct TYPE_4__ {int dev_type; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_2 (int ) ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 void* VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 void* VAR_28 ;
 scalar_t__ FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (size_t*,size_t*,size_t) ;
 int FUNC_6 (struct pm8001_hba_info*,struct sas_task*,struct pm8001_ccb_info*,size_t) ;
 int FUNC_7 (struct pm8001_hba_info*,struct sas_task*,struct pm8001_ccb_info*,size_t) ;
 int FUNC_8 (struct pm8001_hba_info*,struct pm8001_device*,int const) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (struct pm8001_hba_info*,struct pm8001_device*) ;
 int FUNC_11 (struct pm8001_hba_info*,size_t) ;
 int FUNC_12 (struct sas_task*) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static void
FUNC_16(struct pm8001_hba_info *VAR_29, void *VAR_30)
{
 struct sas_task *VAR_31;
 struct pm8001_ccb_info *VAR_32;
 u32 VAR_33;
 u32 VAR_34;
 u32 VAR_35;
 int VAR_36, VAR_37;
 u8 VAR_38[4];
 u32 VAR_39;
 u8 VAR_40[4];
 u32 VAR_41;
 struct sata_completion_resp *VAR_42;
 struct task_status_struct *VAR_43;
 struct ata_task_resp *VAR_44 ;
 u32 *VAR_45;
 struct pm8001_device *VAR_46;
 unsigned long VAR_47;

 VAR_42 = (struct sata_completion_resp *)(VAR_30 + 4);
 VAR_34 = FUNC_4(VAR_42->status);
 VAR_35 = FUNC_4(VAR_42->tag);

 if (!VAR_35) {
  FUNC_0(VAR_29,
   FUNC_9("tag null\n"));
  return;
 }
 VAR_32 = &VAR_29->ccb_info[VAR_35];
 VAR_33 = FUNC_4(VAR_42->param);
 if (VAR_32) {
  VAR_31 = VAR_32->task;
  VAR_46 = VAR_32->device;
 } else {
  FUNC_0(VAR_29,
   FUNC_9("ccb null\n"));
  return;
 }

 if (VAR_31) {
  if (VAR_31->dev && (VAR_31->dev->lldd_dev))
   VAR_46 = VAR_31->dev->lldd_dev;
 } else {
  FUNC_0(VAR_29,
   FUNC_9("task null\n"));
  return;
 }

 if ((VAR_46 && !(VAR_46->id & VAR_3))
  && FUNC_15(!VAR_31 || !VAR_31->lldd_task || !VAR_31->dev)) {
  FUNC_0(VAR_29,
   FUNC_9("task or dev null\n"));
  return;
 }

 VAR_43 = &VAR_31->task_status;
 if (!VAR_43) {
  FUNC_0(VAR_29,
   FUNC_9("ts null\n"));
  return;
 }

 if ((VAR_34 != 137) && (VAR_34 != VAR_1) &&
  (VAR_34 != 136)) {
  if (!((VAR_31->dev->parent) &&
   (FUNC_3(VAR_31->dev->parent->dev_type)))) {
   for (VAR_36 = 0 , VAR_37 = 4; VAR_37 <= 7 && VAR_36 <= 3; VAR_36++ , VAR_37++)
    VAR_38[VAR_36] = VAR_29->sas_addr[VAR_37];
   for (VAR_36 = 0 , VAR_37 = 0; VAR_37 <= 3 && VAR_36 <= 3; VAR_36++ , VAR_37++)
    VAR_40[VAR_36] = VAR_29->sas_addr[VAR_37];
   FUNC_5(&VAR_39, VAR_38,
    sizeof(VAR_38));
   FUNC_5(&VAR_41, VAR_40,
    sizeof(VAR_40));
   VAR_41 = (((VAR_41 >> 24) & 0xff)
      |((VAR_41 << 8) &
      0xff0000) |
      ((VAR_41 >> 8)
      & 0xff00) |
      ((VAR_41 << 24) &
      0xff000000));
   VAR_39 = ((((VAR_39 >> 24)
      & 0xff) |
      ((VAR_39 << 8)
      & 0xff0000) |
      ((VAR_39 >> 8)
      & 0xff00) |
      ((VAR_39 << 24)
      & 0xff000000)) +
      VAR_46->attached_phy +
      0x10);
   FUNC_0(VAR_29,
    FUNC_9("SAS Address of IO Failure Drive:"
    "%08x%08x", VAR_41,
     VAR_39));
  } else {
   FUNC_0(VAR_29,
    FUNC_9("SAS Address of IO Failure Drive:"
    "%016llx", FUNC_2(VAR_31->dev->sas_addr)));
  }
 }
 switch (VAR_34) {
 case 137:
  FUNC_1(VAR_29, FUNC_9("IO_SUCCESS\n"));
  if (VAR_33 == 0) {
   VAR_43->resp = VAR_24;
   VAR_43->stat = VAR_4;

   if (VAR_46 &&
    (VAR_46->id & VAR_3)) {

    VAR_46->id |= VAR_2;

    VAR_46->id = VAR_46->id & 0x7FFFFFFF;
    FUNC_10(VAR_29, VAR_46);

    FUNC_11(VAR_29, VAR_35);
    FUNC_12(VAR_31);
    return;
   }
  } else {
   u8 VAR_48;
   VAR_43->resp = VAR_24;
   VAR_43->stat = VAR_20;
   VAR_43->residual = VAR_33;
   FUNC_1(VAR_29,
    FUNC_9("SAS_PROTO_RESPONSE len = %d\n",
    VAR_33));
   VAR_45 = &VAR_42->sata_resp[0];
   VAR_44 = (struct ata_task_resp *)VAR_43->buf;
   if (VAR_31->ata_task.dma_xfer == 0 &&
       VAR_31->data_dir == VAR_0) {
    VAR_48 = sizeof(struct pio_setup_fis);
    FUNC_1(VAR_29,
    FUNC_9("PIO read len = %d\n", VAR_48));
   } else if (VAR_31->ata_task.use_ncq) {
    VAR_48 = sizeof(struct set_dev_bits_fis);
    FUNC_1(VAR_29,
     FUNC_9("FPDMA len = %d\n", VAR_48));
   } else {
    VAR_48 = sizeof(struct dev_to_host_fis);
    FUNC_1(VAR_29,
    FUNC_9("other len = %d\n", VAR_48));
   }
   if (VAR_22 >= sizeof(*VAR_44)) {
    VAR_44->frame_len = VAR_48;
    FUNC_5(&VAR_44->ending_fis[0], VAR_45, VAR_48);
    VAR_43->buf_valid_size = sizeof(*VAR_44);
   } else
    FUNC_1(VAR_29,
     FUNC_9("response to large\n"));
  }
  if (VAR_46)
   VAR_46->running_req--;
  break;
 case 152:
  FUNC_1(VAR_29,
   FUNC_9("IO_ABORTED IOMB Tag\n"));
  VAR_43->resp = VAR_24;
  VAR_43->stat = VAR_5;
  if (VAR_46)
   VAR_46->running_req--;
  break;

 case 136:

  FUNC_1(VAR_29,
   FUNC_9("IO_UNDERFLOW param = %d\n", VAR_33));
  VAR_43->resp = VAR_24;
  VAR_43->stat = VAR_6;
  VAR_43->residual = VAR_33;
  if (VAR_46)
   VAR_46->running_req--;
  break;
 case 148:
  FUNC_1(VAR_29,
   FUNC_9("IO_NO_DEVICE\n"));
  VAR_43->resp = VAR_28;
  VAR_43->stat = VAR_19;
  break;
 case 134:
  FUNC_1(VAR_29,
   FUNC_9("IO_XFER_ERROR_BREAK\n"));
  VAR_43->resp = VAR_24;
  VAR_43->stat = VAR_8;
  break;
 case 131:
  FUNC_1(VAR_29,
   FUNC_9("IO_XFER_ERROR_PHY_NOT_READY\n"));
  VAR_43->resp = VAR_24;
  VAR_43->stat = VAR_10;
  VAR_43->open_rej_reason = VAR_16;
  break;
 case 142:
  FUNC_1(VAR_29,
   FUNC_9("IO_OPEN_CNX_ERROR_PROTOCOL_NOT"
   "_SUPPORTED\n"));
  VAR_43->resp = VAR_24;
  VAR_43->stat = VAR_10;
  VAR_43->open_rej_reason = VAR_14;
  break;
 case 139:
  FUNC_1(VAR_29,
   FUNC_9("IO_OPEN_CNX_ERROR_ZONE_VIOLATION\n"));
  VAR_43->resp = VAR_24;
  VAR_43->stat = VAR_10;
  VAR_43->open_rej_reason = VAR_17;
  break;
 case 146:
  FUNC_1(VAR_29,
   FUNC_9("IO_OPEN_CNX_ERROR_BREAK\n"));
  VAR_43->resp = VAR_24;
  VAR_43->stat = VAR_10;
  VAR_43->open_rej_reason = VAR_15;
  break;
 case 143:
  FUNC_1(VAR_29,
   FUNC_9("IO_OPEN_CNX_ERROR_IT_NEXUS_LOSS\n"));
  VAR_43->resp = VAR_24;
  VAR_43->stat = VAR_7;
  if (!VAR_31->uldd_task) {
   FUNC_8(VAR_29,
    VAR_46,
    143);
   VAR_43->resp = VAR_28;
   VAR_43->stat = VAR_21;
   FUNC_7(VAR_29, VAR_31, VAR_32, VAR_35);
   return;
  }
  break;
 case 147:
  FUNC_1(VAR_29,
   FUNC_9("IO_OPEN_CNX_ERROR_BAD_DESTINATION\n"));
  VAR_43->resp = VAR_28;
  VAR_43->stat = VAR_10;
  VAR_43->open_rej_reason = VAR_12;
  if (!VAR_31->uldd_task) {
   FUNC_8(VAR_29,
    VAR_46,
    143);
   VAR_43->resp = VAR_28;
   VAR_43->stat = VAR_21;
   FUNC_7(VAR_29, VAR_31, VAR_32, VAR_35);
   return;
  }
  break;
 case 145:
  FUNC_1(VAR_29,
   FUNC_9("IO_OPEN_CNX_ERROR_CONNECTION_RATE_"
   "NOT_SUPPORTED\n"));
  VAR_43->resp = VAR_24;
  VAR_43->stat = VAR_10;
  VAR_43->open_rej_reason = VAR_13;
  break;
 case 141:
  FUNC_1(VAR_29,
   FUNC_9("IO_OPEN_CNX_ERROR_STP_RESOURCES"
   "_BUSY\n"));
  VAR_43->resp = VAR_24;
  VAR_43->stat = VAR_7;
  if (!VAR_31->uldd_task) {
   FUNC_8(VAR_29,
    VAR_46,
    141);
   VAR_43->resp = VAR_28;
   VAR_43->stat = VAR_21;
   FUNC_7(VAR_29, VAR_31, VAR_32, VAR_35);
   return;
  }
  break;
 case 140:
  FUNC_1(VAR_29,
         FUNC_9("IO_OPEN_CNX_ERROR_WRONG_DESTINATION\n"));
  VAR_43->resp = VAR_24;
  VAR_43->stat = VAR_10;
  VAR_43->open_rej_reason = VAR_18;
  break;
 case 132:
  FUNC_1(VAR_29,
   FUNC_9("IO_XFER_ERROR_NAK_RECEIVED\n"));
  VAR_43->resp = VAR_24;
  VAR_43->stat = VAR_9;
  break;
 case 135:
  FUNC_1(VAR_29,
   FUNC_9("IO_XFER_ERROR_ACK_NAK_TIMEOUT\n"));
  VAR_43->resp = VAR_24;
  VAR_43->stat = VAR_9;
  break;
 case 133:
  FUNC_1(VAR_29,
   FUNC_9("IO_XFER_ERROR_DMA\n"));
  VAR_43->resp = VAR_24;
  VAR_43->stat = VAR_5;
  break;
 case 129:
  FUNC_1(VAR_29,
   FUNC_9("IO_XFER_ERROR_SATA_LINK_TIMEOUT\n"));
  VAR_43->resp = VAR_28;
  VAR_43->stat = VAR_7;
  break;
 case 130:
  FUNC_1(VAR_29,
   FUNC_9("IO_XFER_ERROR_REJECTED_NCQ_MODE\n"));
  VAR_43->resp = VAR_24;
  VAR_43->stat = VAR_6;
  break;
 case 128:
  FUNC_1(VAR_29,
   FUNC_9("IO_XFER_OPEN_RETRY_TIMEOUT\n"));
  VAR_43->resp = VAR_24;
  VAR_43->stat = VAR_11;
  break;
 case 138:
  FUNC_1(VAR_29,
   FUNC_9("IO_PORT_IN_RESET\n"));
  VAR_43->resp = VAR_24;
  VAR_43->stat = VAR_7;
  break;
 case 149:
  FUNC_1(VAR_29,
   FUNC_9("IO_DS_NON_OPERATIONAL\n"));
  VAR_43->resp = VAR_24;
  VAR_43->stat = VAR_7;
  if (!VAR_31->uldd_task) {
   FUNC_8(VAR_29, VAR_46,
        149);
   VAR_43->resp = VAR_28;
   VAR_43->stat = VAR_21;
   FUNC_7(VAR_29, VAR_31, VAR_32, VAR_35);
   return;
  }
  break;
 case 150:
  FUNC_1(VAR_29,
   FUNC_9("  IO_DS_IN_RECOVERY\n"));
  VAR_43->resp = VAR_24;
  VAR_43->stat = VAR_7;
  break;
 case 151:
  FUNC_1(VAR_29,
   FUNC_9("IO_DS_IN_ERROR\n"));
  VAR_43->resp = VAR_24;
  VAR_43->stat = VAR_7;
  if (!VAR_31->uldd_task) {
   FUNC_8(VAR_29, VAR_46,
        151);
   VAR_43->resp = VAR_28;
   VAR_43->stat = VAR_21;
   FUNC_7(VAR_29, VAR_31, VAR_32, VAR_35);
   return;
  }
  break;
 case 144:
  FUNC_1(VAR_29,
   FUNC_9("IO_OPEN_CNX_ERROR_HW_RESOURCE_BUSY\n"));
  VAR_43->resp = VAR_24;
  VAR_43->stat = VAR_10;
  VAR_43->open_rej_reason = VAR_16;
  break;
 default:
  FUNC_1(VAR_29,
   FUNC_9("Unknown status 0x%x\n", VAR_34));

  VAR_43->resp = VAR_24;
  VAR_43->stat = VAR_7;
  break;
 }
 FUNC_13(&VAR_31->task_state_lock, VAR_47);
 VAR_31->task_state_flags &= ~VAR_27;
 VAR_31->task_state_flags &= ~VAR_23;
 VAR_31->task_state_flags |= VAR_26;
 if (FUNC_15((VAR_31->task_state_flags & VAR_25))) {
  FUNC_14(&VAR_31->task_state_lock, VAR_47);
  FUNC_0(VAR_29,
   FUNC_9("task 0x%p done with io_status 0x%x"
   " resp 0x%x stat 0x%x but aborted by upper layer!\n",
   VAR_31, VAR_34, VAR_43->resp, VAR_43->stat));
  FUNC_6(VAR_29, VAR_31, VAR_32, VAR_35);
 } else {
  FUNC_14(&VAR_31->task_state_lock, VAR_47);
  FUNC_7(VAR_29, VAR_31, VAR_32, VAR_35);
 }
}
