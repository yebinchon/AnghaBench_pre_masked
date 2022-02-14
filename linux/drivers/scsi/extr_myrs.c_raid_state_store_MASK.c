
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {unsigned short ldev_num; } ;
struct TYPE_9__ {int state; TYPE_3__ ldev; int ioctl_opcode; } ;
struct TYPE_6__ {int dma_ctrl_to_host; int no_autosense; } ;
struct TYPE_7__ {TYPE_1__ control; int id; int opcode; } ;
union myrs_cmd_mbox {TYPE_4__ set_devstate; TYPE_2__ common; } ;
struct scsi_device {scalar_t__ channel; struct myrs_pdev_info* hostdata; int lun; int id; int host; } ;
struct myrs_pdev_info {int dev_state; unsigned short ldev_num; int rsvd13; } ;
struct myrs_ldev_info {int dev_state; unsigned short ldev_num; int rsvd13; } ;
struct myrs_cmdblk {unsigned char status; union myrs_cmd_mbox mbox; } ;
struct myrs_hba {TYPE_5__* ctlr_info; int dcmd_mutex; struct myrs_cmdblk dcmd_blk; } ;
struct myrs_devmap {unsigned short ldev_num; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef enum myrs_devstate { ____Placeholder_myrs_devstate } myrs_devstate ;
struct TYPE_10__ {scalar_t__ physchan_present; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct myrs_hba*,struct myrs_cmdblk*) ;
 int FUNC_4 (struct myrs_cmdblk*) ;
 unsigned char FUNC_5 (struct myrs_hba*,scalar_t__,int ,int ,struct myrs_devmap*) ;
 int FUNC_6 (int ,struct scsi_device*,char*,int ,...) ;
 struct myrs_hba* FUNC_7 (int ) ;
 int FUNC_8 (char const*,char*,int) ;
 struct scsi_device* FUNC_9 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_10,
  struct device_attribute *VAR_11, const char *VAR_12, size_t VAR_13)
{
 struct scsi_device *VAR_14 = FUNC_9(VAR_10);
 struct myrs_hba *VAR_15 = FUNC_7(VAR_14->host);
 struct myrs_cmdblk *VAR_16;
 union myrs_cmd_mbox *VAR_17;
 enum myrs_devstate VAR_18;
 unsigned short VAR_19;
 unsigned char VAR_20;

 if (!FUNC_8(VAR_12, "offline", 7) ||
     !FUNC_8(VAR_12, "kill", 4))
  VAR_18 = VAR_5;
 else if (!FUNC_8(VAR_12, "online", 6))
  VAR_18 = VAR_6;
 else if (!FUNC_8(VAR_12, "standby", 7))
  VAR_18 = VAR_7;
 else
  return -VAR_0;

 if (VAR_14->channel < VAR_15->ctlr_info->physchan_present) {
  struct myrs_pdev_info *VAR_21 = VAR_14->hostdata;
  struct myrs_devmap *VAR_22 =
   (struct myrs_devmap *)&VAR_21->rsvd13;

  if (VAR_21->dev_state == VAR_18) {
   FUNC_6(VAR_2, VAR_14,
        "Device already in %s\n",
        FUNC_2(VAR_18));
   return VAR_13;
  }
  VAR_20 = FUNC_5(VAR_15, VAR_14->channel, VAR_14->id,
          VAR_14->lun, VAR_22);
  if (VAR_20 != VAR_9)
   return -VAR_1;
  VAR_19 = VAR_22->ldev_num;
 } else {
  struct myrs_ldev_info *VAR_23 = VAR_14->hostdata;

  if (VAR_23->dev_state == VAR_18) {
   FUNC_6(VAR_2, VAR_14,
        "Device already in %s\n",
        FUNC_2(VAR_18));
   return VAR_13;
  }
  VAR_19 = VAR_23->ldev_num;
 }
 FUNC_0(&VAR_15->dcmd_mutex);
 VAR_16 = &VAR_15->dcmd_blk;
 FUNC_4(VAR_16);
 VAR_17 = &VAR_16->mbox;
 VAR_17->common.opcode = VAR_3;
 VAR_17->common.id = VAR_4;
 VAR_17->common.control.dma_ctrl_to_host = 1;
 VAR_17->common.control.no_autosense = 1;
 VAR_17->set_devstate.ioctl_opcode = VAR_8;
 VAR_17->set_devstate.state = VAR_18;
 VAR_17->set_devstate.ldev.ldev_num = VAR_19;
 FUNC_3(VAR_15, VAR_16);
 VAR_20 = VAR_16->status;
 FUNC_1(&VAR_15->dcmd_mutex);
 if (VAR_20 == VAR_9) {
  if (VAR_14->channel < VAR_15->ctlr_info->physchan_present) {
   struct myrs_pdev_info *VAR_24 = VAR_14->hostdata;

   VAR_24->dev_state = VAR_18;
  } else {
   struct myrs_ldev_info *VAR_25 = VAR_14->hostdata;

   VAR_25->dev_state = VAR_18;
  }
  FUNC_6(VAR_2, VAR_14,
       "Set device state to %s\n",
       FUNC_2(VAR_18));
  return VAR_13;
 }
 FUNC_6(VAR_2, VAR_14,
      "Failed to set device state to %s, status 0x%02x\n",
      FUNC_2(VAR_18), VAR_20);
 return -VAR_0;
}
