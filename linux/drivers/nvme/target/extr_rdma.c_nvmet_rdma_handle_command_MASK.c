
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_8__ {int length; int addr; } ;
struct nvmet_rdma_rsp {int req; int wait_list; TYPE_4__ send_sge; TYPE_2__* cmd; } ;
struct nvmet_rdma_queue {int rsp_wr_wait_lock; int rsp_wr_wait_list; int nvme_sq; int nvme_cq; TYPE_3__* dev; } ;
struct TYPE_7__ {int device; } ;
struct TYPE_6__ {TYPE_1__* sge; } ;
struct TYPE_5__ {int length; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct nvmet_rdma_rsp*) ;
 scalar_t__ FUNC_3 (struct nvmet_rdma_rsp*) ;
 int VAR_2 ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,int *,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct nvmet_rdma_queue *VAR_3,
  struct nvmet_rdma_rsp *VAR_4)
{
 u16 VAR_5;

 FUNC_0(VAR_3->dev->device,
  VAR_4->cmd->sge[0].addr, VAR_4->cmd->sge[0].length,
  VAR_0);
 FUNC_0(VAR_3->dev->device,
  VAR_4->send_sge.addr, VAR_4->send_sge.length,
  VAR_1);

 if (!FUNC_5(&VAR_4->req, &VAR_3->nvme_cq,
   &VAR_3->nvme_sq, &VAR_2))
  return;

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  goto out_err;

 if (FUNC_8(!FUNC_2(VAR_4))) {
  FUNC_6(&VAR_3->rsp_wr_wait_lock);
  FUNC_1(&VAR_4->wait_list, &VAR_3->rsp_wr_wait_list);
  FUNC_7(&VAR_3->rsp_wr_wait_lock);
 }

 return;

out_err:
 FUNC_4(&VAR_4->req, VAR_5);
}
