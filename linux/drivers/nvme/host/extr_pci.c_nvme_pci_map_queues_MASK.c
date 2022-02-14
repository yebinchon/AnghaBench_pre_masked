
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_dev {int dev; scalar_t__* io_queues; } ;
struct blk_mq_tag_set {int nr_maps; struct blk_mq_queue_map* map; struct nvme_dev* driver_data; } ;
struct blk_mq_queue_map {int queue_offset; scalar_t__ nr_queues; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct blk_mq_queue_map*) ;
 int FUNC_2 (struct blk_mq_queue_map*,int ,int) ;
 int FUNC_3 (struct nvme_dev*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct blk_mq_tag_set *VAR_2)
{
 struct nvme_dev *VAR_3 = VAR_2->driver_data;
 int VAR_4, VAR_5, VAR_6;

 VAR_6 = FUNC_3(VAR_3);
 for (VAR_4 = 0, VAR_5 = 0; VAR_4 < VAR_2->nr_maps; VAR_4++) {
  struct blk_mq_queue_map *VAR_7 = &VAR_2->map[VAR_4];

  VAR_7->nr_queues = VAR_3->io_queues[VAR_4];
  if (!VAR_7->nr_queues) {
   FUNC_0(VAR_4 == VAR_0);
   continue;
  }





  VAR_7->queue_offset = VAR_5;
  if (VAR_4 != VAR_1 && VAR_6)
   FUNC_2(VAR_7, FUNC_4(VAR_3->dev), VAR_6);
  else
   FUNC_1(VAR_7);
  VAR_5 += VAR_7->nr_queues;
  VAR_6 += VAR_7->nr_queues;
 }

 return 0;
}
