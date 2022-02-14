
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union be_invalidate_connection_params {int dummy; } be_invalidate_connection_params ;
struct be_ctrl_info {int mbox_lock; } ;
struct beiscsi_hba {struct be_ctrl_info ctrl; } ;
struct beiscsi_endpoint {scalar_t__ conn; int ep_cid; int fw_handle; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_invalidate_connection_params_in {scalar_t__ save_cfg; int cleanup_type; int cid; int session_handle; int hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct be_mcc_wrb* FUNC_0 (struct beiscsi_hba*,unsigned int*) ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (struct beiscsi_hba*,unsigned int) ;
 int FUNC_3 (struct be_mcc_wrb*,int,int,int ) ;
 struct be_invalidate_connection_params_in* FUNC_4 (struct be_mcc_wrb*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

unsigned int FUNC_7(struct beiscsi_hba *VAR_4,
        struct beiscsi_endpoint *VAR_5)
{
 struct be_invalidate_connection_params_in *VAR_6;
 struct be_ctrl_info *VAR_7 = &VAR_4->ctrl;
 struct be_mcc_wrb *VAR_8;
 unsigned int VAR_9 = 0;

 FUNC_5(&VAR_7->mbox_lock);
 VAR_8 = FUNC_0(VAR_4, &VAR_9);
 if (!VAR_8) {
  FUNC_6(&VAR_7->mbox_lock);
  return 0;
 }

 VAR_6 = FUNC_4(VAR_8);
 FUNC_3(VAR_8, sizeof(union be_invalidate_connection_params),
      1, 0);
 FUNC_1(&VAR_6->hdr, VAR_2,
      VAR_3,
      sizeof(*VAR_6));
 VAR_6->session_handle = VAR_5->fw_handle;
 VAR_6->cid = VAR_5->ep_cid;
 if (VAR_5->conn)
  VAR_6->cleanup_type = VAR_0;
 else
  VAR_6->cleanup_type = VAR_1;




 VAR_6->save_cfg = 0;
 FUNC_2(VAR_4, VAR_9);
 FUNC_6(&VAR_7->mbox_lock);
 return VAR_9;
}
