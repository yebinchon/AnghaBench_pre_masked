
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmet_rdma_queue {int idx; int host_qid; int recv_queue_size; int cmds; TYPE_1__* dev; int nvme_sq; } ;
struct TYPE_2__ {int srq; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct nvmet_rdma_queue*) ;
 int FUNC_2 (struct nvmet_rdma_queue*) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int) ;
 int FUNC_4 (struct nvmet_rdma_queue*) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static void FUNC_7(struct nvmet_rdma_queue *VAR_1)
{
 FUNC_6("freeing queue %d\n", VAR_1->idx);

 FUNC_5(&VAR_1->nvme_sq);

 FUNC_2(VAR_1);
 if (!VAR_1->dev->srq) {
  FUNC_3(VAR_1->dev, VAR_1->cmds,
    VAR_1->recv_queue_size,
    !VAR_1->host_qid);
 }
 FUNC_4(VAR_1);
 FUNC_0(&VAR_0, VAR_1->idx);
 FUNC_1(VAR_1);
}
