
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvme_queue {int q_depth; int flags; scalar_t__ cq_vector; int cq_dma_addr; int sq_dma_addr; } ;
struct TYPE_3__ {int cap; } ;
struct nvme_dev {int online_queues; TYPE_1__ ctrl; scalar_t__ bar; struct nvme_queue* queues; int subsystem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct nvme_dev*,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct nvme_dev*,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct nvme_queue*,int ) ;
 int FUNC_8 (struct nvme_dev*,int ) ;
 int FUNC_9 (struct nvme_queue*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct nvme_dev *VAR_8)
{
 int VAR_9;
 u32 VAR_10;
 struct nvme_queue *VAR_11;

 VAR_9 = FUNC_8(VAR_8, FUNC_2(VAR_8, 0));
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8->subsystem = FUNC_10(VAR_8->bar + VAR_7) >= FUNC_1(1, 1, 0) ?
    FUNC_0(VAR_8->ctrl.cap) : 0;

 if (VAR_8->subsystem &&
     (FUNC_10(VAR_8->bar + VAR_6) & VAR_2))
  FUNC_12(VAR_2, VAR_8->bar + VAR_6);

 VAR_9 = FUNC_5(&VAR_8->ctrl);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_4(VAR_8, 0, VAR_1);
 if (VAR_9)
  return VAR_9;

 VAR_11 = &VAR_8->queues[0];
 VAR_10 = VAR_11->q_depth - 1;
 VAR_10 |= VAR_10 << 16;

 FUNC_12(VAR_10, VAR_8->bar + VAR_4);
 FUNC_3(VAR_11->sq_dma_addr, VAR_8->bar + VAR_5);
 FUNC_3(VAR_11->cq_dma_addr, VAR_8->bar + VAR_3);

 VAR_9 = FUNC_6(&VAR_8->ctrl);
 if (VAR_9)
  return VAR_9;

 VAR_11->cq_vector = 0;
 FUNC_7(VAR_11, 0);
 VAR_9 = FUNC_9(VAR_11);
 if (VAR_9) {
  VAR_8->online_queues--;
  return VAR_9;
 }

 FUNC_11(VAR_0, &VAR_11->flags);
 return VAR_9;
}
