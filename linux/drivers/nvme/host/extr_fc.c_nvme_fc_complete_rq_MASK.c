
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct nvme_fc_fcp_op {int state; struct nvme_fc_ctrl* ctrl; } ;
struct nvme_fc_ctrl {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct nvme_fc_fcp_op* FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (struct nvme_fc_ctrl*) ;
 int FUNC_4 (struct nvme_fc_ctrl*,struct request*,struct nvme_fc_fcp_op*) ;

__attribute__((used)) static void
FUNC_5(struct request *VAR_1)
{
 struct nvme_fc_fcp_op *VAR_2 = FUNC_1(VAR_1);
 struct nvme_fc_ctrl *VAR_3 = VAR_2->ctrl;

 FUNC_0(&VAR_2->state, VAR_0);

 FUNC_4(VAR_3, VAR_1, VAR_2);
 FUNC_2(VAR_1);
 FUNC_3(VAR_3);
}
