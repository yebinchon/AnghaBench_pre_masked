
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int sgl; } ;
struct nvme_rdma_request {TYPE_5__ sg_table; } ;
struct nvme_rdma_queue {TYPE_2__* device; } ;
struct nvme_keyed_sgl_desc {int type; int key; int length; int addr; } ;
struct TYPE_8__ {struct nvme_keyed_sgl_desc ksgl; } ;
struct TYPE_9__ {TYPE_3__ dptr; } ;
struct nvme_command {TYPE_4__ common; } ;
struct TYPE_7__ {TYPE_1__* pd; } ;
struct TYPE_6__ {int unsafe_global_rkey; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct nvme_rdma_queue *VAR_1,
  struct nvme_rdma_request *VAR_2, struct nvme_command *VAR_3)
{
 struct nvme_keyed_sgl_desc *VAR_4 = &VAR_3->common.dptr.ksgl;

 VAR_4->addr = FUNC_0(FUNC_3(VAR_2->sg_table.sgl));
 FUNC_1(FUNC_4(VAR_2->sg_table.sgl), VAR_4->length);
 FUNC_2(VAR_1->device->pd->unsafe_global_rkey, VAR_4->key);
 VAR_4->type = VAR_0 << 4;
 return 0;
}
