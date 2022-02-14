
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct be_ctrl_info {int mbox_lock; int mbox_mem; } ;
struct beiscsi_hba {struct be_ctrl_info ctrl; } ;
struct be_mcc_wrb {int dummy; } ;
struct TYPE_5__ {scalar_t__ param_len; scalar_t__ param_data; int param_id; } ;
struct TYPE_6__ {TYPE_2__ req; } ;
struct TYPE_4__ {int req_hdr; } ;
struct be_cmd_set_host_data {TYPE_3__ param; TYPE_1__ h; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct beiscsi_hba*,int ,char*) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (struct be_ctrl_info*) ;
 int FUNC_4 (struct be_mcc_wrb*,int,int,int ) ;
 int FUNC_5 (struct beiscsi_hba*,int ,int ,char*) ;
 struct be_cmd_set_host_data* FUNC_6 (struct be_mcc_wrb*) ;
 scalar_t__ FUNC_7 (struct beiscsi_hba*) ;
 int FUNC_8 (struct be_mcc_wrb*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (char*,int,char*,char*) ;
 struct be_mcc_wrb* FUNC_12 (int *) ;

int FUNC_13(struct beiscsi_hba *VAR_10)
{
 struct be_ctrl_info *VAR_11 = &VAR_10->ctrl;
 struct be_cmd_set_host_data *VAR_12;
 struct be_mcc_wrb *VAR_13;
 int VAR_14 = 0;

 if (FUNC_7(VAR_10))
  return VAR_14;

 FUNC_9(&VAR_11->mbox_lock);
 VAR_13 = FUNC_12(&VAR_11->mbox_mem);
 FUNC_8(VAR_13, 0, sizeof(*VAR_13));
 VAR_12 = FUNC_6(VAR_13);

 FUNC_4(VAR_13, sizeof(*VAR_12), 1, 0);
 FUNC_2(&VAR_12->h.req_hdr, VAR_4,
      VAR_9,
      VAR_5);
 VAR_12->param.req.param_id = VAR_2;
 VAR_12->param.req.param_len =
  FUNC_11((char *)VAR_12->param.req.param_data,
    sizeof(VAR_12->param.req.param_data),
    "Linux iSCSI v%s", VAR_3);
 VAR_12->param.req.param_len = FUNC_0(VAR_12->param.req.param_len + 1, 4);
 if (VAR_12->param.req.param_len > VAR_1)
  VAR_12->param.req.param_len = VAR_1;
 VAR_14 = FUNC_3(VAR_11);
 if (!VAR_14) {
  FUNC_5(VAR_10, VAR_6, VAR_0,
       "BG_%d : HBA set host driver version\n");
 } else {




  if (VAR_14 == VAR_7 ||
    VAR_14 == VAR_8)
   FUNC_1(VAR_10, VAR_6,
          "BG_%d : HBA failed to set host driver version\n");
 }

 FUNC_10(&VAR_11->mbox_lock);
 return VAR_14;
}
