
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int dummy; } ;
struct nvme_tcp_queue {int nr_cqe; TYPE_1__* ctrl; } ;
struct nvme_completion {int result; int status; int command_id; } ;
struct TYPE_4__ {int device; } ;
struct TYPE_3__ {TYPE_2__ ctrl; } ;


 int VAR_0 ;
 struct request* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (struct request*,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct nvme_tcp_queue*) ;
 int FUNC_5 (struct nvme_tcp_queue*) ;

__attribute__((used)) static int FUNC_6(struct nvme_tcp_queue *VAR_1,
  struct nvme_completion *VAR_2)
{
 struct request *VAR_3;

 VAR_3 = FUNC_0(FUNC_5(VAR_1), VAR_2->command_id);
 if (!VAR_3) {
  FUNC_1(VAR_1->ctrl->ctrl.device,
   "queue %d tag 0x%x not found\n",
   FUNC_4(VAR_1), VAR_2->command_id);
  FUNC_3(&VAR_1->ctrl->ctrl);
  return -VAR_0;
 }

 FUNC_2(VAR_3, VAR_2->status, VAR_2->result);
 VAR_1->nr_cqe++;

 return 0;
}
