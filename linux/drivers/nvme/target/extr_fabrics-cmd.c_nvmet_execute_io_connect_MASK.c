
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct nvmf_connect_data {scalar_t__ cntlid; int hostnqn; int subsysnqn; } ;
struct nvmf_connect_command {scalar_t__ qid; scalar_t__ recfmt; } ;
struct nvmet_req {TYPE_4__* cqe; TYPE_1__* cmd; } ;
struct nvmet_ctrl {int cntlid; TYPE_2__* subsys; } ;
struct TYPE_7__ {int u16; int u32; } ;
struct TYPE_8__ {TYPE_3__ result; } ;
struct TYPE_6__ {int max_qid; } ;
struct TYPE_5__ {struct nvmf_connect_command connect; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvmf_connect_data*) ;
 struct nvmf_connect_data* FUNC_3 (int,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct nvmet_req*,int ,struct nvmf_connect_data*,int) ;
 int FUNC_6 (int ,int ,int,struct nvmet_req*,struct nvmet_ctrl**) ;
 int FUNC_7 (struct nvmet_ctrl*) ;
 int FUNC_8 (struct nvmet_ctrl*,struct nvmet_req*) ;
 int FUNC_9 (struct nvmet_req*,int) ;
 int FUNC_10 (char*,int,int ) ;
 int FUNC_11 (char*,int) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(struct nvmet_req *VAR_5)
{
 struct nvmf_connect_command *VAR_6 = &VAR_5->cmd->connect;
 struct nvmf_connect_data *VAR_7;
 struct nvmet_ctrl *VAR_8 = ((void*)0);
 u16 VAR_9 = FUNC_4(VAR_6->qid);
 u16 VAR_10 = 0;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_0);
 if (!VAR_7) {
  VAR_10 = VAR_4;
  goto complete;
 }

 VAR_10 = FUNC_5(VAR_5, 0, VAR_7, sizeof(*VAR_7));
 if (VAR_10)
  goto out;


 VAR_5->cqe->result.u32 = 0;

 if (VAR_6->recfmt != 0) {
  FUNC_11("invalid connect version (%d).\n",
   FUNC_4(VAR_6->recfmt));
  VAR_10 = VAR_1 | VAR_3;
  goto out;
 }

 VAR_10 = FUNC_6(VAR_7->subsysnqn, VAR_7->hostnqn,
         FUNC_4(VAR_7->cntlid),
         VAR_5, &VAR_8);
 if (VAR_10)
  goto out;

 if (FUNC_12(VAR_9 > VAR_8->subsys->max_qid)) {
  FUNC_11("invalid queue id (%d)\n", VAR_9);
  VAR_10 = VAR_2 | VAR_3;
  VAR_5->cqe->result.u32 = FUNC_0(VAR_9);
  goto out_ctrl_put;
 }

 VAR_10 = FUNC_8(VAR_8, VAR_5);
 if (VAR_10) {

  VAR_5->cqe->result.u16 = FUNC_1(VAR_8->cntlid);
  goto out_ctrl_put;
 }

 FUNC_10("adding queue %d to ctrl %d.\n", VAR_9, VAR_8->cntlid);

out:
 FUNC_2(VAR_7);
complete:
 FUNC_9(VAR_5, VAR_10);
 return;

out_ctrl_put:
 FUNC_7(VAR_8);
 goto out;
}
