
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct request {int q; } ;
struct TYPE_9__ {int sgl; } ;
struct nvme_rdma_request {int num_sge; TYPE_4__ sg_table; int nents; int first_sgl; int ref; } ;
struct nvme_rdma_queue {TYPE_2__* ctrl; struct nvme_rdma_device* device; } ;
struct nvme_rdma_device {int num_inline_segments; TYPE_3__* pd; struct ib_device* dev; } ;
struct TYPE_6__ {int flags; } ;
struct nvme_command {TYPE_1__ common; } ;
struct ib_device {int dummy; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {scalar_t__ use_inline_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct nvme_rdma_request* FUNC_0 (struct request*) ;
 int FUNC_1 (int ,struct request*,int ) ;
 int FUNC_2 (struct request*) ;
 scalar_t__ FUNC_3 (struct request*) ;
 int FUNC_4 (struct ib_device*,int ,int ,int ) ;
 int FUNC_5 (struct ib_device*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct nvme_rdma_queue*) ;
 int FUNC_7 (struct nvme_rdma_queue*,struct nvme_rdma_request*,struct nvme_command*,int) ;
 int FUNC_8 (struct nvme_rdma_queue*,struct nvme_rdma_request*,struct nvme_command*,int) ;
 int FUNC_9 (struct nvme_rdma_queue*,struct nvme_rdma_request*,struct nvme_command*) ;
 scalar_t__ FUNC_10 (struct nvme_rdma_queue*) ;
 int FUNC_11 (struct nvme_command*) ;
 int FUNC_12 (int *,int) ;
 scalar_t__ FUNC_13 (struct request*) ;
 int FUNC_14 (struct request*) ;
 int FUNC_15 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_16 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(struct nvme_rdma_queue *VAR_6,
  struct request *VAR_7, struct nvme_command *VAR_8)
{
 struct nvme_rdma_request *VAR_9 = FUNC_0(VAR_7);
 struct nvme_rdma_device *VAR_10 = VAR_6->device;
 struct ib_device *VAR_11 = VAR_10->dev;
 int VAR_12, VAR_13;

 VAR_9->num_sge = 1;
 FUNC_12(&VAR_9->ref, 2);

 VAR_8->common.flags |= VAR_3;

 if (!FUNC_2(VAR_7))
  return FUNC_11(VAR_8);

 VAR_9->sg_table.sgl = VAR_9->first_sgl;
 VAR_13 = FUNC_15(&VAR_9->sg_table,
   FUNC_2(VAR_7), VAR_9->sg_table.sgl,
   VAR_4);
 if (VAR_13)
  return -VAR_1;

 VAR_9->nents = FUNC_1(VAR_7->q, VAR_7, VAR_9->sg_table.sgl);

 VAR_12 = FUNC_4(VAR_11, VAR_9->sg_table.sgl, VAR_9->nents,
         FUNC_14(VAR_7));
 if (FUNC_17(VAR_12 <= 0)) {
  VAR_13 = -VAR_0;
  goto out_free_table;
 }

 if (VAR_12 <= VAR_10->num_inline_segments) {
  if (FUNC_13(VAR_7) == VAR_5 && FUNC_10(VAR_6) &&
      VAR_6->ctrl->use_inline_data &&
      FUNC_3(VAR_7) <=
    FUNC_6(VAR_6)) {
   VAR_13 = FUNC_8(VAR_6, VAR_9, VAR_8, VAR_12);
   goto out;
  }

  if (VAR_12 == 1 && VAR_10->pd->flags & VAR_2) {
   VAR_13 = FUNC_9(VAR_6, VAR_9, VAR_8);
   goto out;
  }
 }

 VAR_13 = FUNC_7(VAR_6, VAR_9, VAR_8, VAR_12);
out:
 if (FUNC_17(VAR_13))
  goto out_unmap_sg;

 return 0;

out_unmap_sg:
 FUNC_5(VAR_11, VAR_9->sg_table.sgl, VAR_9->nents, FUNC_14(VAR_7));
out_free_table:
 FUNC_16(&VAR_9->sg_table, VAR_4);
 return VAR_13;
}
