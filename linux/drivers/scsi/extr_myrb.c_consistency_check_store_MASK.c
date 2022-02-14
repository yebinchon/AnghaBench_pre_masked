
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rbld_rate; int addr; void* id; int opcode; } ;
struct TYPE_3__ {unsigned short ldev_num; int auto_restore; void* id; int opcode; } ;
union myrb_cmd_mbox {TYPE_2__ type3R; TYPE_1__ type3C; } ;
struct scsi_device {scalar_t__ channel; unsigned short id; int host; } ;
struct pci_dev {int dev; } ;
struct myrb_rbld_progress {int dummy; } ;
struct myrb_cmdblk {union myrb_cmd_mbox mbox; } ;
struct myrb_hba {int dcmd_mutex; struct myrb_cmdblk dcmd_blk; struct pci_dev* pdev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;




 unsigned short VAR_9 ;
 unsigned char* FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (int *,int,unsigned char*,int ) ;
 int FUNC_2 (char const*,int ,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned short FUNC_5 (struct myrb_hba*,struct myrb_cmdblk*) ;
 unsigned short FUNC_6 (struct myrb_hba*,struct myrb_rbld_progress*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct myrb_cmdblk*) ;
 int FUNC_9 (int ,struct scsi_device*,char*,...) ;
 struct myrb_hba* FUNC_10 (int ) ;
 struct scsi_device* FUNC_11 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_12(struct device *VAR_10,
  struct device_attribute *VAR_11, const char *VAR_12, size_t VAR_13)
{
 struct scsi_device *VAR_14 = FUNC_11(VAR_10);
 struct myrb_hba *VAR_15 = FUNC_10(VAR_14->host);
 struct myrb_rbld_progress VAR_16;
 struct myrb_cmdblk *VAR_17;
 union myrb_cmd_mbox *VAR_18;
 unsigned short VAR_19 = 0xFFFF;
 unsigned short VAR_20;
 int VAR_21, VAR_22;
 const char *VAR_23;

 VAR_21 = FUNC_2(VAR_12, 0, &VAR_22);
 if (VAR_21)
  return VAR_21;

 if (VAR_14->channel < FUNC_7(VAR_14->host))
  return -VAR_3;

 VAR_20 = FUNC_6(VAR_15, &VAR_16);
 if (VAR_22) {
  if (VAR_20 == VAR_9) {
   FUNC_9(VAR_5, VAR_14,
        "Check Consistency Not Initiated; already in progress\n");
   return -VAR_0;
  }
  FUNC_3(&VAR_15->dcmd_mutex);
  VAR_17 = &VAR_15->dcmd_blk;
  FUNC_8(VAR_17);
  VAR_18 = &VAR_17->mbox;
  VAR_18->type3C.opcode = VAR_6;
  VAR_18->type3C.id = VAR_8;
  VAR_18->type3C.ldev_num = VAR_14->id;
  VAR_18->type3C.auto_restore = 1;

  VAR_20 = FUNC_5(VAR_15, VAR_17);
  FUNC_4(&VAR_15->dcmd_mutex);
 } else {
  struct pci_dev *VAR_24 = VAR_15->pdev;
  unsigned char *VAR_25;
  dma_addr_t VAR_26;

  if (VAR_19 != VAR_14->id) {
   FUNC_9(VAR_5, VAR_14,
        "Check Consistency Not Cancelled; not in progress\n");
   return 0;
  }
  VAR_25 = FUNC_0(&VAR_24->dev, sizeof(char),
       &VAR_26, VAR_4);
  if (VAR_25 == ((void*)0)) {
   FUNC_9(VAR_5, VAR_14,
        "Cancellation of Check Consistency Failed - Out of Memory\n");
   return -VAR_2;
  }
  FUNC_3(&VAR_15->dcmd_mutex);
  VAR_17 = &VAR_15->dcmd_blk;
  FUNC_8(VAR_17);
  VAR_18 = &VAR_17->mbox;
  VAR_18->type3R.opcode = VAR_7;
  VAR_18->type3R.id = VAR_8;
  VAR_18->type3R.rbld_rate = 0xFF;
  VAR_18->type3R.addr = VAR_26;
  VAR_20 = FUNC_5(VAR_15, VAR_17);
  FUNC_1(&VAR_24->dev, sizeof(char), VAR_25, VAR_26);
  FUNC_4(&VAR_15->dcmd_mutex);
 }
 if (VAR_20 == VAR_9) {
  FUNC_9(VAR_5, VAR_14, "Check Consistency %s\n",
       VAR_22 ? "Initiated" : "Cancelled");
  return VAR_13;
 }
 if (!VAR_22) {
  FUNC_9(VAR_5, VAR_14,
       "Check Consistency Not Cancelled, status 0x%x\n",
       VAR_20);
  return -VAR_1;
 }

 switch (VAR_20) {
 case 131:
  VAR_23 = "Dependent Physical Device is DEAD";
  break;
 case 129:
  VAR_23 = "New Disk Failed During Rebuild";
  break;
 case 130:
  VAR_23 = "Invalid or Nonredundant Logical Drive";
  break;
 case 128:
  VAR_23 = "Already in Progress";
  break;
 default:
  VAR_23 = ((void*)0);
  break;
 }
 if (VAR_23)
  FUNC_9(VAR_5, VAR_14,
       "Check Consistency Failed - %s\n", VAR_23);
 else
  FUNC_9(VAR_5, VAR_14,
       "Check Consistency Failed, status 0x%x\n", VAR_20);

 return -VAR_1;
}
