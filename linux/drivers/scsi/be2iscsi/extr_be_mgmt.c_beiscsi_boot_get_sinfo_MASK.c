
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct be_dma_mem {int size; int dma; struct be_cmd_get_session_req* va; } ;
struct TYPE_5__ {unsigned int tag; int s_handle; struct be_dma_mem nonemb_cmd; } ;
struct be_ctrl_info {int mbox_lock; TYPE_3__* ptag_state; TYPE_1__* pdev; } ;
struct beiscsi_hba {TYPE_2__ boot_struct; struct be_ctrl_info ctrl; } ;
struct be_sge {void* len; void* pa_lo; void* pa_hi; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_cmd_get_session_resp {int dummy; } ;
struct be_cmd_get_session_req {int session_handle; int hdr; } ;
struct TYPE_6__ {int cbfn; int tag_state; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct be_mcc_wrb* FUNC_0 (struct beiscsi_hba*,unsigned int*) ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (struct beiscsi_hba*,unsigned int) ;
 int FUNC_3 (struct be_mcc_wrb*,int,int,int) ;
 int VAR_4 ;
 void* FUNC_4 (int) ;
 struct be_cmd_get_session_req* FUNC_5 (int *,int,int*,int ) ;
 int FUNC_6 (struct be_cmd_get_session_req*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct be_sge* FUNC_9 (struct be_mcc_wrb*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int) ;

unsigned int FUNC_12(struct beiscsi_hba *VAR_5)
{
 struct be_ctrl_info *VAR_6 = &VAR_5->ctrl;
 struct be_cmd_get_session_req *VAR_7;
 struct be_dma_mem *VAR_8;
 struct be_mcc_wrb *VAR_9;
 struct be_sge *VAR_10;
 unsigned int VAR_11;

 FUNC_7(&VAR_6->mbox_lock);
 VAR_9 = FUNC_0(VAR_5, &VAR_11);
 if (!VAR_9) {
  FUNC_8(&VAR_6->mbox_lock);
  return 0;
 }

 VAR_8 = &VAR_5->boot_struct.nonemb_cmd;
 VAR_8->size = sizeof(struct be_cmd_get_session_resp);
 VAR_8->va = FUNC_5(&VAR_5->ctrl.pdev->dev,
           VAR_8->size,
           &VAR_8->dma,
           VAR_1);
 if (!VAR_8->va) {
  FUNC_8(&VAR_6->mbox_lock);
  return 0;
 }

 VAR_7 = VAR_8->va;
 FUNC_6(VAR_7, 0, sizeof(*VAR_7));
 VAR_10 = FUNC_9(VAR_9);
 FUNC_3(VAR_9, sizeof(*VAR_7), 0, 1);
 FUNC_1(&VAR_7->hdr, VAR_0,
      VAR_3,
      sizeof(struct be_cmd_get_session_resp));
 VAR_7->session_handle = VAR_5->boot_struct.s_handle;
 VAR_10->pa_hi = FUNC_4(FUNC_11(VAR_8->dma));
 VAR_10->pa_lo = FUNC_4(VAR_8->dma & 0xFFFFFFFF);
 VAR_10->len = FUNC_4(VAR_8->size);

 VAR_5->boot_struct.tag = VAR_11;
 FUNC_10(VAR_2, &VAR_6->ptag_state[VAR_11].tag_state);
 VAR_6->ptag_state[VAR_11].cbfn = VAR_4;

 FUNC_2(VAR_5, VAR_11);
 FUNC_8(&VAR_6->mbox_lock);
 return VAR_11;
}
