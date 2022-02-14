
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rdma_cm_id {struct nvme_rdma_queue* context; } ;
struct rdma_cm_event {int event; int status; } ;
struct nvme_rdma_queue {int cm_error; int cm_done; TYPE_2__* ctrl; } ;
struct TYPE_3__ {int device; } ;
struct TYPE_4__ {TYPE_1__ ctrl; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct nvme_rdma_queue*) ;
 int FUNC_4 (struct nvme_rdma_queue*) ;
 int FUNC_5 (struct nvme_rdma_queue*,struct rdma_cm_event*) ;
 int FUNC_6 (struct nvme_rdma_queue*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct nvme_rdma_queue*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct rdma_cm_id *VAR_1,
  struct rdma_cm_event *VAR_2)
{
 struct nvme_rdma_queue *VAR_3 = VAR_1->context;
 int VAR_4 = 0;

 FUNC_1(VAR_3->ctrl->ctrl.device, "%s (%d): status %d id %p\n",
  FUNC_9(VAR_2->event), VAR_2->event,
  VAR_2->status, VAR_1);

 switch (VAR_2->event) {
 case 137:
  VAR_4 = FUNC_3(VAR_3);
  break;
 case 130:
  VAR_4 = FUNC_8(VAR_3);
  break;
 case 133:
  VAR_3->cm_error = FUNC_4(VAR_3);

  FUNC_0(&VAR_3->cm_done);
  return 0;
 case 132:
  FUNC_6(VAR_3);
  VAR_4 = FUNC_5(VAR_3, VAR_2);
  break;
 case 131:
 case 136:
 case 128:
  FUNC_6(VAR_3);

 case 138:
  FUNC_1(VAR_3->ctrl->ctrl.device,
   "CM error event %d\n", VAR_2->event);
  VAR_4 = -VAR_0;
  break;
 case 134:
 case 139:
 case 129:
  FUNC_1(VAR_3->ctrl->ctrl.device,
   "disconnect received - connection closed\n");
  FUNC_7(VAR_3->ctrl);
  break;
 case 135:

  break;
 default:
  FUNC_2(VAR_3->ctrl->ctrl.device,
   "Unexpected RDMA CM event (%d)\n", VAR_2->event);
  FUNC_7(VAR_3->ctrl);
  break;
 }

 if (VAR_4) {
  VAR_3->cm_error = VAR_4;
  FUNC_0(&VAR_3->cm_done);
 }

 return 0;
}
