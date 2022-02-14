
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct hwi_wrb_context {int doorbell_offset; int ulp_num; int cid; } ;
struct TYPE_2__ {scalar_t__ dual_ulp_aware; } ;
struct beiscsi_hba {TYPE_1__ fw_config; } ;
struct be_wrbq_create_resp {int doorbell_offset; int ulp_num; int cid; } ;
struct be_wrbq_create_req {int dua_feature; int pages; int ulp_num; int num_pages; int hdr; } ;
struct be_queue_info {int created; int id; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_dma_mem {int size; int va; } ;
struct be_ctrl_info {int mbox_lock; int pdev; int mbox_mem; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ,int ,int) ;
 int FUNC_3 (int ,int ,struct be_dma_mem*) ;
 int FUNC_4 (struct be_ctrl_info*) ;
 int FUNC_5 (struct be_mcc_wrb*,int,int,int ) ;
 void* FUNC_6 (struct be_mcc_wrb*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct be_mcc_wrb*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct beiscsi_hba* FUNC_11 (int ) ;
 struct be_mcc_wrb* FUNC_12 (int *) ;

int FUNC_13(struct be_ctrl_info *VAR_6,
   struct be_dma_mem *VAR_7,
   struct be_queue_info *VAR_8,
   struct hwi_wrb_context *VAR_9,
   uint8_t VAR_10)
{
 struct be_mcc_wrb *VAR_11 = FUNC_12(&VAR_6->mbox_mem);
 struct be_wrbq_create_req *VAR_12 = FUNC_6(VAR_11);
 struct be_wrbq_create_resp *VAR_13 = FUNC_6(VAR_11);
 struct beiscsi_hba *VAR_14 = FUNC_11(VAR_6->pdev);
 int VAR_15;

 FUNC_9(&VAR_6->mbox_lock);
 FUNC_8(VAR_11, 0, sizeof(*VAR_11));

 FUNC_5(VAR_11, sizeof(*VAR_12), 1, 0);

 FUNC_2(&VAR_12->hdr, VAR_3,
  VAR_5, sizeof(*VAR_12));
 VAR_12->num_pages = FUNC_1(VAR_7->va, VAR_7->size);

 if (VAR_14->fw_config.dual_ulp_aware) {
  VAR_12->ulp_num = VAR_10;
  VAR_12->dua_feature |= (1 << VAR_1);
  VAR_12->dua_feature |= (1 << VAR_0);
 }

 FUNC_3(VAR_12->pages, FUNC_0(VAR_12->pages), VAR_7);

 VAR_15 = FUNC_4(VAR_6);
 if (!VAR_15) {
  VAR_8->id = FUNC_7(VAR_13->cid);
  VAR_8->created = 1;

  VAR_9->cid = VAR_8->id;
  if (!VAR_14->fw_config.dual_ulp_aware) {
   VAR_9->doorbell_offset = VAR_4;
   VAR_9->ulp_num = VAR_2;
  } else {
   VAR_9->ulp_num = VAR_13->ulp_num;
   VAR_9->doorbell_offset = VAR_13->doorbell_offset;
  }
 }
 FUNC_10(&VAR_6->mbox_lock);
 return VAR_15;
}
