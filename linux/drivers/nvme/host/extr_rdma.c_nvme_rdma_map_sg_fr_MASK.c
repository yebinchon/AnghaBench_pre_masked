
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ num_sge; TYPE_4__* wr_cqe; int opcode; } ;
struct TYPE_18__ {int access; int key; TYPE_7__* mr; TYPE_5__ wr; } ;
struct TYPE_16__ {int done; } ;
struct TYPE_15__ {int sgl; } ;
struct nvme_rdma_request {TYPE_7__* mr; TYPE_6__ reg_wr; TYPE_4__ reg_cqe; TYPE_3__ sg_table; } ;
struct nvme_rdma_queue {TYPE_8__* qp; } ;
struct nvme_keyed_sgl_desc {int type; int key; int length; int addr; } ;
struct TYPE_13__ {struct nvme_keyed_sgl_desc ksgl; } ;
struct TYPE_14__ {TYPE_1__ dptr; } ;
struct nvme_command {TYPE_2__ common; } ;
struct TYPE_20__ {int rdma_mrs; } ;
struct TYPE_19__ {int rkey; int length; int iova; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_7__*,int ,int,int *,int ) ;
 TYPE_7__* FUNC_4 (TYPE_8__*,int *) ;
 int FUNC_5 (TYPE_8__*,int *,TYPE_7__*) ;
 int FUNC_6 (TYPE_7__*,int ) ;
 int FUNC_7 (TYPE_6__*,int ,int) ;
 int VAR_9 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct nvme_rdma_queue *VAR_10,
  struct nvme_rdma_request *VAR_11, struct nvme_command *VAR_12,
  int VAR_13)
{
 struct nvme_keyed_sgl_desc *VAR_14 = &VAR_12->common.dptr.ksgl;
 int VAR_15;

 VAR_11->mr = FUNC_4(VAR_10->qp, &VAR_10->qp->rdma_mrs);
 if (FUNC_0(!VAR_11->mr))
  return -VAR_0;





 VAR_15 = FUNC_3(VAR_11->mr, VAR_11->sg_table.sgl, VAR_13, ((void*)0), VAR_8);
 if (FUNC_10(VAR_15 < VAR_13)) {
  FUNC_5(VAR_10->qp, &VAR_10->qp->rdma_mrs, VAR_11->mr);
  VAR_11->mr = ((void*)0);
  if (VAR_15 < 0)
   return VAR_15;
  return -VAR_1;
 }

 FUNC_6(VAR_11->mr, FUNC_2(VAR_11->mr->rkey));

 VAR_11->reg_cqe.done = VAR_9;
 FUNC_7(&VAR_11->reg_wr, 0, sizeof(VAR_11->reg_wr));
 VAR_11->reg_wr.wr.opcode = VAR_5;
 VAR_11->reg_wr.wr.wr_cqe = &VAR_11->reg_cqe;
 VAR_11->reg_wr.wr.num_sge = 0;
 VAR_11->reg_wr.mr = VAR_11->mr;
 VAR_11->reg_wr.key = VAR_11->mr->rkey;
 VAR_11->reg_wr.access = VAR_2 |
        VAR_3 |
        VAR_4;

 VAR_14->addr = FUNC_1(VAR_11->mr->iova);
 FUNC_8(VAR_11->mr->length, VAR_14->length);
 FUNC_9(VAR_11->mr->rkey, VAR_14->key);
 VAR_14->type = (VAR_6 << 4) |
   VAR_7;

 return 0;
}
