
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union nvme_result {int u32; } ;
typedef int u16 ;
struct nvmf_connect_data {int hostnqn; int subsysnqn; void* cntlid; int hostid; } ;
struct nvme_ctrl {int connect_q; TYPE_3__* opts; int cntlid; int sqsize; } ;
struct TYPE_4__ {int cattr; void* sqsize; void* qid; int fctype; int opcode; } ;
struct nvme_command {TYPE_1__ connect; } ;
typedef int cmd ;
struct TYPE_6__ {TYPE_2__* host; int subsysnqn; scalar_t__ disable_sqflow; } ;
struct TYPE_5__ {int nqn; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct nvme_command*,union nvme_result*,struct nvmf_connect_data*,int,int ,int ,int,int,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct nvmf_connect_data*) ;
 struct nvmf_connect_data* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nvme_command*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (struct nvme_ctrl*,int,int ,struct nvme_command*,struct nvmf_connect_data*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int *,int *) ;

int FUNC_9(struct nvme_ctrl *VAR_8, u16 VAR_9, bool VAR_10)
{
 struct nvme_command VAR_11;
 struct nvmf_connect_data *VAR_12;
 union nvme_result VAR_13;
 int VAR_14;

 FUNC_5(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.connect.opcode = VAR_6;
 VAR_11.connect.fctype = VAR_7;
 VAR_11.connect.qid = FUNC_1(VAR_9);
 VAR_11.connect.sqsize = FUNC_1(VAR_8->sqsize);

 if (VAR_8->opts->disable_sqflow)
  VAR_11.connect.cattr |= VAR_4;

 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_2;

 FUNC_8(&VAR_12->hostid, &VAR_8->opts->host->id);
 VAR_12->cntlid = FUNC_1(VAR_8->cntlid);
 FUNC_7(VAR_12->subsysnqn, VAR_8->opts->subsysnqn, VAR_5);
 FUNC_7(VAR_12->hostnqn, VAR_8->opts->host->nqn, VAR_5);

 VAR_14 = FUNC_0(VAR_8->connect_q, &VAR_11, &VAR_13,
   VAR_12, sizeof(*VAR_12), 0, VAR_9, 1,
   VAR_1 | VAR_0, VAR_10);
 if (VAR_14) {
  FUNC_6(VAR_8, VAR_14, FUNC_4(VAR_13.u32),
           &VAR_11, VAR_12);
 }
 FUNC_2(VAR_12);
 return VAR_14;
}
