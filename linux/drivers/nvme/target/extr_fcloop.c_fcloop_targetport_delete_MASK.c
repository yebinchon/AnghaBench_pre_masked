
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_fc_target_port {struct fcloop_tport* private; } ;
struct fcloop_tport {int nport; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct nvmet_fc_target_port *VAR_0)
{
 struct fcloop_tport *VAR_1 = VAR_0->private;

 FUNC_0(VAR_1->nport);
}
