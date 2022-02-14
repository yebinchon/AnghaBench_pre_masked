
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct rdma_cm_id {int dummy; } ;
struct rdma_cm_event {int status; } ;
struct nvme_rdma_queue {TYPE_2__* ctrl; struct rdma_cm_id* cm_id; } ;
struct nvme_rdma_cm_rej {int sts; } ;
struct TYPE_3__ {int device; } ;
struct TYPE_4__ {TYPE_1__ ctrl; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,char const*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct nvme_rdma_cm_rej* FUNC_3 (struct rdma_cm_id*,struct rdma_cm_event*,int*) ;
 char* FUNC_4 (struct rdma_cm_id*,int) ;

__attribute__((used)) static int FUNC_5(struct nvme_rdma_queue *VAR_1,
  struct rdma_cm_event *VAR_2)
{
 struct rdma_cm_id *VAR_3 = VAR_1->cm_id;
 int VAR_4 = VAR_2->status;
 const char *VAR_5;
 const struct nvme_rdma_cm_rej *VAR_6;
 u8 VAR_7;

 VAR_5 = FUNC_4(VAR_3, VAR_4);
 VAR_6 = FUNC_3(VAR_3, VAR_2, &VAR_7);

 if (VAR_6 && VAR_7 >= sizeof(u16)) {
  u16 VAR_8 = FUNC_1(VAR_6->sts);

  FUNC_0(VAR_1->ctrl->ctrl.device,
        "Connect rejected: status %d (%s) nvme status %d (%s).\n",
        VAR_4, VAR_5, VAR_8, FUNC_2(VAR_8));
 } else {
  FUNC_0(VAR_1->ctrl->ctrl.device,
   "Connect rejected: status %d (%s).\n", VAR_4, VAR_5);
 }

 return -VAR_0;
}
