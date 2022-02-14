
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_queue {int tags; } ;
struct TYPE_2__ {scalar_t__* tags; } ;
struct nvme_dev {TYPE_1__ admin_tagset; struct nvme_queue* queues; } ;
struct blk_mq_hw_ctx {scalar_t__ tags; struct nvme_queue* driver_data; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct blk_mq_hw_ctx *VAR_0, void *VAR_1,
    unsigned int VAR_2)
{
 struct nvme_dev *VAR_3 = VAR_1;
 struct nvme_queue *VAR_4 = &VAR_3->queues[0];

 FUNC_0(VAR_2 != 0);
 FUNC_0(VAR_3->admin_tagset.tags[0] != VAR_0->tags);
 FUNC_0(VAR_4->tags);

 VAR_0->driver_data = VAR_4;
 VAR_4->tags = &VAR_3->admin_tagset.tags[0];
 return 0;
}
