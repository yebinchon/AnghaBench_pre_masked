
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct nvmet_req {TYPE_3__* ops; scalar_t__ ns; TYPE_2__* cmd; TYPE_4__* cqe; TYPE_5__* sq; } ;
struct TYPE_10__ {int qid; int sqhd_disabled; } ;
struct TYPE_9__ {int command_id; int sq_id; } ;
struct TYPE_8__ {int (* queue_response ) (struct nvmet_req*) ;} ;
struct TYPE_6__ {int command_id; } ;
struct TYPE_7__ {TYPE_1__ common; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct nvmet_req*,int ) ;
 int FUNC_3 (struct nvmet_req*) ;
 int FUNC_4 (struct nvmet_req*) ;
 int FUNC_5 (struct nvmet_req*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct nvmet_req *VAR_0, u16 VAR_1)
{
 if (!VAR_0->sq->sqhd_disabled)
  FUNC_3(VAR_0);
 VAR_0->cqe->sq_id = FUNC_0(VAR_0->sq->qid);
 VAR_0->cqe->command_id = VAR_0->cmd->common.command_id;

 if (FUNC_6(VAR_1))
  FUNC_2(VAR_0, VAR_1);

 FUNC_5(VAR_0);

 if (VAR_0->ns)
  FUNC_1(VAR_0->ns);
 VAR_0->ops->queue_response(VAR_0);
}
