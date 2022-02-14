
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int queue_count; scalar_t__ tagset; } ;
struct nvme_rdma_ctrl {TYPE_1__ ctrl; } ;


 int FUNC_0 (scalar_t__,int ,TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (struct nvme_rdma_ctrl*,int) ;
 int FUNC_3 (struct nvme_rdma_ctrl*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct nvme_rdma_ctrl *VAR_1,
  bool VAR_2)
{
 if (VAR_1->ctrl.queue_count > 1) {
  FUNC_5(&VAR_1->ctrl);
  FUNC_3(VAR_1);
  if (VAR_1->ctrl.tagset) {
   FUNC_0(VAR_1->ctrl.tagset,
    VAR_0, &VAR_1->ctrl);
   FUNC_1(VAR_1->ctrl.tagset);
  }
  if (VAR_2)
   FUNC_4(&VAR_1->ctrl);
  FUNC_2(VAR_1, VAR_2);
 }
}
