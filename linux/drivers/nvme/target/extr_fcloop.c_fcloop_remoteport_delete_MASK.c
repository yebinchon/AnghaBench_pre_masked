
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_fc_remote_port {struct fcloop_rport* private; } ;
struct fcloop_rport {int nport; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct nvme_fc_remote_port *VAR_0)
{
 struct fcloop_rport *VAR_1 = VAR_0->private;

 FUNC_0(VAR_1->nport);
}
