
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ctrl; } ;
struct nvmet_rdma_queue {TYPE_1__ nvme_sq; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct nvmet_rdma_queue*) ;

__attribute__((used)) static void FUNC_2(struct nvmet_rdma_queue *VAR_0)
{
 if (VAR_0->nvme_sq.ctrl) {
  FUNC_0(VAR_0->nvme_sq.ctrl);
 } else {





  FUNC_1(VAR_0);
 }
}
