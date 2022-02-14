
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int tag; } ;
struct be_ctrl_info {int mbox_lock; TYPE_2__* ptag_state; } ;
struct beiscsi_hba {TYPE_1__ boot_struct; struct be_ctrl_info ctrl; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_cmd_reopen_session_resp {int dummy; } ;
struct be_cmd_reopen_session_req {int session_handle; int reopen_type; int hdr; } ;
struct TYPE_4__ {int cbfn; int tag_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct be_mcc_wrb* FUNC_0 (struct beiscsi_hba*,unsigned int*) ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (struct beiscsi_hba*,unsigned int) ;
 int FUNC_3 (struct be_mcc_wrb*,int,int,int ) ;
 int VAR_5 ;
 struct be_cmd_reopen_session_req* FUNC_4 (struct be_mcc_wrb*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;

unsigned int FUNC_8(struct beiscsi_hba *VAR_6)
{
 struct be_ctrl_info *VAR_7 = &VAR_6->ctrl;
 struct be_mcc_wrb *VAR_8;
 struct be_cmd_reopen_session_req *VAR_9;
 unsigned int VAR_10;

 FUNC_5(&VAR_7->mbox_lock);
 VAR_8 = FUNC_0(VAR_6, &VAR_10);
 if (!VAR_8) {
  FUNC_6(&VAR_7->mbox_lock);
  return 0;
 }

 VAR_9 = FUNC_4(VAR_8);
 FUNC_3(VAR_8, sizeof(*VAR_9), 1, 0);
 FUNC_1(&VAR_9->hdr, VAR_2,
      VAR_4,
      sizeof(struct be_cmd_reopen_session_resp));
 VAR_9->reopen_type = VAR_1;
 VAR_9->session_handle = VAR_0;

 VAR_6->boot_struct.tag = VAR_10;
 FUNC_7(VAR_3, &VAR_7->ptag_state[VAR_10].tag_state);
 VAR_7->ptag_state[VAR_10].cbfn = VAR_5;

 FUNC_2(VAR_6, VAR_10);
 FUNC_6(&VAR_7->mbox_lock);
 return VAR_10;
}
