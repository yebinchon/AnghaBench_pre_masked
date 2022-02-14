
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
struct be_cmd_get_boot_target_resp {int dummy; } ;
struct be_cmd_get_boot_target_req {int hdr; } ;
struct TYPE_4__ {int cbfn; int tag_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct be_mcc_wrb* FUNC_0 (struct beiscsi_hba*,unsigned int*) ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (struct beiscsi_hba*,unsigned int) ;
 int FUNC_3 (struct be_mcc_wrb*,int,int,int ) ;
 int VAR_3 ;
 struct be_cmd_get_boot_target_req* FUNC_4 (struct be_mcc_wrb*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;

unsigned int FUNC_8(struct beiscsi_hba *VAR_4, int VAR_5)
{
 struct be_ctrl_info *VAR_6 = &VAR_4->ctrl;
 struct be_mcc_wrb *VAR_7;
 struct be_cmd_get_boot_target_req *VAR_8;
 unsigned int VAR_9;

 FUNC_5(&VAR_6->mbox_lock);
 VAR_7 = FUNC_0(VAR_4, &VAR_9);
 if (!VAR_7) {
  FUNC_6(&VAR_6->mbox_lock);
  return 0;
 }

 VAR_8 = FUNC_4(VAR_7);
 FUNC_3(VAR_7, sizeof(*VAR_8), 1, 0);
 FUNC_1(&VAR_8->hdr, VAR_0,
      VAR_2,
      sizeof(struct be_cmd_get_boot_target_resp));

 if (VAR_5) {
  VAR_4->boot_struct.tag = VAR_9;
  FUNC_7(VAR_1, &VAR_6->ptag_state[VAR_9].tag_state);
  VAR_6->ptag_state[VAR_9].cbfn = VAR_3;
 }

 FUNC_2(VAR_4, VAR_9);
 FUNC_6(&VAR_6->mbox_lock);
 return VAR_9;
}
