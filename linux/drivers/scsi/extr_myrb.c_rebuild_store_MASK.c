
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rbld_rate; int addr; void* id; int opcode; } ;
struct TYPE_3__ {scalar_t__ channel; int target; void* id; int opcode; } ;
union myrb_cmd_mbox {TYPE_2__ type3R; TYPE_1__ type3D; } ;
struct scsi_device {scalar_t__ channel; int id; int host; } ;
struct pci_dev {int dev; } ;
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
 unsigned short FUNC_6 (struct myrb_hba*,int *) ;
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
 struct myrb_cmdblk *VAR_16;
 union myrb_cmd_mbox *VAR_17;
 unsigned short VAR_18;
 int VAR_19, VAR_20;
 const char *VAR_21;

 VAR_19 = FUNC_2(VAR_12, 0, &VAR_20);
 if (VAR_19)
  return VAR_19;

 if (VAR_14->channel >= FUNC_7(VAR_14->host))
  return -VAR_3;

 VAR_18 = FUNC_6(VAR_15, ((void*)0));
 if (VAR_20) {
  if (VAR_18 == VAR_9) {
   FUNC_9(VAR_5, VAR_14,
        "Rebuild Not Initiated; already in progress\n");
   return -VAR_0;
  }
  FUNC_3(&VAR_15->dcmd_mutex);
  VAR_16 = &VAR_15->dcmd_blk;
  FUNC_8(VAR_16);
  VAR_17 = &VAR_16->mbox;
  VAR_17->type3D.opcode = VAR_6;
  VAR_17->type3D.id = VAR_8;
  VAR_17->type3D.channel = VAR_14->channel;
  VAR_17->type3D.target = VAR_14->id;
  VAR_18 = FUNC_5(VAR_15, VAR_16);
  FUNC_4(&VAR_15->dcmd_mutex);
 } else {
  struct pci_dev *VAR_22 = VAR_15->pdev;
  unsigned char *VAR_23;
  dma_addr_t VAR_24;

  if (VAR_18 != VAR_9) {
   FUNC_9(VAR_5, VAR_14,
        "Rebuild Not Cancelled; not in progress\n");
   return 0;
  }

  VAR_23 = FUNC_0(&VAR_22->dev, sizeof(char),
       &VAR_24, VAR_4);
  if (VAR_23 == ((void*)0)) {
   FUNC_9(VAR_5, VAR_14,
        "Cancellation of Rebuild Failed - Out of Memory\n");
   return -VAR_2;
  }
  FUNC_3(&VAR_15->dcmd_mutex);
  VAR_16 = &VAR_15->dcmd_blk;
  FUNC_8(VAR_16);
  VAR_17 = &VAR_16->mbox;
  VAR_17->type3R.opcode = VAR_7;
  VAR_17->type3R.id = VAR_8;
  VAR_17->type3R.rbld_rate = 0xFF;
  VAR_17->type3R.addr = VAR_24;
  VAR_18 = FUNC_5(VAR_15, VAR_16);
  FUNC_1(&VAR_22->dev, sizeof(char), VAR_23, VAR_24);
  FUNC_4(&VAR_15->dcmd_mutex);
 }
 if (VAR_18 == VAR_9) {
  FUNC_9(VAR_5, VAR_14, "Rebuild %s\n",
       VAR_20 ? "Initiated" : "Cancelled");
  return VAR_13;
 }
 if (!VAR_20) {
  FUNC_9(VAR_5, VAR_14,
       "Rebuild Not Cancelled, status 0x%x\n",
       VAR_18);
  return -VAR_1;
 }

 switch (VAR_18) {
 case 131:
  VAR_21 = "Attempt to Rebuild Online or Unresponsive Drive";
  break;
 case 129:
  VAR_21 = "New Disk Failed During Rebuild";
  break;
 case 130:
  VAR_21 = "Invalid Device Address";
  break;
 case 128:
  VAR_21 = "Already in Progress";
  break;
 default:
  VAR_21 = ((void*)0);
  break;
 }
 if (VAR_21)
  FUNC_9(VAR_5, VAR_14,
       "Rebuild Failed - %s\n", VAR_21);
 else
  FUNC_9(VAR_5, VAR_14,
       "Rebuild Failed, status 0x%x\n", VAR_18);

 return -VAR_1;
}
