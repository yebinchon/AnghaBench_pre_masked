
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request_queue {struct nvme_ns_head* queuedata; } ;
struct nvme_ns_head {int srcu; int requeue_lock; int requeue_list; int disk; } ;
struct nvme_ns {TYPE_2__* head; TYPE_1__* disk; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int bi_sector; } ;
struct bio {int bi_status; TYPE_3__ bi_iter; TYPE_1__* bi_disk; int bi_opf; } ;
typedef int blk_qc_t ;
struct TYPE_5__ {int disk; } ;
struct TYPE_4__ {int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (int *,struct bio*) ;
 int FUNC_2 (struct request_queue*,struct bio**) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (int ) ;
 struct device* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct nvme_ns*) ;
 scalar_t__ FUNC_8 (struct nvme_ns_head*) ;
 struct nvme_ns* FUNC_9 (struct nvme_ns_head*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int ,struct bio*,int ,int ) ;

__attribute__((used)) static blk_qc_t FUNC_15(struct request_queue *VAR_3,
  struct bio *VAR_4)
{
 struct nvme_ns_head *VAR_5 = VAR_3->queuedata;
 struct device *VAR_6 = FUNC_6(VAR_5->disk);
 struct nvme_ns *VAR_7;
 blk_qc_t VAR_8 = VAR_0;
 int VAR_9;







 FUNC_2(VAR_3, &VAR_4);

 VAR_9 = FUNC_12(&VAR_5->srcu);
 VAR_7 = FUNC_9(VAR_5);
 if (FUNC_7(VAR_7)) {
  VAR_4->bi_disk = VAR_7->disk;
  VAR_4->bi_opf |= VAR_2;
  FUNC_14(VAR_4->bi_disk->queue, VAR_4,
          FUNC_5(VAR_7->head->disk),
          VAR_4->bi_iter.bi_sector);
  VAR_8 = FUNC_4(VAR_4);
 } else if (FUNC_8(VAR_5)) {
  FUNC_3(VAR_6, "no usable path - requeuing I/O\n");

  FUNC_10(&VAR_5->requeue_lock);
  FUNC_1(&VAR_5->requeue_list, VAR_4);
  FUNC_11(&VAR_5->requeue_lock);
 } else {
  FUNC_3(VAR_6, "no available path - failing I/O\n");

  VAR_4->bi_status = VAR_1;
  FUNC_0(VAR_4);
 }

 FUNC_13(&VAR_5->srcu, VAR_9);
 return VAR_8;
}
