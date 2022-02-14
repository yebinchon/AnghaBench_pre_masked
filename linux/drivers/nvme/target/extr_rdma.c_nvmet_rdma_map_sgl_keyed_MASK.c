
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct rdma_cm_id {int port_num; int qp; } ;
struct TYPE_5__ {scalar_t__ transfer_len; int sg_cnt; int sg; } ;
struct nvmet_rdma_rsp {int n_rdma; TYPE_2__ req; int flags; int invalidate_rkey; int rw; TYPE_1__* queue; } ;
struct nvme_keyed_sgl_desc {int length; int key; int addr; } ;
struct TYPE_4__ {struct rdma_cm_id* cm_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static u16 FUNC_6(struct nvmet_rdma_rsp *VAR_2,
  struct nvme_keyed_sgl_desc *VAR_3, bool VAR_4)
{
 struct rdma_cm_id *VAR_5 = VAR_2->queue->cm_id;
 u64 VAR_6 = FUNC_2(VAR_3->addr);
 u32 VAR_7 = FUNC_1(VAR_3->key);
 int VAR_8;

 VAR_2->req.transfer_len = FUNC_0(VAR_3->length);


 if (!VAR_2->req.transfer_len)
  return 0;

 VAR_8 = FUNC_4(&VAR_2->req);
 if (VAR_8 < 0)
  goto error_out;

 VAR_8 = FUNC_5(&VAR_2->rw, VAR_5->qp, VAR_5->port_num,
   VAR_2->req.sg, VAR_2->req.sg_cnt, 0, VAR_6, VAR_7,
   FUNC_3(&VAR_2->req));
 if (VAR_8 < 0)
  goto error_out;
 VAR_2->n_rdma += VAR_8;

 if (VAR_4) {
  VAR_2->invalidate_rkey = VAR_7;
  VAR_2->flags |= VAR_0;
 }

 return 0;

error_out:
 VAR_2->req.transfer_len = 0;
 return VAR_1;
}
