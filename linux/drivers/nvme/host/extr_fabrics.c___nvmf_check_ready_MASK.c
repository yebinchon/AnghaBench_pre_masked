
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int dummy; } ;
struct nvme_request {int flags; TYPE_2__* cmd; } ;
struct nvme_ctrl {int state; } ;
struct TYPE_3__ {int fctype; } ;
struct TYPE_4__ {TYPE_1__ fabrics; } ;





 int VAR_0 ;
 int FUNC_0 (struct request*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 struct nvme_request* FUNC_2 (struct request*) ;

bool FUNC_3(struct nvme_ctrl *VAR_2, struct request *VAR_3,
  bool VAR_4)
{
 struct nvme_request *VAR_5 = FUNC_2(VAR_3);





 if (!FUNC_0(VAR_3) || (VAR_5->flags & VAR_0))
  return 0;





 switch (VAR_2->state) {
 case 128:
 case 130:
  if (FUNC_1(VAR_5->cmd) &&
      VAR_5->cmd->fabrics.fctype == VAR_1)
   return 1;
  break;
 default:
  break;
 case 129:
  return 0;
 }

 return VAR_4;
}
