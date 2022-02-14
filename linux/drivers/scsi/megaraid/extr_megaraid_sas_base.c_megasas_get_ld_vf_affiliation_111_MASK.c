
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t u8 ;
struct megasas_instance {int vf_affiliation_111_h; TYPE_8__* pdev; TYPE_9__* vf_affiliation_111; TYPE_7__* host; } ;
struct TYPE_14__ {TYPE_3__* sge32; } ;
struct TYPE_12__ {TYPE_9__* b; } ;
struct megasas_dcmd_frame {int sge_count; int cmd_status; TYPE_4__ sgl; void* opcode; void* data_xfer_len; scalar_t__ pad_0; scalar_t__ timeout; int flags; int cmd; TYPE_2__ mbox; } ;
struct megasas_cmd {TYPE_1__* frame; } ;
struct MR_LD_VF_AFFILIATION_111 {size_t thisVf; int vdCount; TYPE_6__* map; } ;
typedef int dma_addr_t ;
struct TYPE_19__ {TYPE_5__* map; } ;
struct TYPE_18__ {int dev; } ;
struct TYPE_17__ {int host_no; } ;
struct TYPE_16__ {scalar_t__* policy; } ;
struct TYPE_15__ {scalar_t__* policy; } ;
struct TYPE_13__ {void* length; void* phys_addr; } ;
struct TYPE_11__ {struct megasas_dcmd_frame dcmd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ,...) ;
 struct MR_LD_VF_AFFILIATION_111* FUNC_4 (int *,int,int*,int ) ;
 int FUNC_5 (int *,int,struct MR_LD_VF_AFFILIATION_111*,int) ;
 struct megasas_cmd* FUNC_6 (struct megasas_instance*) ;
 scalar_t__ FUNC_7 (struct megasas_instance*,struct megasas_cmd*,int ) ;
 int FUNC_8 (struct megasas_instance*,struct megasas_cmd*) ;
 int FUNC_9 (TYPE_9__*,struct MR_LD_VF_AFFILIATION_111*,int) ;
 int FUNC_10 (TYPE_9__*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct megasas_instance *VAR_9,
         int VAR_10)
{
 struct megasas_cmd *VAR_11;
 struct megasas_dcmd_frame *VAR_12;
 struct MR_LD_VF_AFFILIATION_111 *VAR_13 = ((void*)0);
 dma_addr_t VAR_14;
 int VAR_15, VAR_16 = 0;
 u8 VAR_17;

 VAR_11 = FUNC_6(VAR_9);

 if (!VAR_11) {
  FUNC_2(VAR_3, &VAR_9->pdev->dev, "megasas_get_ld_vf_affiliation_111:"
         "Failed to get cmd for scsi%d\n",
   VAR_9->host->host_no);
  return -VAR_1;
 }

 VAR_12 = &VAR_11->frame->dcmd;

 if (!VAR_9->vf_affiliation_111) {
  FUNC_3(&VAR_9->pdev->dev, "SR-IOV: Couldn't get LD/VF "
         "affiliation for scsi%d\n", VAR_9->host->host_no);
  FUNC_8(VAR_9, VAR_11);
  return -VAR_1;
 }

 if (VAR_10)
   FUNC_10(VAR_9->vf_affiliation_111, 0,
          sizeof(struct MR_LD_VF_AFFILIATION_111));
 else {
  VAR_13 =
   FUNC_4(&VAR_9->pdev->dev,
        sizeof(struct MR_LD_VF_AFFILIATION_111),
        &VAR_14, VAR_2);
  if (!VAR_13) {
   FUNC_2(VAR_3, &VAR_9->pdev->dev, "SR-IOV: Couldn't allocate "
          "memory for new affiliation for scsi%d\n",
          VAR_9->host->host_no);
   FUNC_8(VAR_9, VAR_11);
   return -VAR_1;
  }
 }

 FUNC_10(VAR_12->mbox.b, 0, VAR_6);

 VAR_12->cmd = VAR_4;
 VAR_12->cmd_status = VAR_7;
 VAR_12->sge_count = 1;
 VAR_12->flags = FUNC_0(VAR_5);
 VAR_12->timeout = 0;
 VAR_12->pad_0 = 0;
 VAR_12->data_xfer_len =
  FUNC_1(sizeof(struct MR_LD_VF_AFFILIATION_111));
 VAR_12->opcode = FUNC_1(VAR_8);

 if (VAR_10)
  VAR_12->sgl.sge32[0].phys_addr =
   FUNC_1(VAR_9->vf_affiliation_111_h);
 else
  VAR_12->sgl.sge32[0].phys_addr =
   FUNC_1(VAR_14);

 VAR_12->sgl.sge32[0].length = FUNC_1(
  sizeof(struct MR_LD_VF_AFFILIATION_111));

 FUNC_3(&VAR_9->pdev->dev, "SR-IOV: Getting LD/VF affiliation for "
        "scsi%d\n", VAR_9->host->host_no);

 if (FUNC_7(VAR_9, VAR_11, 0) != VAR_0) {
  FUNC_3(&VAR_9->pdev->dev, "SR-IOV: LD/VF affiliation DCMD"
         " failed with status 0x%x for scsi%d\n",
         VAR_12->cmd_status, VAR_9->host->host_no);
  VAR_16 = 1;
  goto out;
 }

 if (!VAR_10) {
  VAR_17 = VAR_13->thisVf;
  for (VAR_15 = 0 ; VAR_15 < VAR_13->vdCount; VAR_15++)
   if (VAR_9->vf_affiliation_111->map[VAR_15].policy[VAR_17] !=
       VAR_13->map[VAR_15].policy[VAR_17]) {
    FUNC_3(&VAR_9->pdev->dev, "SR-IOV: "
           "Got new LD/VF affiliation for scsi%d\n",
           VAR_9->host->host_no);
    FUNC_9(VAR_9->vf_affiliation_111,
           VAR_13,
           sizeof(struct MR_LD_VF_AFFILIATION_111));
    VAR_16 = 1;
    goto out;
   }
 }
out:
 if (VAR_13) {
  FUNC_5(&VAR_9->pdev->dev,
        sizeof(struct MR_LD_VF_AFFILIATION_111),
        VAR_13,
        VAR_14);
 }

 FUNC_8(VAR_9, VAR_11);

 return VAR_16;
}
