
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_queue {scalar_t__ sq_tail; scalar_t__ last_sq_tail; int sq_lock; } ;
struct blk_mq_hw_ctx {struct nvme_queue* driver_data; } ;


 int FUNC_0 (struct nvme_queue*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct blk_mq_hw_ctx *VAR_0)
{
 struct nvme_queue *VAR_1 = VAR_0->driver_data;

 FUNC_1(&VAR_1->sq_lock);
 if (VAR_1->sq_tail != VAR_1->last_sq_tail)
  FUNC_0(VAR_1, 1);
 FUNC_2(&VAR_1->sq_lock);
}
