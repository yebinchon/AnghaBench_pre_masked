
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union nvme_result {int u16; int u32; } ;
struct nvmf_connect_data {int hostnqn; int subsysnqn; void* cntlid; int hostid; } ;
struct nvme_ctrl {int kato; int cntlid; int fabrics_q; TYPE_3__* opts; } ;
struct TYPE_4__ {int cattr; int kato; void* sqsize; scalar_t__ qid; int fctype; int opcode; } ;
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,struct nvme_command*,union nvme_result*,struct nvmf_connect_data*,int,int ,int ,int,int,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct nvmf_connect_data*) ;
 struct nvmf_connect_data* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct nvme_command*,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (struct nvme_ctrl*,int,int ,struct nvme_command*,struct nvmf_connect_data*) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int *,int *) ;

int FUNC_11(struct nvme_ctrl *VAR_11)
{
 struct nvme_command VAR_12;
 union nvme_result VAR_13;
 struct nvmf_connect_data *VAR_14;
 int VAR_15;

 FUNC_7(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.connect.opcode = VAR_9;
 VAR_12.connect.fctype = VAR_10;
 VAR_12.connect.qid = 0;
 VAR_12.connect.sqsize = FUNC_1(VAR_4 - 1);





 VAR_12.connect.kato = VAR_11->kato ?
  FUNC_2((VAR_11->kato + VAR_6) * 1000) : 0;

 if (VAR_11->opts->disable_sqflow)
  VAR_12.connect.cattr |= VAR_5;

 VAR_14 = FUNC_4(sizeof(*VAR_14), VAR_3);
 if (!VAR_14)
  return -VAR_2;

 FUNC_10(&VAR_14->hostid, &VAR_11->opts->host->id);
 VAR_14->cntlid = FUNC_1(0xffff);
 FUNC_9(VAR_14->subsysnqn, VAR_11->opts->subsysnqn, VAR_8);
 FUNC_9(VAR_14->hostnqn, VAR_11->opts->host->nqn, VAR_8);

 VAR_15 = FUNC_0(VAR_11->fabrics_q, &VAR_12, &VAR_13,
   VAR_14, sizeof(*VAR_14), 0, VAR_7, 1,
   VAR_1 | VAR_0, 0);
 if (VAR_15) {
  FUNC_8(VAR_11, VAR_15, FUNC_6(VAR_13.u32),
           &VAR_12, VAR_14);
  goto out_free_data;
 }

 VAR_11->cntlid = FUNC_5(VAR_13.u16);

out_free_data:
 FUNC_3(VAR_14);
 return VAR_15;
}
