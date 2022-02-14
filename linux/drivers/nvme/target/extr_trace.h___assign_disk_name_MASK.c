
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvmet_req {TYPE_4__* cmd; TYPE_2__* cq; TYPE_1__* sq; } ;
struct nvmet_ns {int device_path; } ;
struct nvmet_ctrl {int dummy; } ;
struct TYPE_7__ {int nsid; } ;
struct TYPE_8__ {TYPE_3__ rw; } ;
struct TYPE_6__ {scalar_t__ qid; } ;
struct TYPE_5__ {scalar_t__ qid; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 struct nvmet_ns* FUNC_1 (struct nvmet_ctrl*,int ) ;
 struct nvmet_ctrl* FUNC_2 (struct nvmet_req*) ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static inline void FUNC_4(char *VAR_1, struct nvmet_req *VAR_2,
  bool VAR_3)
{
 struct nvmet_ctrl *VAR_4 = FUNC_2(VAR_2);
 struct nvmet_ns *VAR_5;

 if ((VAR_3 && VAR_2->sq->qid) || (!VAR_3 && VAR_2->cq->qid)) {
  VAR_5 = FUNC_1(VAR_4, VAR_2->cmd->rw.nsid);
  FUNC_3(VAR_1, VAR_5->device_path, VAR_0);
  return;
 }

 FUNC_0(VAR_1, 0, VAR_0);
}
