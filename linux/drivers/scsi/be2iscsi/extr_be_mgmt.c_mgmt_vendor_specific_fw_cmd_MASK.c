
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned short* vendor_cmd; } ;
struct TYPE_5__ {TYPE_1__ h_vendor; } ;
struct iscsi_bsg_request {TYPE_2__ rqst_data; } ;
struct TYPE_6__ {int payload_len; int sg_cnt; int sg_list; } ;
struct bsg_job {TYPE_3__ request_payload; int request_len; struct iscsi_bsg_request* request; } ;
struct beiscsi_hba {int dummy; } ;
struct be_sge {void* len; void* pa_lo; void* pa_hi; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_dma_mem {int size; int dma; struct be_bsg_vendor_cmd* va; } ;
struct be_ctrl_info {int mbox_lock; } ;
struct be_bsg_vendor_cmd {unsigned short region; unsigned short sector; unsigned short offset; int hdr; } ;


 int VAR_0 ;


 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct be_mcc_wrb* FUNC_0 (struct beiscsi_hba*,unsigned int*) ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (struct beiscsi_hba*,unsigned int) ;
 int FUNC_3 (struct be_mcc_wrb*,int,int,int ) ;
 int FUNC_4 (struct beiscsi_hba*,int ,int ,char*,short) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (struct be_bsg_vendor_cmd*,int ,int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct be_sge* FUNC_9 (struct be_mcc_wrb*) ;
 int FUNC_10 (int ,int ,struct be_bsg_vendor_cmd*,int ) ;
 int FUNC_11 (int) ;

unsigned int FUNC_12(struct be_ctrl_info *VAR_6,
      struct beiscsi_hba *VAR_7,
      struct bsg_job *VAR_8,
      struct be_dma_mem *VAR_9)
{
 struct be_mcc_wrb *VAR_10;
 struct be_sge *VAR_11;
 unsigned int VAR_12 = 0;
 struct iscsi_bsg_request *VAR_13 = VAR_8->request;
 struct be_bsg_vendor_cmd *VAR_14 = VAR_9->va;
 unsigned short VAR_15, VAR_16, VAR_17, VAR_18;

 VAR_9->size = VAR_8->request_payload.payload_len;
 FUNC_6(VAR_9->va, 0, VAR_9->size);
 VAR_15 = VAR_13->rqst_data.h_vendor.vendor_cmd[1];
 VAR_16 = VAR_13->rqst_data.h_vendor.vendor_cmd[2];
 VAR_17 = VAR_13->rqst_data.h_vendor.vendor_cmd[3];
 VAR_18 = VAR_13->rqst_data.h_vendor.vendor_cmd[4];
 VAR_14->region = VAR_15;
 VAR_14->sector = VAR_17;
 VAR_14->offset = VAR_18;

 if (FUNC_7(&VAR_6->mbox_lock))
  return 0;
 switch (VAR_13->rqst_data.h_vendor.vendor_cmd[0]) {
 case 128:
  VAR_18 = VAR_17 * VAR_16 + VAR_18;
  FUNC_1(&VAR_14->hdr, VAR_1,
       VAR_5, sizeof(*VAR_14));
  FUNC_10(VAR_8->request_payload.sg_list,
      VAR_8->request_payload.sg_cnt,
      VAR_9->va + VAR_18, VAR_8->request_len);
  break;
 case 129:
  FUNC_1(&VAR_14->hdr, VAR_1,
      VAR_4, sizeof(*VAR_14));
  break;
 default:
  FUNC_4(VAR_7, VAR_3, VAR_0,
       "BG_%d : Unsupported cmd = 0x%x\n\n",
       VAR_13->rqst_data.h_vendor.vendor_cmd[0]);

  FUNC_8(&VAR_6->mbox_lock);
  return -VAR_2;
 }

 VAR_10 = FUNC_0(VAR_7, &VAR_12);
 if (!VAR_10) {
  FUNC_8(&VAR_6->mbox_lock);
  return 0;
 }

 VAR_11 = FUNC_9(VAR_10);
 FUNC_3(VAR_10, VAR_9->size, 0,
      VAR_8->request_payload.sg_cnt);
 VAR_11->pa_hi = FUNC_5(FUNC_11(VAR_9->dma));
 VAR_11->pa_lo = FUNC_5(VAR_9->dma & 0xFFFFFFFF);
 VAR_11->len = FUNC_5(VAR_9->size);

 FUNC_2(VAR_7, VAR_12);

 FUNC_8(&VAR_6->mbox_lock);
 return VAR_12;
}
