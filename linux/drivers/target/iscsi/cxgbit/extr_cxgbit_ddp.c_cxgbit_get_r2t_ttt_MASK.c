
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_r2t {int targ_xfer_tag; } ;
struct iscsi_conn {struct cxgbit_sock* context; } ;
struct TYPE_4__ {int data_length; scalar_t__ t_data_nents; int * t_data_sg; } ;
struct iscsi_cmd {TYPE_2__ se_cmd; } ;
struct TYPE_3__ {int flags; struct cxgbit_device* cdev; } ;
struct cxgbit_sock {TYPE_1__ com; } ;
struct cxgbit_device {int dummy; } ;
struct cxgbi_task_tag_info {int tag; scalar_t__ nents; int * sgl; } ;
struct cxgbit_cmd {int setup_ddp; int release; struct cxgbi_task_tag_info ttinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cxgbit_sock*,struct cxgbi_task_tag_info*,int ) ;
 struct cxgbit_cmd* FUNC_1 (struct iscsi_cmd*) ;
 int FUNC_2 (char*,struct cxgbit_sock*,struct iscsi_cmd*,int ,...) ;
 int FUNC_3 (int ,int *) ;

void
FUNC_4(struct iscsi_conn *VAR_2, struct iscsi_cmd *VAR_3,
     struct iscsi_r2t *VAR_4)
{
 struct cxgbit_sock *VAR_5 = VAR_2->context;
 struct cxgbit_device *VAR_6 = VAR_5->com.cdev;
 struct cxgbit_cmd *VAR_7 = FUNC_1(VAR_3);
 struct cxgbi_task_tag_info *VAR_8 = &VAR_7->ttinfo;
 int VAR_9 = -VAR_1;

 if ((!VAR_7->setup_ddp) ||
     (!FUNC_3(VAR_0, &VAR_5->com.flags)))
  goto out;

 VAR_7->setup_ddp = 0;

 VAR_8->sgl = VAR_3->se_cmd.t_data_sg;
 VAR_8->nents = VAR_3->se_cmd.t_data_nents;

 VAR_9 = FUNC_0(VAR_5, VAR_8, VAR_3->se_cmd.data_length);
 if (VAR_9 < 0) {
  FUNC_2("csk 0x%p, cmd 0x%p, xfer len %u, sgcnt %u no ddp.\n",
    VAR_5, VAR_3, VAR_3->se_cmd.data_length, VAR_8->nents);

  VAR_8->sgl = ((void*)0);
  VAR_8->nents = 0;
 } else {
  VAR_7->release = 1;
 }
out:
 FUNC_2("cdev 0x%p, cmd 0x%p, tag 0x%x\n", VAR_6, VAR_3, VAR_8->tag);
 VAR_4->targ_xfer_tag = VAR_8->tag;
}
