
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int dummy; } ;
struct nvme_tcp_request {scalar_t__ offset; int state; } ;
struct nvme_tcp_r2t_pdu {int command_id; } ;
struct nvme_tcp_queue {TYPE_2__* ctrl; } ;
struct TYPE_3__ {int device; } ;
struct TYPE_4__ {TYPE_1__ ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvme_tcp_request* FUNC_0 (struct request*) ;
 struct request* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (struct nvme_tcp_queue*) ;
 int FUNC_4 (struct nvme_tcp_request*) ;
 int FUNC_5 (struct nvme_tcp_request*,struct nvme_tcp_r2t_pdu*) ;
 int FUNC_6 (struct nvme_tcp_queue*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct nvme_tcp_queue *VAR_2,
  struct nvme_tcp_r2t_pdu *VAR_3)
{
 struct nvme_tcp_request *VAR_4;
 struct request *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(FUNC_6(VAR_2), VAR_3->command_id);
 if (!VAR_5) {
  FUNC_2(VAR_2->ctrl->ctrl.device,
   "queue %d tag %#x not found\n",
   FUNC_3(VAR_2), VAR_3->command_id);
  return -VAR_0;
 }
 VAR_4 = FUNC_0(VAR_5);

 VAR_6 = FUNC_5(VAR_4, VAR_3);
 if (FUNC_7(VAR_6))
  return VAR_6;

 VAR_4->state = VAR_1;
 VAR_4->offset = 0;

 FUNC_4(VAR_4);

 return 0;
}
