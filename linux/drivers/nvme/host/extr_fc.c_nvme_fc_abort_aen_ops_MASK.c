
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_fc_fcp_op {int flags; } ;
struct nvme_fc_ctrl {struct nvme_fc_fcp_op* aen_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvme_fc_ctrl*,struct nvme_fc_fcp_op*) ;

__attribute__((used)) static void
FUNC_1(struct nvme_fc_ctrl *VAR_2)
{
 struct nvme_fc_fcp_op *VAR_3 = VAR_2->aen_ops;
 int VAR_4;


 if (!(VAR_3->flags & VAR_0))
  return;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++, VAR_3++)
  FUNC_0(VAR_2, VAR_3);
}
