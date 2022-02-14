
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct scatterlist {int dummy; } ;
struct nvme_sgl_desc {int type; int length; int addr; } ;
struct TYPE_10__ {struct scatterlist* sgl; } ;
struct nvme_rdma_request {int num_sge; struct ib_sge* sge; TYPE_3__ sg_table; } ;
struct nvme_rdma_queue {TYPE_7__* ctrl; TYPE_5__* device; } ;
struct TYPE_8__ {struct nvme_sgl_desc sgl; } ;
struct TYPE_9__ {TYPE_1__ dptr; } ;
struct nvme_command {TYPE_2__ common; } ;
struct ib_sge {scalar_t__ length; int lkey; int addr; } ;
struct TYPE_13__ {int icdoff; } ;
struct TYPE_14__ {TYPE_6__ ctrl; } ;
struct TYPE_12__ {TYPE_4__* pd; } ;
struct TYPE_11__ {int local_dma_lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct scatterlist*) ;
 scalar_t__ FUNC_3 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_4(struct nvme_rdma_queue *VAR_2,
  struct nvme_rdma_request *VAR_3, struct nvme_command *VAR_4,
  int VAR_5)
{
 struct nvme_sgl_desc *VAR_6 = &VAR_4->common.dptr.sgl;
 struct scatterlist *VAR_7 = VAR_3->sg_table.sgl;
 struct ib_sge *VAR_8 = &VAR_3->sge[1];
 u32 VAR_9 = 0;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++, VAR_7++, VAR_8++) {
  VAR_8->addr = FUNC_2(VAR_7);
  VAR_8->length = FUNC_3(VAR_7);
  VAR_8->lkey = VAR_2->device->pd->local_dma_lkey;
  VAR_9 += VAR_8->length;
 }

 VAR_6->addr = FUNC_1(VAR_2->ctrl->ctrl.icdoff);
 VAR_6->length = FUNC_0(VAR_9);
 VAR_6->type = (VAR_0 << 4) | VAR_1;

 VAR_3->num_sge += VAR_5;
 return 0;
}
