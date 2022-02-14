
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct nvmet_req {TYPE_4__* sq; TYPE_2__* cmd; } ;
struct TYPE_8__ {TYPE_3__* ctrl; } ;
struct TYPE_7__ {int kato; } ;
struct TYPE_5__ {int cdw11; } ;
struct TYPE_6__ {TYPE_1__ common; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvmet_req*,int ) ;

u16 FUNC_3(struct nvmet_req *VAR_0)
{
 u32 VAR_1 = FUNC_1(VAR_0->cmd->common.cdw11);

 VAR_0->sq->ctrl->kato = FUNC_0(VAR_1, 1000);

 FUNC_2(VAR_0, VAR_0->sq->ctrl->kato);

 return 0;
}
