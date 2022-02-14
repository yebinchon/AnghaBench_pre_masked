
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_fc_rport {int lport; } ;
struct nvme_fc_remote_port {int dummy; } ;


 int FUNC_0 (int ,struct nvme_fc_rport*) ;
 struct nvme_fc_rport* FUNC_1 (struct nvme_fc_remote_port*) ;

void
FUNC_2(struct nvme_fc_remote_port *VAR_0)
{
 struct nvme_fc_rport *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->lport, VAR_1);
}
