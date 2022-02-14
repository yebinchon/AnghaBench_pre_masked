
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t u8 ;
struct megasas_instance {int vf_affiliation_h; TYPE_6__* pdev; TYPE_8__* vf_affiliation; TYPE_7__* host; } ;
struct TYPE_14__ {TYPE_4__* sge32; } ;
struct TYPE_12__ {TYPE_8__* b; } ;
struct megasas_dcmd_frame {int sge_count; int cmd_status; TYPE_5__ sgl; void* opcode; void* data_xfer_len; scalar_t__ pad_0; scalar_t__ timeout; int flags; int cmd; TYPE_3__ mbox; } ;
struct megasas_cmd {TYPE_2__* frame; } ;
struct TYPE_10__ {scalar_t__ targetId; } ;
struct MR_LD_VF_MAP {scalar_t__* policy; int size; TYPE_1__ ref; } ;
struct MR_LD_VF_AFFILIATION {int ldCount; size_t thisVf; int size; struct MR_LD_VF_MAP* map; } ;
typedef int dma_addr_t ;
struct TYPE_17__ {int ldCount; struct MR_LD_VF_MAP* map; } ;
struct TYPE_16__ {int host_no; } ;
struct TYPE_15__ {int dev; } ;
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
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ,...) ;
 struct MR_LD_VF_AFFILIATION* FUNC_4 (int *,int,int*,int ) ;
 int FUNC_5 (int *,int,struct MR_LD_VF_AFFILIATION*,int) ;
 struct megasas_cmd* FUNC_6 (struct megasas_instance*) ;
 scalar_t__ FUNC_7 (struct megasas_instance*,struct megasas_cmd*,int ) ;
 int FUNC_8 (struct megasas_instance*,struct megasas_cmd*) ;
 int FUNC_9 (TYPE_8__*,struct MR_LD_VF_AFFILIATION*,int ) ;
 int FUNC_10 (TYPE_8__*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct megasas_instance *VAR_11,
         int VAR_12)
{
 struct megasas_cmd *VAR_13;
 struct megasas_dcmd_frame *VAR_14;
 struct MR_LD_VF_AFFILIATION *VAR_15 = ((void*)0);
 struct MR_LD_VF_MAP *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
 dma_addr_t VAR_18;
 int VAR_19, VAR_20, VAR_21 = 0, VAR_22 = 0, VAR_23 = 0;
 u8 VAR_24;

 VAR_13 = FUNC_6(VAR_11);

 if (!VAR_13) {
  FUNC_2(VAR_3, &VAR_11->pdev->dev, "megasas_get_ld_vf_affiliation12: "
         "Failed to get cmd for scsi%d\n",
         VAR_11->host->host_no);
  return -VAR_1;
 }

 VAR_14 = &VAR_13->frame->dcmd;

 if (!VAR_11->vf_affiliation) {
  FUNC_3(&VAR_11->pdev->dev, "SR-IOV: Couldn't get LD/VF "
         "affiliation for scsi%d\n", VAR_11->host->host_no);
  FUNC_8(VAR_11, VAR_13);
  return -VAR_1;
 }

 if (VAR_12)
  FUNC_10(VAR_11->vf_affiliation, 0, (VAR_4 + 1) *
         sizeof(struct MR_LD_VF_AFFILIATION));
 else {
  VAR_15 =
   FUNC_4(&VAR_11->pdev->dev,
        (VAR_4 + 1) * sizeof(struct MR_LD_VF_AFFILIATION),
        &VAR_18, VAR_2);
  if (!VAR_15) {
   FUNC_2(VAR_3, &VAR_11->pdev->dev, "SR-IOV: Couldn't allocate "
          "memory for new affiliation for scsi%d\n",
          VAR_11->host->host_no);
   FUNC_8(VAR_11, VAR_13);
   return -VAR_1;
  }
 }

 FUNC_10(VAR_14->mbox.b, 0, VAR_7);

 VAR_14->cmd = VAR_5;
 VAR_14->cmd_status = VAR_8;
 VAR_14->sge_count = 1;
 VAR_14->flags = FUNC_0(VAR_6);
 VAR_14->timeout = 0;
 VAR_14->pad_0 = 0;
 VAR_14->data_xfer_len = FUNC_1((VAR_4 + 1) *
  sizeof(struct MR_LD_VF_AFFILIATION));
 VAR_14->opcode = FUNC_1(VAR_9);

 if (VAR_12)
  VAR_14->sgl.sge32[0].phys_addr =
   FUNC_1(VAR_11->vf_affiliation_h);
 else
  VAR_14->sgl.sge32[0].phys_addr =
   FUNC_1(VAR_18);

 VAR_14->sgl.sge32[0].length = FUNC_1((VAR_4 + 1) *
  sizeof(struct MR_LD_VF_AFFILIATION));

 FUNC_3(&VAR_11->pdev->dev, "SR-IOV: Getting LD/VF affiliation for "
        "scsi%d\n", VAR_11->host->host_no);


 if (FUNC_7(VAR_11, VAR_13, 0) != VAR_0) {
  FUNC_3(&VAR_11->pdev->dev, "SR-IOV: LD/VF affiliation DCMD"
         " failed with status 0x%x for scsi%d\n",
         VAR_14->cmd_status, VAR_11->host->host_no);
  VAR_21 = 1;
  goto out;
 }

 if (!VAR_12) {
  if (!VAR_15->ldCount) {
   FUNC_3(&VAR_11->pdev->dev, "SR-IOV: Got new LD/VF "
          "affiliation for passive path for scsi%d\n",
          VAR_11->host->host_no);
   VAR_21 = 1;
   goto out;
  }
  VAR_16 = VAR_15->map;
  VAR_17 = VAR_11->vf_affiliation->map;
  VAR_24 = VAR_15->thisVf;
  for (VAR_19 = 0 ; VAR_19 < VAR_15->ldCount; VAR_19++) {
   VAR_22 = 0;
   for (VAR_20 = 0; VAR_20 < VAR_11->vf_affiliation->ldCount;
        VAR_20++) {
    if (VAR_16->ref.targetId ==
        VAR_17->ref.targetId) {
     VAR_22 = 1;
     if (VAR_16->policy[VAR_24] !=
         VAR_17->policy[VAR_24]) {
      VAR_23 = 1;
      goto out;
     }
    }
    VAR_17 = (struct MR_LD_VF_MAP *)
     ((unsigned char *)VAR_17 +
      VAR_17->size);
   }
   if (!VAR_22 && VAR_16->policy[VAR_24] !=
       VAR_10) {
    VAR_23 = 1;
    goto out;
   }
   VAR_16 = (struct MR_LD_VF_MAP *)
    ((unsigned char *)VAR_16 + VAR_16->size);
  }

  VAR_16 = VAR_15->map;
  VAR_17 = VAR_11->vf_affiliation->map;

  for (VAR_19 = 0 ; VAR_19 < VAR_11->vf_affiliation->ldCount; VAR_19++) {
   VAR_22 = 0;
   for (VAR_20 = 0 ; VAR_20 < VAR_15->ldCount; VAR_20++) {
    if (VAR_17->ref.targetId ==
        VAR_16->ref.targetId) {
     VAR_22 = 1;
     if (VAR_17->policy[VAR_24] !=
         VAR_16->policy[VAR_24]) {
      VAR_23 = 1;
      goto out;
     }
    }
    VAR_16 = (struct MR_LD_VF_MAP *)
     ((unsigned char *)VAR_16 +
      VAR_16->size);
   }
   if (!VAR_22 && VAR_17->policy[VAR_24] !=
       VAR_10) {
    VAR_23 = 1;
    goto out;
   }
   VAR_17 = (struct MR_LD_VF_MAP *)
    ((unsigned char *)VAR_17 +
     VAR_17->size);
  }
 }
out:
 if (VAR_23) {
  FUNC_3(&VAR_11->pdev->dev, "SR-IOV: Got new LD/VF "
         "affiliation for scsi%d\n", VAR_11->host->host_no);
  FUNC_9(VAR_11->vf_affiliation, VAR_15,
         VAR_15->size);
  VAR_21 = 1;
 }

 if (VAR_15)
  FUNC_5(&VAR_11->pdev->dev,
        (VAR_4 + 1) *
        sizeof(struct MR_LD_VF_AFFILIATION),
        VAR_15, VAR_18);
 FUNC_8(VAR_11, VAR_13);

 return VAR_21;
}
