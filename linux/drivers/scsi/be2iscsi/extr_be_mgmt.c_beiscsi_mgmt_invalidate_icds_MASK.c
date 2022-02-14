
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union be_invldt_cmds_params {int dummy; } be_invldt_cmds_params ;
struct invldt_cmds_params_in {int icd_count; TYPE_1__* table; int cleanup_type; scalar_t__ ref_handle; int hdr; } ;
struct invldt_cmd_tbl {int cid; int icd; } ;
struct be_ctrl_info {TYPE_2__* pdev; int mbox_lock; } ;
struct beiscsi_hba {struct be_ctrl_info ctrl; } ;
struct be_sge {void* len; void* pa_lo; void* pa_hi; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_dma_mem {int size; int dma; struct invldt_cmds_params_in* va; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int cid; int icd; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct be_mcc_wrb* FUNC_0 (struct beiscsi_hba*,unsigned int*) ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (struct beiscsi_hba*,unsigned int) ;
 int FUNC_3 (struct be_mcc_wrb*,int,int,int) ;
 int FUNC_4 (struct beiscsi_hba*,int ,int ,char*) ;
 int FUNC_5 (struct beiscsi_hba*,unsigned int,int *,struct be_dma_mem*) ;
 void* FUNC_6 (int) ;
 struct invldt_cmds_params_in* FUNC_7 (int *,int,int *,int ) ;
 int FUNC_8 (int *,int,struct invldt_cmds_params_in*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct be_sge* FUNC_12 (struct be_mcc_wrb*) ;
 int FUNC_13 (int ) ;

int FUNC_14(struct beiscsi_hba *VAR_10,
     struct invldt_cmd_tbl *VAR_11,
     unsigned int VAR_12)
{
 struct be_ctrl_info *VAR_13 = &VAR_10->ctrl;
 struct invldt_cmds_params_in *VAR_14;
 struct be_dma_mem VAR_15;
 struct be_mcc_wrb *VAR_16;
 unsigned int VAR_17, VAR_18;
 struct be_sge *VAR_19;
 int VAR_20;

 if (!VAR_12 || VAR_12 > VAR_1)
  return -VAR_5;

 VAR_15.size = sizeof(union be_invldt_cmds_params);
 VAR_15.va = FUNC_7(&VAR_10->ctrl.pdev->dev,
        VAR_15.size, &VAR_15.dma,
        VAR_7);
 if (!VAR_15.va) {
  FUNC_4(VAR_10, VAR_8, VAR_0,
       "BM_%d : invldt_cmds_params alloc failed\n");
  return -VAR_6;
 }

 FUNC_10(&VAR_13->mbox_lock);
 VAR_16 = FUNC_0(VAR_10, &VAR_18);
 if (!VAR_16) {
  FUNC_11(&VAR_13->mbox_lock);
  FUNC_8(&VAR_10->ctrl.pdev->dev, VAR_15.size,
        VAR_15.va, VAR_15.dma);
  return -VAR_6;
 }

 VAR_14 = VAR_15.va;
 FUNC_3(VAR_16, VAR_15.size, 0, 1);
 FUNC_1(&VAR_14->hdr, VAR_3,
   VAR_9,
   sizeof(*VAR_14));
 VAR_14->ref_handle = 0;
 VAR_14->cleanup_type = VAR_2;
 for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17++) {
  VAR_14->table[VAR_17].icd = VAR_11[VAR_17].icd;
  VAR_14->table[VAR_17].cid = VAR_11[VAR_17].cid;
  VAR_14->icd_count++;
 }
 VAR_19 = FUNC_12(VAR_16);
 VAR_19->pa_hi = FUNC_6(FUNC_13(VAR_15.dma));
 VAR_19->pa_lo = FUNC_6(FUNC_9(VAR_15.dma));
 VAR_19->len = FUNC_6(VAR_15.size);

 FUNC_2(VAR_10, VAR_18);
 FUNC_11(&VAR_13->mbox_lock);

 VAR_20 = FUNC_5(VAR_10, VAR_18, ((void*)0), &VAR_15);
 if (VAR_20 != -VAR_4)
  FUNC_8(&VAR_10->ctrl.pdev->dev, VAR_15.size,
        VAR_15.va, VAR_15.dma);
 return VAR_20;
}
