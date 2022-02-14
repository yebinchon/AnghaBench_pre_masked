
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvmet_req {TYPE_2__* sq; } ;
struct TYPE_4__ {TYPE_1__* ctrl; } ;
struct TYPE_3__ {int kato; } ;


 int FUNC_0 (struct nvmet_req*,int) ;

void FUNC_1(struct nvmet_req *VAR_0)
{
 FUNC_0(VAR_0, VAR_0->sq->ctrl->kato * 1000);
}
