
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_queue {int q_depth; int cq_phase; int qid; int cq_dma_addr; scalar_t__ cqes; int * q_db; scalar_t__ cq_head; int cq_poll_lock; int sq_lock; struct nvme_dev* dev; int sqes; } ;
struct TYPE_2__ {int queue_count; } ;
struct nvme_dev {int db_stride; int dev; TYPE_1__ ctrl; int * dbs; int io_sqes; struct nvme_queue* queues; } ;


 int FUNC_0 (struct nvme_queue*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (int ,int ,void*,int ) ;
 scalar_t__ FUNC_3 (struct nvme_dev*,struct nvme_queue*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct nvme_dev *VAR_3, int VAR_4, int VAR_5)
{
 struct nvme_queue *VAR_6 = &VAR_3->queues[VAR_4];

 if (VAR_3->ctrl.queue_count > VAR_4)
  return 0;

 VAR_6->sqes = VAR_4 ? VAR_3->io_sqes : VAR_2;
 VAR_6->q_depth = VAR_5;
 VAR_6->cqes = FUNC_1(VAR_3->dev, FUNC_0(VAR_6),
      &VAR_6->cq_dma_addr, VAR_1);
 if (!VAR_6->cqes)
  goto free_nvmeq;

 if (FUNC_3(VAR_3, VAR_6, VAR_4))
  goto free_cqdma;

 VAR_6->dev = VAR_3;
 FUNC_4(&VAR_6->sq_lock);
 FUNC_4(&VAR_6->cq_poll_lock);
 VAR_6->cq_head = 0;
 VAR_6->cq_phase = 1;
 VAR_6->q_db = &VAR_3->dbs[VAR_4 * 2 * VAR_3->db_stride];
 VAR_6->qid = VAR_4;
 VAR_3->ctrl.queue_count++;

 return 0;

 free_cqdma:
 FUNC_2(VAR_3->dev, FUNC_0(VAR_6), (void *)VAR_6->cqes,
     VAR_6->cq_dma_addr);
 free_nvmeq:
 return -VAR_0;
}
