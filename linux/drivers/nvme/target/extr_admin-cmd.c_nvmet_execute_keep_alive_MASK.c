
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmet_req {TYPE_1__* sq; } ;
struct nvmet_ctrl {int kato; int ka_work; int cntlid; } ;
struct TYPE_2__ {struct nvmet_ctrl* ctrl; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (struct nvmet_req*,int ) ;
 int FUNC_2 (char*,int ,int) ;
 int VAR_1 ;

void FUNC_3(struct nvmet_req *VAR_2)
{
 struct nvmet_ctrl *VAR_3 = VAR_2->sq->ctrl;

 FUNC_2("ctrl %d update keep-alive timer for %d secs\n",
  VAR_3->cntlid, VAR_3->kato);

 FUNC_0(VAR_1, &VAR_3->ka_work, VAR_3->kato * VAR_0);
 FUNC_1(VAR_2, 0);
}
