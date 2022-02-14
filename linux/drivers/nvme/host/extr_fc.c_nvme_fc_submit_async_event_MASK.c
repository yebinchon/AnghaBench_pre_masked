
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_fc_fcp_op {int queue; } ;
struct TYPE_2__ {int device; } ;
struct nvme_fc_ctrl {int flags; TYPE_1__ ctrl; struct nvme_fc_fcp_op* aen_ops; int lock; } ;
struct nvme_ctrl {int dummy; } ;
typedef scalar_t__ blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct nvme_fc_ctrl*,int ,struct nvme_fc_fcp_op*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct nvme_fc_ctrl* FUNC_4 (struct nvme_ctrl*) ;

__attribute__((used)) static void
FUNC_5(struct nvme_ctrl *VAR_2)
{
 struct nvme_fc_ctrl *VAR_3 = FUNC_4(VAR_2);
 struct nvme_fc_fcp_op *VAR_4;
 unsigned long VAR_5;
 bool VAR_6 = 0;
 blk_status_t VAR_7;

 FUNC_2(&VAR_3->lock, VAR_5);
 if (VAR_3->flags & VAR_0)
  VAR_6 = 1;
 FUNC_3(&VAR_3->lock, VAR_5);

 if (VAR_6)
  return;

 VAR_4 = &VAR_3->aen_ops[0];

 VAR_7 = FUNC_1(VAR_3, VAR_4->queue, VAR_4, 0,
     VAR_1);
 if (VAR_7)
  FUNC_0(VAR_3->ctrl.device,
   "failed async event work\n");
}
