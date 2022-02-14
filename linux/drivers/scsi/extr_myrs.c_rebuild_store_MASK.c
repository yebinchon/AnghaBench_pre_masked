
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {unsigned short ldev_num; } ;
struct TYPE_10__ {int ioctl_opcode; TYPE_4__ ldev; } ;
struct TYPE_7__ {int dma_ctrl_to_host; int no_autosense; } ;
struct TYPE_8__ {TYPE_2__ control; int id; int opcode; } ;
union myrs_cmd_mbox {TYPE_5__ ldev_info; TYPE_3__ common; } ;
struct scsi_device {scalar_t__ channel; struct myrs_ldev_info* hostdata; int host; } ;
struct myrs_ldev_info {unsigned short ldev_num; scalar_t__ rbld_active; } ;
struct myrs_cmdblk {unsigned char status; union myrs_cmd_mbox mbox; } ;
struct myrs_hba {int dcmd_mutex; struct myrs_cmdblk dcmd_blk; TYPE_1__* ctlr_info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_6__ {scalar_t__ physchan_present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 int FUNC_0 (char const*,int ,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct myrs_hba*,struct myrs_cmdblk*) ;
 unsigned char FUNC_4 (struct myrs_hba*,unsigned short,struct myrs_ldev_info*) ;
 int FUNC_5 (struct myrs_cmdblk*) ;
 int FUNC_6 (int ,struct scsi_device*,char*,...) ;
 struct myrs_hba* FUNC_7 (int ) ;
 struct scsi_device* FUNC_8 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_10,
  struct device_attribute *VAR_11, const char *VAR_12, size_t VAR_13)
{
 struct scsi_device *VAR_14 = FUNC_8(VAR_10);
 struct myrs_hba *VAR_15 = FUNC_7(VAR_14->host);
 struct myrs_ldev_info *VAR_16;
 struct myrs_cmdblk *VAR_17;
 union myrs_cmd_mbox *VAR_18;
 unsigned short VAR_19;
 unsigned char VAR_20;
 int VAR_21, VAR_22;

 if (VAR_14->channel < VAR_15->ctlr_info->physchan_present)
  return -VAR_1;

 VAR_16 = VAR_14->hostdata;
 if (!VAR_16)
  return -VAR_3;
 VAR_19 = VAR_16->ldev_num;

 VAR_22 = FUNC_0(VAR_12, 0, &VAR_21);
 if (VAR_22)
  return VAR_22;

 VAR_20 = FUNC_4(VAR_15, VAR_19, VAR_16);
 if (VAR_20 != VAR_9) {
  FUNC_6(VAR_4, VAR_14,
       "Failed to get device information, status 0x%02x\n",
       VAR_20);
  return -VAR_2;
 }

 if (VAR_21 && VAR_16->rbld_active) {
  FUNC_6(VAR_4, VAR_14,
       "Rebuild Not Initiated; already in progress\n");
  return -VAR_0;
 }
 if (!VAR_21 && !VAR_16->rbld_active) {
  FUNC_6(VAR_4, VAR_14,
       "Rebuild Not Cancelled; no rebuild in progress\n");
  return VAR_13;
 }

 FUNC_1(&VAR_15->dcmd_mutex);
 VAR_17 = &VAR_15->dcmd_blk;
 FUNC_5(VAR_17);
 VAR_18 = &VAR_17->mbox;
 VAR_18->common.opcode = VAR_5;
 VAR_18->common.id = VAR_6;
 VAR_18->common.control.dma_ctrl_to_host = 1;
 VAR_18->common.control.no_autosense = 1;
 if (VAR_21) {
  VAR_18->ldev_info.ldev.ldev_num = VAR_19;
  VAR_18->ldev_info.ioctl_opcode = VAR_7;
 } else {
  VAR_18->ldev_info.ldev.ldev_num = VAR_19;
  VAR_18->ldev_info.ioctl_opcode = VAR_8;
 }
 FUNC_3(VAR_15, VAR_17);
 VAR_20 = VAR_17->status;
 FUNC_2(&VAR_15->dcmd_mutex);
 if (VAR_20) {
  FUNC_6(VAR_4, VAR_14,
       "Rebuild Not %s, status 0x%02x\n",
       VAR_21 ? "Initiated" : "Cancelled", VAR_20);
  VAR_22 = -VAR_2;
 } else {
  FUNC_6(VAR_4, VAR_14, "Rebuild %s\n",
       VAR_21 ? "Initiated" : "Cancelled");
  VAR_22 = VAR_13;
 }

 return VAR_22;
}
