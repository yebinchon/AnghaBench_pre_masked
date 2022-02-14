
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct be_ctrl_info {int mbox_lock; int mbox_mem; } ;
struct beiscsi_hba {int state; int ue2rp; struct be_ctrl_info ctrl; } ;
struct be_mcc_wrb {int dummy; } ;
struct TYPE_7__ {int ue2rp; } ;
struct TYPE_6__ {int uer; } ;
struct TYPE_8__ {TYPE_3__ resp; TYPE_2__ req; } ;
struct TYPE_5__ {int req_hdr; } ;
struct be_cmd_set_features {int param_len; TYPE_4__ param; int feature; TYPE_1__ h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct beiscsi_hba*,int ,char*) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (struct be_ctrl_info*) ;
 int FUNC_3 (struct be_mcc_wrb*,int,int,int ) ;
 int FUNC_4 (struct beiscsi_hba*,int ,int ,char*) ;
 struct be_cmd_set_features* FUNC_5 (struct be_mcc_wrb*) ;
 int FUNC_6 (struct be_mcc_wrb*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 struct be_mcc_wrb* FUNC_10 (int *) ;

int FUNC_11(struct beiscsi_hba *VAR_10)
{
 struct be_ctrl_info *VAR_11 = &VAR_10->ctrl;
 struct be_cmd_set_features *VAR_12;
 struct be_mcc_wrb *VAR_13;
 int VAR_14 = 0;

 FUNC_7(&VAR_11->mbox_lock);
 VAR_13 = FUNC_10(&VAR_11->mbox_mem);
 FUNC_6(VAR_13, 0, sizeof(*VAR_13));
 VAR_12 = FUNC_5(VAR_13);

 FUNC_3(VAR_13, sizeof(*VAR_12), 1, 0);
 FUNC_1(&VAR_12->h.req_hdr, VAR_4,
      VAR_9,
      VAR_5);
 VAR_12->feature = VAR_2;
 VAR_12->param_len = sizeof(VAR_12->param.req);
 VAR_12->param.req.uer = VAR_3;
 VAR_14 = FUNC_2(VAR_11);
 if (!VAR_14) {
  VAR_10->ue2rp = VAR_12->param.resp.ue2rp;
  FUNC_9(VAR_0, &VAR_10->state);
  FUNC_4(VAR_10, VAR_6, VAR_1,
       "BG_%d : HBA error recovery supported\n");
 } else {




  if (VAR_14 == VAR_7 ||
      VAR_14 == VAR_8)
   FUNC_0(VAR_10, VAR_6,
          "BG_%d : HBA error recovery not supported\n");
 }

 FUNC_8(&VAR_11->mbox_lock);
 return VAR_14;
}
