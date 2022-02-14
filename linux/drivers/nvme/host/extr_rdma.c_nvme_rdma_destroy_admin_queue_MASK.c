
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * data; } ;
struct TYPE_5__ {int admin_tagset; int fabrics_q; int admin_q; } ;
struct nvme_rdma_ctrl {int * queues; TYPE_3__ async_event_sqe; TYPE_1__* device; TYPE_2__ ctrl; } ;
struct nvme_command {int dummy; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_3__*,int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct nvme_rdma_ctrl *VAR_1,
  bool VAR_2)
{
 if (VAR_2) {
  FUNC_0(VAR_1->ctrl.admin_q);
  FUNC_0(VAR_1->ctrl.fabrics_q);
  FUNC_1(VAR_1->ctrl.admin_tagset);
 }
 if (VAR_1->async_event_sqe.data) {
  FUNC_2(VAR_1->device->dev, &VAR_1->async_event_sqe,
    sizeof(struct nvme_command), VAR_0);
  VAR_1->async_event_sqe.data = ((void*)0);
 }
 FUNC_3(&VAR_1->queues[0]);
}
