
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct request {int tag; } ;
struct nvme_tcp_request {TYPE_4__* queue; struct nvme_tcp_cmd_pdu* pdu; } ;
struct TYPE_7__ {scalar_t__ state; int device; } ;
struct nvme_tcp_ctrl {TYPE_2__ ctrl; int err_work; } ;
struct TYPE_6__ {int type; } ;
struct nvme_tcp_cmd_pdu {TYPE_1__ hdr; } ;
typedef enum blk_eh_timer_return { ____Placeholder_blk_eh_timer_return } blk_eh_timer_return ;
struct TYPE_8__ {struct nvme_tcp_ctrl* ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct nvme_tcp_request* FUNC_0 (struct request*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int) ;

__attribute__((used)) static enum blk_eh_timer_return
FUNC_7(struct request *VAR_4, bool VAR_5)
{
 struct nvme_tcp_request *VAR_6 = FUNC_0(VAR_4);
 struct nvme_tcp_ctrl *VAR_7 = VAR_6->queue->ctrl;
 struct nvme_tcp_cmd_pdu *VAR_8 = VAR_6->pdu;






 if (VAR_7->ctrl.state == VAR_3)
  return VAR_1;

 FUNC_1(VAR_7->ctrl.device,
  "queue %d: timeout request %#x type %d\n",
  FUNC_4(VAR_6->queue), VAR_4->tag, VAR_8->hdr.type);

 if (VAR_7->ctrl.state != VAR_2) {





  FUNC_2(&VAR_7->err_work);
  FUNC_6(&VAR_7->ctrl, 0);
  FUNC_5(&VAR_7->ctrl, 0);
  return VAR_0;
 }

 FUNC_1(VAR_7->ctrl.device, "starting error recovery\n");
 FUNC_3(&VAR_7->ctrl);

 return VAR_1;
}
