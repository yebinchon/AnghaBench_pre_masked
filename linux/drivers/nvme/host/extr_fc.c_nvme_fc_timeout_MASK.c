
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct nvme_fc_fcp_op {struct nvme_fc_ctrl* ctrl; } ;
struct nvme_fc_ctrl {int dummy; } ;
typedef enum blk_eh_timer_return { ____Placeholder_blk_eh_timer_return } blk_eh_timer_return ;


 int VAR_0 ;
 struct nvme_fc_fcp_op* FUNC_0 (struct request*) ;
 int FUNC_1 (struct nvme_fc_ctrl*,char*) ;

__attribute__((used)) static enum blk_eh_timer_return
FUNC_2(struct request *VAR_1, bool VAR_2)
{
 struct nvme_fc_fcp_op *VAR_3 = FUNC_0(VAR_1);
 struct nvme_fc_ctrl *VAR_4 = VAR_3->ctrl;
 FUNC_1(VAR_4, "io timeout error");






 return VAR_0;
}
