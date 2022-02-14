
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_queue {void* sq_cmds; int sq_dma_addr; TYPE_1__* dev; int flags; int cq_dma_addr; scalar_t__ cqes; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct nvme_queue*) ;
 int VAR_0 ;
 int FUNC_1 (struct nvme_queue*) ;
 int FUNC_2 (int ,int ,void*,int ) ;
 int FUNC_3 (int ,void*,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct nvme_queue *VAR_1)
{
 FUNC_2(VAR_1->dev->dev, FUNC_0(VAR_1),
    (void *)VAR_1->cqes, VAR_1->cq_dma_addr);
 if (!VAR_1->sq_cmds)
  return;

 if (FUNC_4(VAR_0, &VAR_1->flags)) {
  FUNC_3(FUNC_5(VAR_1->dev->dev),
    VAR_1->sq_cmds, FUNC_1(VAR_1));
 } else {
  FUNC_2(VAR_1->dev->dev, FUNC_1(VAR_1),
    VAR_1->sq_cmds, VAR_1->sq_dma_addr);
 }
}
