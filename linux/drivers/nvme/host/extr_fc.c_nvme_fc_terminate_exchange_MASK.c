
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct nvme_fc_fcp_op {int dummy; } ;
struct nvme_fc_ctrl {int dummy; } ;
struct nvme_ctrl {int dummy; } ;


 int FUNC_0 (struct nvme_fc_ctrl*,struct nvme_fc_fcp_op*) ;
 struct nvme_fc_fcp_op* FUNC_1 (struct request*) ;
 struct nvme_fc_ctrl* FUNC_2 (struct nvme_ctrl*) ;

__attribute__((used)) static bool
FUNC_3(struct request *VAR_0, void *VAR_1, bool VAR_2)
{
 struct nvme_ctrl *VAR_3 = VAR_1;
 struct nvme_fc_ctrl *VAR_4 = FUNC_2(VAR_3);
 struct nvme_fc_fcp_op *VAR_5 = FUNC_1(VAR_0);

 FUNC_0(VAR_4, VAR_5);
 return 1;
}
