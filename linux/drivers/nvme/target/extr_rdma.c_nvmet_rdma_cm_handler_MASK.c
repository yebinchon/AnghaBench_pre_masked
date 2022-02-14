
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_cm_id {TYPE_1__* qp; } ;
struct rdma_cm_event {int event; int status; } ;
struct nvmet_rdma_queue {int dummy; } ;
struct TYPE_2__ {struct nvmet_rdma_queue* qp_context; } ;
 int FUNC_0 (struct rdma_cm_id*,struct nvmet_rdma_queue*) ;
 int FUNC_1 (struct rdma_cm_id*,struct rdma_cm_event*) ;
 int FUNC_2 (struct rdma_cm_id*,struct nvmet_rdma_queue*) ;
 int FUNC_3 (struct nvmet_rdma_queue*) ;
 int FUNC_4 (struct nvmet_rdma_queue*) ;
 int FUNC_5 (char*,int ,...) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct rdma_cm_id*,int ) ;

__attribute__((used)) static int FUNC_9(struct rdma_cm_id *VAR_0,
  struct rdma_cm_event *VAR_1)
{
 struct nvmet_rdma_queue *VAR_2 = ((void*)0);
 int VAR_3 = 0;

 if (VAR_0->qp)
  VAR_2 = VAR_0->qp->qp_context;

 FUNC_5("%s (%d): status %d id %p\n",
  FUNC_7(VAR_1->event), VAR_1->event,
  VAR_1->status, VAR_0);

 switch (VAR_1->event) {
 case 134:
  VAR_3 = FUNC_1(VAR_0, VAR_1);
  break;
 case 131:
  FUNC_4(VAR_2);
  break;
 case 136:
 case 132:
 case 129:
  FUNC_3(VAR_2);
  break;
 case 133:
  VAR_3 = FUNC_0(VAR_0, VAR_2);
  break;
 case 130:
  FUNC_5("Connection rejected: %s\n",
    FUNC_8(VAR_0, VAR_1->status));

 case 128:
 case 135:
  FUNC_2(VAR_0, VAR_2);
  break;
 default:
  FUNC_6("received unrecognized RDMA CM event %d\n",
   VAR_1->event);
  break;
 }

 return VAR_3;
}
