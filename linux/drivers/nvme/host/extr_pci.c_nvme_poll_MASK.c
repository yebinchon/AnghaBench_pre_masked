
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nvme_queue {int cq_poll_lock; } ;
struct blk_mq_hw_ctx {struct nvme_queue* driver_data; } ;


 int FUNC_0 (struct nvme_queue*,int ,int ) ;
 int FUNC_1 (struct nvme_queue*) ;
 int FUNC_2 (struct nvme_queue*,int *,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct blk_mq_hw_ctx *VAR_0)
{
 struct nvme_queue *VAR_1 = VAR_0->driver_data;
 u16 VAR_2, VAR_3;
 bool VAR_4;

 if (!FUNC_1(VAR_1))
  return 0;

 FUNC_3(&VAR_1->cq_poll_lock);
 VAR_4 = FUNC_2(VAR_1, &VAR_2, &VAR_3, -1);
 FUNC_4(&VAR_1->cq_poll_lock);

 FUNC_0(VAR_1, VAR_2, VAR_3);
 return VAR_4;
}
