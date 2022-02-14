
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union be_tcp_upload_params {int dummy; } be_tcp_upload_params ;
struct be_ctrl_info {int mbox_lock; } ;
struct beiscsi_hba {struct be_ctrl_info ctrl; } ;
struct beiscsi_endpoint {scalar_t__ conn; int ep_cid; } ;
struct be_tcp_upload_params_in {int upload_type; int id; int hdr; } ;
struct be_mcc_wrb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct be_mcc_wrb* FUNC_0 (struct beiscsi_hba*,unsigned int*) ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (struct beiscsi_hba*,unsigned int) ;
 int FUNC_3 (struct be_mcc_wrb*,int,int,int ) ;
 struct be_tcp_upload_params_in* FUNC_4 (struct be_mcc_wrb*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

unsigned int FUNC_7(struct beiscsi_hba *VAR_4,
    struct beiscsi_endpoint *VAR_5)
{
 struct be_ctrl_info *VAR_6 = &VAR_4->ctrl;
 struct be_mcc_wrb *VAR_7;
 struct be_tcp_upload_params_in *VAR_8;
 unsigned int VAR_9;

 FUNC_5(&VAR_6->mbox_lock);
 VAR_7 = FUNC_0(VAR_4, &VAR_9);
 if (!VAR_7) {
  FUNC_6(&VAR_6->mbox_lock);
  return 0;
 }

 VAR_8 = FUNC_4(VAR_7);
 FUNC_3(VAR_7, sizeof(union be_tcp_upload_params), 1, 0);
 FUNC_1(&VAR_8->hdr, VAR_2,
      VAR_3, sizeof(*VAR_8));
 VAR_8->id = VAR_5->ep_cid;
 if (VAR_5->conn)
  VAR_8->upload_type = VAR_1;
 else
  VAR_8->upload_type = VAR_0;
 FUNC_2(VAR_4, VAR_9);
 FUNC_6(&VAR_6->mbox_lock);
 return VAR_9;
}
