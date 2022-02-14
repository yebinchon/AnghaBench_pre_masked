
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmc_request {int tag; TYPE_1__* cmd; struct mmc_host* host; } ;
struct mmc_host {TYPE_2__* cqe_ops; } ;
struct TYPE_4__ {int (* cqe_request ) (struct mmc_host*,struct mmc_request*) ;} ;
struct TYPE_3__ {int opcode; } ;


 int FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_host*,struct mmc_request*,int) ;
 int FUNC_2 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (char*,int ,int ,int) ;
 int FUNC_5 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_6 (struct mmc_host*,struct mmc_request*) ;

int FUNC_7(struct mmc_host *VAR_0, struct mmc_request *VAR_1)
{
 int VAR_2;







 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2)
  goto out_err;

 VAR_1->host = VAR_0;

 FUNC_1(VAR_0, VAR_1, 1);

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2)
  goto out_err;

 VAR_2 = VAR_0->cqe_ops->cqe_request(VAR_0, VAR_1);
 if (VAR_2)
  goto out_err;

 FUNC_6(VAR_0, VAR_1);

 return 0;

out_err:
 if (VAR_1->cmd) {
  FUNC_4("%s: failed to start CQE direct CMD%u, error %d\n",
    FUNC_0(VAR_0), VAR_1->cmd->opcode, VAR_2);
 } else {
  FUNC_4("%s: failed to start CQE transfer for tag %d, error %d\n",
    FUNC_0(VAR_0), VAR_1->tag, VAR_2);
 }
 return VAR_2;
}
