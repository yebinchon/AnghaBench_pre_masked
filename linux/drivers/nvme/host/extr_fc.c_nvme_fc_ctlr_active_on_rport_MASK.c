
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvme_fc_rport {int act_ctrl_cnt; } ;
struct nvme_fc_ctrl {int assoc_active; struct nvme_fc_rport* rport; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nvme_fc_rport*) ;

__attribute__((used)) static int
FUNC_2(struct nvme_fc_ctrl *VAR_0)
{
 struct nvme_fc_rport *VAR_1 = VAR_0->rport;
 u32 VAR_2;

 if (VAR_0->assoc_active)
  return 1;

 VAR_0->assoc_active = 1;
 VAR_2 = FUNC_0(&VAR_1->act_ctrl_cnt);
 if (VAR_2 == 1)
  FUNC_1(VAR_1);

 return 0;
}
