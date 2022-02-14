
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_fc_rport {struct nvme_fc_lport* lport; } ;
struct nvme_fc_lport {int act_rport_cnt; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct nvme_fc_rport *VAR_0)
{
 struct nvme_fc_lport *VAR_1 = VAR_0->lport;

 FUNC_0(&VAR_1->act_rport_cnt);
}
