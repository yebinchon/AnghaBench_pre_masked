
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request {int dummy; } ;
struct nvme_queue {TYPE_2__* dev; } ;
struct nvme_iod {struct nvme_queue* nvmeq; } ;
typedef int blk_status_t ;
struct TYPE_6__ {int status; } ;
struct TYPE_4__ {int abort_limit; int device; } ;
struct TYPE_5__ {TYPE_1__ ctrl; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct request*) ;
 struct nvme_iod* FUNC_2 (struct request*) ;
 int FUNC_3 (int ,char*,int ) ;
 TYPE_3__* FUNC_4 (struct request*) ;

__attribute__((used)) static void FUNC_5(struct request *VAR_0, blk_status_t VAR_1)
{
 struct nvme_iod *VAR_2 = FUNC_2(VAR_0);
 struct nvme_queue *VAR_3 = VAR_2->nvmeq;

 FUNC_3(VAR_3->dev->ctrl.device,
   "Abort status: 0x%x", FUNC_4(VAR_0)->status);
 FUNC_0(&VAR_3->dev->ctrl.abort_limit);
 FUNC_1(VAR_0);
}
