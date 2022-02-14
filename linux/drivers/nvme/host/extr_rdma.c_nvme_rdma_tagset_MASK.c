
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct nvme_rdma_queue {TYPE_3__* ctrl; } ;
struct blk_mq_tags {int dummy; } ;
struct TYPE_5__ {struct blk_mq_tags** tags; } ;
struct TYPE_4__ {struct blk_mq_tags** tags; } ;
struct TYPE_6__ {TYPE_2__ tag_set; TYPE_1__ admin_tag_set; } ;


 size_t FUNC_0 (struct nvme_rdma_queue*) ;

__attribute__((used)) static struct blk_mq_tags *FUNC_1(struct nvme_rdma_queue *VAR_0)
{
 u32 VAR_1 = FUNC_0(VAR_0);

 if (VAR_1 == 0)
  return VAR_0->ctrl->admin_tag_set.tags[VAR_1];
 return VAR_0->ctrl->tag_set.tags[VAR_1 - 1];
}
