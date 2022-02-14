
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct nvmet_req {TYPE_3__* sq; } ;
struct TYPE_5__ {int opcode; } ;
struct nvme_command {TYPE_2__ common; } ;
struct TYPE_6__ {int qid; TYPE_1__* ctrl; } ;
struct TYPE_4__ {int cc; int csts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;

u16 FUNC_2(struct nvmet_req *VAR_4, struct nvme_command *VAR_5)
{
 if (FUNC_1(!(VAR_4->sq->ctrl->cc & VAR_0))) {
  FUNC_0("got cmd %d while CC.EN == 0 on qid = %d\n",
         VAR_5->common.opcode, VAR_4->sq->qid);
  return VAR_2 | VAR_3;
 }

 if (FUNC_1(!(VAR_4->sq->ctrl->csts & VAR_1))) {
  FUNC_0("got cmd %d while CSTS.RDY == 0 on qid = %d\n",
         VAR_5->common.opcode, VAR_4->sq->qid);
  return VAR_2 | VAR_3;
 }
 return 0;
}
