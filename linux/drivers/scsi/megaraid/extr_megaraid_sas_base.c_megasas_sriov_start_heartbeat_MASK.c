
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct megasas_instance {scalar_t__ adapter_type; TYPE_4__* host; TYPE_3__* pdev; int mask_interrupts; int hb_host_mem_h; int hb_host_mem; } ;
struct TYPE_6__ {void** s; int b; } ;
struct megasas_dcmd_frame {scalar_t__ cmd_status; int sge_count; void* opcode; void* data_xfer_len; scalar_t__ pad_0; scalar_t__ timeout; void* flags; int cmd; TYPE_2__ mbox; } ;
struct megasas_cmd {TYPE_1__* frame; } ;
struct MR_CTRL_HB_HOST_MEM {int dummy; } ;
struct TYPE_8__ {int host_no; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_5__ {struct megasas_dcmd_frame dcmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int *,char*,int ) ;
 int FUNC_3 (int *,char*,char*,...) ;
 int FUNC_4 (int *,int,int *,int ) ;
 struct megasas_cmd* FUNC_5 (struct megasas_instance*) ;
 int FUNC_6 (struct megasas_instance*,struct megasas_cmd*,int ) ;
 int FUNC_7 (struct megasas_instance*,struct megasas_cmd*) ;
 int FUNC_8 (struct megasas_instance*,struct megasas_cmd*) ;
 int FUNC_9 (struct megasas_instance*,struct megasas_dcmd_frame*,int ,int) ;
 int FUNC_10 (int ,int ,int ) ;

int FUNC_11(struct megasas_instance *VAR_10,
      int VAR_11)
{
 struct megasas_cmd *VAR_12;
 struct megasas_dcmd_frame *VAR_13;
 int VAR_14 = 0;

 VAR_12 = FUNC_5(VAR_10);

 if (!VAR_12) {
  FUNC_2(VAR_2, &VAR_10->pdev->dev, "megasas_sriov_start_heartbeat: "
         "Failed to get cmd for scsi%d\n",
         VAR_10->host->host_no);
  return -VAR_0;
 }

 VAR_13 = &VAR_12->frame->dcmd;

 if (VAR_11) {
  VAR_10->hb_host_mem =
   FUNC_4(&VAR_10->pdev->dev,
        sizeof(struct MR_CTRL_HB_HOST_MEM),
        &VAR_10->hb_host_mem_h,
        VAR_1);
  if (!VAR_10->hb_host_mem) {
   FUNC_2(VAR_2, &VAR_10->pdev->dev, "SR-IOV: Couldn't allocate"
          " memory for heartbeat host memory for scsi%d\n",
          VAR_10->host->host_no);
   VAR_14 = -VAR_0;
   goto out;
  }
 }

 FUNC_10(VAR_13->mbox.b, 0, VAR_6);

 VAR_13->mbox.s[0] = FUNC_0(sizeof(struct MR_CTRL_HB_HOST_MEM));
 VAR_13->cmd = VAR_4;
 VAR_13->cmd_status = VAR_8;
 VAR_13->sge_count = 1;
 VAR_13->flags = FUNC_0(VAR_5);
 VAR_13->timeout = 0;
 VAR_13->pad_0 = 0;
 VAR_13->data_xfer_len = FUNC_1(sizeof(struct MR_CTRL_HB_HOST_MEM));
 VAR_13->opcode = FUNC_1(VAR_9);

 FUNC_9(VAR_10, VAR_13, VAR_10->hb_host_mem_h,
     sizeof(struct MR_CTRL_HB_HOST_MEM));

 FUNC_3(&VAR_10->pdev->dev, "SR-IOV: Starting heartbeat for scsi%d\n",
        VAR_10->host->host_no);

 if ((VAR_10->adapter_type != VAR_7) &&
     !VAR_10->mask_interrupts)
  VAR_14 = FUNC_6(VAR_10, VAR_12,
   VAR_3);
 else
  VAR_14 = FUNC_7(VAR_10, VAR_12);

 if (VAR_14) {
  FUNC_3(&VAR_10->pdev->dev, "SR-IOV: MR_DCMD_CTRL_SHARED_HOST"
   "_MEM_ALLOC DCMD %s for scsi%d\n",
   (VAR_13->cmd_status == VAR_8) ?
   "timed out" : "failed", VAR_10->host->host_no);
  VAR_14 = 1;
 }

out:
 FUNC_8(VAR_10, VAR_12);

 return VAR_14;
}
