
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct nvme_queue {int dummy; } ;
struct nvme_iod {struct nvme_queue* nvmeq; } ;
struct blk_mq_tag_set {struct nvme_dev* driver_data; } ;
struct nvme_dev {int ctrl; struct nvme_queue* queues; struct blk_mq_tag_set tagset; } ;
struct TYPE_2__ {int * ctrl; } ;


 int FUNC_0 (int) ;
 struct nvme_iod* FUNC_1 (struct request*) ;
 TYPE_1__* FUNC_2 (struct request*) ;

__attribute__((used)) static int FUNC_3(struct blk_mq_tag_set *VAR_0, struct request *VAR_1,
  unsigned int VAR_2, unsigned int VAR_3)
{
 struct nvme_dev *VAR_4 = VAR_0->driver_data;
 struct nvme_iod *VAR_5 = FUNC_1(VAR_1);
 int VAR_6 = (VAR_0 == &VAR_4->tagset) ? VAR_2 + 1 : 0;
 struct nvme_queue *VAR_7 = &VAR_4->queues[VAR_6];

 FUNC_0(!VAR_7);
 VAR_5->nvmeq = VAR_7;

 FUNC_2(VAR_1)->ctrl = &VAR_4->ctrl;
 return 0;
}
