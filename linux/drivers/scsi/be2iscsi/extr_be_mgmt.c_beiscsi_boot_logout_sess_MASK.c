
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int session_handle; } ;
struct TYPE_5__ {unsigned int tag; TYPE_1__ boot_sess; } ;
struct be_ctrl_info {int mbox_lock; TYPE_3__* ptag_state; } ;
struct beiscsi_hba {TYPE_2__ boot_struct; struct be_ctrl_info ctrl; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_cmd_req_logout_fw_sess {int session_handle; int hdr; } ;
struct TYPE_6__ {int cbfn; int tag_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct be_mcc_wrb* FUNC_0 (struct beiscsi_hba*,unsigned int*) ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (struct beiscsi_hba*,unsigned int) ;
 int FUNC_3 (struct be_mcc_wrb*,int,int,int ) ;
 int VAR_3 ;
 struct be_cmd_req_logout_fw_sess* FUNC_4 (struct be_mcc_wrb*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;

unsigned int FUNC_8(struct beiscsi_hba *VAR_4)
{
 struct be_ctrl_info *VAR_5 = &VAR_4->ctrl;
 struct be_mcc_wrb *VAR_6;
 struct be_cmd_req_logout_fw_sess *VAR_7;
 unsigned int VAR_8;

 FUNC_5(&VAR_5->mbox_lock);
 VAR_6 = FUNC_0(VAR_4, &VAR_8);
 if (!VAR_6) {
  FUNC_6(&VAR_5->mbox_lock);
  return 0;
 }

 VAR_7 = FUNC_4(VAR_6);
 FUNC_3(VAR_6, sizeof(*VAR_7), 1, 0);
 FUNC_1(&VAR_7->hdr, VAR_0,
      VAR_2,
      sizeof(struct be_cmd_req_logout_fw_sess));

 VAR_7->session_handle = VAR_4->boot_struct.boot_sess.session_handle;

 VAR_4->boot_struct.tag = VAR_8;
 FUNC_7(VAR_1, &VAR_5->ptag_state[VAR_8].tag_state);
 VAR_5->ptag_state[VAR_8].cbfn = VAR_3;

 FUNC_2(VAR_4, VAR_8);
 FUNC_6(&VAR_5->mbox_lock);

 return VAR_8;
}
